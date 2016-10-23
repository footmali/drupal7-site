<?php
$matches = footmali_get_matches(null, 'Éliminatoire de la Coupe du Monde 2018', 'Mondial', 'all');
?>

<div class="widget kopa-team-widget kopa-charts-widget">
    <div class="widget-content">
        <h3 class="widget-title style17">Éliminatoire de la Coupe du Monde 2018: GROUP C</h3>
        <table class="footmali-chart clearfix">
            <?php foreach ($matches as $match): ?>
                <?php
                    $home_team = node_load($match->hometeam);
                    $away_team = node_load($match->awayteam);

                    $home_team_short_name = !empty($home_team->field_short_name) ? $home_team->field_short_name[LANGUAGE_NONE][0]['value'] : $home_team->title;
                    $away_team_short_name = !empty($away_team->field_short_name) ? $away_team->field_short_name[LANGUAGE_NONE][0]['value'] : $away_team->title;

                    $home_team_score = $match->goalsfor;
                    $away_team_score = $match->goalsagainst;

                    $match_date = $match->date;
                    $round = $match->round;

                ?>
                <?php if(strtolower($home_team->title) === 'mali' || strtolower($away_team->title) === 'mali'): ?>
                    <tr>
                        <td class="mb-col"><?php print $match_date; ?></td>
                        <td><strong><?php print $home_team->title; ?></strong></td>
                        <td class="center"><?php
                            print $match->matchstatus === '1' ? $home_team_score . '-' . $away_team_score : 'vs';
                        ?></div>
                        <td><strong><?php print $away_team->title; ?></strong></td>
                    </tr>
                <?php endif; ?>
            <?php endforeach; ?>
        </table>
    </div>
</div>
