<?php

function footmali_minimal_css_alter(&$css)
{
    global $user;

    /* Remove some default Drupal css */
    if (!$user->uid){
        $exclude = array(
            'sites/all/modules/ctools/css/ctools.css' => false,
            'sites/all/modules/node_embed/plugins/node_embed/node_embed.css' => false,
            'modules/system/system.base.css' => false,
            'modules/system/system.messages.css' => false,
            'modules/system/system.theme.css' => false,
            'modules/system/system.menus.css' => false,
            'modules/aggregator/aggregator.css' => false,
            // 'modules/contextual/contextual.css' => false,
            'sites/all/modules/date/date_api/date.css' => false,
            'sites/all/modules/date/date_popup/themes/datepicker.1.7.css' => false,
            'modules/field/theme/field.css' => false,
            'sites/all/modules/logintoboggan/logintoboggan.css' => false,
            'modules/node/node.css' => false,
            'modules/search/search.css' => false,
            'modules/user/user.css' => false,
            'sites/all/modules/views/css/views.css' => false,
            'sites/all/modules/adminimal_admin_menu/adminimal_admin_menu.css' => false,
            'sites/all/modules/admin_menu/admin_menu.uid1.css' => false,
        );

        $css = array_diff_key($css, $exclude);
    }
}

function footmali_get_article_published_date($node)
{
    $published_on = 'Le '.date('d/m/Y', $node->created);
    $published_on .= $node->created != $node->changed ? ' | Mis à jour le '.date('d/m/Y', $node->changed) : '';

    return $published_on;
}

function footmali_get_article_author($node)
{
    $author_data = user_load($node->uid);
    $author = $node->name;
    if (isset($author_data->field_first_name) && isset($author_data->field_last_name)) {
        $author = field_get_items('user', $author_data, 'field_first_name')[0]['value'].' ';
        $author .= field_get_items('user', $author_data, 'field_last_name')[0]['value'];
    }

    return $author;
}

function footmali_node_share($nid, $title)
{
    global $language;
    $lang = $language->language === 'en' ? 'en-US' : $language->language;

    $url = url(drupal_get_path_alias('node/'.$nid), array('absolute' => true));
    $twitter_url = 'https://twitter.com/intent/tweet?';
    $twitter_url .= 'text='.urlencode($title);
    $twitter_url .= '&url='.urlencode($url . '?utm_source=twitter&utm_medium=Social');
    $twitter_url .= '&hashtags=footballMalien,footMali,maliFootball';
    $twitter_url .= '&via=FOOTMALICOM';
    $whatsapp_url = 'https://api.whatsapp.com/send?text='.urlencode($title .' '. $url.'&utm_source=whatsapp&utm_medium=Social'); # mobile & others

    return (object) array(
        'lang' => $lang,
        'url' => $url,
        'facebook_url' => $url,
        'twitter_url' => $twitter_url,
        'whatsapp_url' => $whatsapp_url
    );
}

function footmali_render_share_normal($nid, $title)
{
    $share = footmali_node_share($nid, $title);

    $output = '<div class="social-links">';
    $output .= '    <ul class="clearfix">';
    $output .= '        <li><a href="javascript:void" data-url="'.$share->url.'" class="fa fa-facebook facebook-share"></a></li>';
    $output .= '        <li><a href="'.$share->twitter_url.'" class="fa fa-twitter"></a></li>';
    $output .= '        <li class="visible-xs"><a href="'.$share->whatsapp_url.'" class="fa fa-whatsapp" data-action="share/whatsapp/share" target="_blank"></a></li>';
    $output .= '    </ul>';
    $output .= '</div>';

    return $output;
}

function footmali_render_share_small($nid, $title)
{
    $share = footmali_node_share($nid, $title);

    $output = '<div class="social-links small">';

    $output .= '<ul class="clearfix">';
    $output .= '<li class="text"><i class="fa fa-share-alt-square" aria-hidden="true"></i>partager</li>';
    $output .= '<li><a href="javascript:void" data-url="'.$share->url.'" class="fa fa-facebook facebook-share"></a></li>';
    $output .= '<li><a href="'.$share->twitter_url.'" class="fa fa-twitter"></a></li>';
    $output .= '<li class="visible-xs"><a href="'.$share->whatsapp_url.'" class="fa fa-whatsapp" data-action="share/whatsapp/share" target="_blank"></a></li>';
    $output .= '</ul>';
    $output .= '</div>';

    return $output;
}

function footmali_get_next_article($nid)
{
    $next_article_query = new EntityFieldQuery();
    $next_article_query->entityCondition('entity_type', 'node')
        ->entityCondition('bundle', 'article')
        ->propertyCondition('status', NODE_PUBLISHED, '=')
        ->propertyCondition('nid', $nid, '>')
        ->range(0, 1)
        ->propertyOrderBy('created', 'ASC');

    $next_article_result = $next_article_query->execute();
    $next_article_id = count($next_article_result) > 0 ? array_keys($next_article_result['node']) : false;

    return $next_article_id ? node_load(current($next_article_id)) : false;
}

function footmali_get_previous_article($nid)
{
    $prev_article_query = new EntityFieldQuery();
    $prev_article_query->entityCondition('entity_type', 'node')
        ->entityCondition('bundle', 'article')
        ->propertyCondition('status', NODE_PUBLISHED, '=')
        ->propertyCondition('nid', $nid, '<')
        ->range(0, 1)
        ->propertyOrderBy('created', 'DESC');

    $prev_article_result = $prev_article_query->execute();
    $prev_article_id = count($prev_article_result) ? array_keys($prev_article_result['node']) : false;

    return $prev_article_id ? node_load(current($prev_article_id)) : false;
}

function footmali_output_image($style, $imageEntity)
{
    $variable = array(
        'style_name' => $style,
        'path' => $imageEntity[LANGUAGE_NONE][0]['uri'],
        'width' => $imageEntity[LANGUAGE_NONE][0]['width'],
        'height' => $imageEntity[LANGUAGE_NONE][0]['height'],
    );

    return theme_image_style($variable);
}

function footmali_trim_paragraph($string, $your_desired_width)
{
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

    return trim(implode(array_slice($parts, 0, $last_part)));
}

function _d($var)
{
    echo "<pre>";
    var_dump($var);
    echo "</pre>";
}