<?php

function get_standings($season, $competition = 'League 1', $country = 'Mali', $limit = false, $pool = true) {
    $cid = 'footmali_get_standings_' . str_replace(' ', '_', strtolower($competition));
    $bin = 'cache';

    if ($cached = cache_get($cid, $bin)) {
        $query_result = $cached->data;

        return $query_result;
    } else {
        $fixture_query = 'SELECT n.nid, s.field_season_value as season, ';
        $fixture_query .= 'hteam.field_home_team_nid as hometeam, ';
        $fixture_query .= 'hscore.field_home_team_score_value as goalsfor, ';
        $fixture_query .= 'ascore.field_away_team_score_value as goalsagainst, ';
        $fixture_query .= 'ateam.field_away_team_nid as awayteam, ';
        $fixture_query .= 'tgroup.name as pool ';
        $fixture_query .= 'FROM node as n ';
        $fixture_query .= 'LEFT JOIN field_data_field_season as s ON n.nid = s.entity_id ';
        $fixture_query .= 'JOIN field_data_field_home_team as hteam ON n.nid = hteam.entity_id ';
        $fixture_query .= 'JOIN field_data_field_home_team_score as hscore ON n.nid = hscore.entity_id ';
        $fixture_query .= 'JOIN field_data_field_away_team as ateam ON n.nid = ateam.entity_id ';
        $fixture_query .= 'JOIN field_data_field_away_team_score as ascore ON n.nid = ascore.entity_id ';
        $fixture_query .= 'JOIN field_data_field_match_played as mstatus ON n.nid = mstatus.entity_id ';

        $fixture_query .= 'JOIN field_data_field_competition as mcompetition ON n.nid = mcompetition.entity_id ';
        $fixture_query .= 'JOIN taxonomy_term_data as tcompetition ON mcompetition.field_competition_target_id = tcompetition.tid ';
        $fixture_query .= 'JOIN field_data_field_country as country ON tcompetition.tid = country.entity_id ';
        $fixture_query .= 'JOIN field_data_field_competition_group as mgroup ON n.nid = mgroup.entity_id ';
        $fixture_query .= 'JOIN taxonomy_term_data as tgroup ON mgroup.field_competition_group_target_id = tgroup.tid ';
        $fixture_query .= "WHERE n.type = 'fixture' ";
        $fixture_query .= "AND country.field_country_value = :country ";
        $fixture_query .= "AND tcompetition.name = :competition ";
        $fixture_query .= "AND mstatus.field_match_played_value = 1 ";
        if($season){
            $fixture_query .= "AND s.field_season_value = :season ";
        }

        $query  = 'SELECT results.pool, results.team, count(*) played, ';
        $query .= 'count(case when goalsfor > goalsagainst then 1 end) wins, ';
        $query .= 'count(case when goalsagainst > goalsfor then 1 end) lost, ';
        $query .= 'count(case when goalsfor = goalsagainst then 1 end) draws, ';
        $query .= 'sum(goalsfor) goalsfor, ';
        $query .= 'sum(goalsagainst) goalsagainst, ';
        $query .= 'sum(goalsfor) - sum(goalsagainst) goal_diff, ';
        $query .= 'sum( ';
        $query .= 'case when goalsfor > goalsagainst then 3 else 0 end ';
        $query .= '+ case when goalsfor = goalsagainst then 1 else 0 end ';
        $query .= ') points ';
        $query .= 'FROM ( ';
        $query .= 'SELECT a.hometeam team, a.goalsfor, a.goalsagainst, a.pool FROM ( ';
        $query .= "($fixture_query) a ";
        $query .= ')  ';
        $query .= 'UNION ALL ';
        $query .= 'SELECT b.awayteam, b.goalsagainst, b.goalsfor, b.pool FROM ( ';
        $query .= "($fixture_query) b ";
        $query .= ') ';
        $query .= ') AS results ';

        $query .= 'GROUP BY results.pool, results.team ';
        $query .= 'ORDER BY results.pool ASC, points DESC, goal_diff DESC ';
        if ($limit) {
            $query .= "LIMIT {$limit}";
        }

        if($season){
            $query_result = db_query($query, array(
                ':season' => $season,
                ':competition' => $competition,
                ':country' => $country
            ));
        }else {
            $query_result = db_query($query, array(
                ':competition' => $competition,
                ':country' => $country
            ));
        }

        $standings = $query_result->fetchAllAssoc('team');

        if($pool){
            $returnArray = array();
            foreach ($standings as $standing) {
                if ($standing->pool === 'Poule A') {
                    $returnArray['pouleA'][] = $standing;
                } else {
                    $returnArray['pouleB'][] = $standing;
                }
            }
            $standings = $returnArray;
        }

        $expire = strtotime('+4 days', time());
        //cache_set($cid, $standings, $bin, $expire);

        return $standings;
    }
}

function popular_articles($limit = 10) {
    $cid = 'footmali_popular_articles_' . $limit;
    $bin = 'cache';

    if ($cached = cache_get($cid, $bin)) {
        $query_result = $cached->data;

        return $query_result;
    } else {
        $articles_query = 'SELECT DISTINCT n.nid, n.title, c.totalcount ';
        $articles_query .= 'FROM node n left join node_counter c on n.nid = c.nid ';
        $articles_query .= 'WHERE n.status = 1 ';
        $articles_query .= "AND n.type = 'article' ";
        $articles_query .= 'AND c.totalcount >= 1 ';
        $articles_query .= 'ORDER BY n.created desc, c.totalcount desc ';
        $articles_query .= 'LIMIT ' . $limit;

        $articles = array();
        $articles_result = db_query($articles_query)->fetchAllAssoc('nid');
        if (!empty($articles_result) && is_array($articles_result)) {
            $articles_ids = array_keys($articles_result);
            $articles = node_load_multiple($articles_ids);
        }

        cache_set($cid, $articles, $bin);

        return $articles;
    }
}

function headline_articles($limit = 10) {
    $cid = 'footmali_headline_articles_' . $limit;
    $bin = 'cache';

    if ($cached = cache_get($cid, $bin)) {
        $query_result = $cached->data;

        return $query_result;
    } else {
        $articles_query = 'SELECT DISTINCT n.nid, n.title ';
        $articles_query .= 'FROM node n left join field_data_field_featured f on n.nid = f.entity_id ';
        $articles_query .= 'WHERE n.status = 1 ';
        $articles_query .= "AND n.type = 'article' ";
        $articles_query .= 'AND f.field_featured_value IS NULL OR f.field_featured_value = 0 ';
        $articles_query .= 'ORDER BY n.created DESC ';
        $articles_query .= 'LIMIT ' . $limit;

        $articles = array();
        $articles_result = db_query($articles_query)->fetchAllAssoc('nid');
        if (!empty($articles_result) && is_array($articles_result)) {
            $articles_ids = array_keys($articles_result);
            $articles = node_load_multiple($articles_ids);
        }

        cache_set($cid, $articles, $bin, CACHE_TEMPORARY);

        return $articles;
    }
}

function featured_articles() {
    $articles_query = new EntityFieldQuery();
    $articles_query->entityCondition('entity_type', 'node')
        ->entityCondition('bundle', 'article')
        ->propertyCondition('status', NODE_PUBLISHED)
        ->fieldCondition('field_featured', 'value', '1', '=')
        ->range(0, 5)
        ->propertyOrderBy('created', 'DESC');

    $articles = array();

    $articles_result = $articles_query->execute();
    if (!empty($articles_result) && is_array($articles_result)) {
        $articles_ids = array_keys($articles_result['node']);
        $articles = node_load_multiple($articles_ids);
    }

    return $articles;
}

function get_article_author($node) {
    $author_data = user_load($node->uid);
    $author = $node->name;
    if (isset($author_data->field_first_name) && isset($author_data->field_last_name)) {
        $author = field_get_items('user', $author_data, 'field_first_name')[0]['value'].' ';
        $author .= field_get_items('user', $author_data, 'field_last_name')[0]['value'];
    }

    return $author;
}

/**
 * @param $style
 * @param $imageEntity
 *
 * @return string
 */
function output_image($style, $imageEntity) {
    $variable = array(
        'style_name' => $style,
        'path' => $imageEntity[LANGUAGE_NONE][0]['uri'],
        'width' => $imageEntity[LANGUAGE_NONE][0]['width'],
        'height' => $imageEntity[LANGUAGE_NONE][0]['height'],
    );

    return theme_image_style($variable);
}

function trim_paragraph($string, $your_desired_width){
    $string = strip_tags($string);
    $parts = preg_split('/([\s\n\r]+)/', $string, null, PREG_SPLIT_DELIM_CAPTURE);
    $parts_count = count($parts);

    $length = 0;
    $last_part = 0;
    for (; $last_part < $parts_count; ++$last_part) {
        $length += strlen($parts[$last_part]);
        if ($length > $your_desired_width) {
            break;
        }
    }

    return implode(array_slice($parts, 0, $last_part));
}
