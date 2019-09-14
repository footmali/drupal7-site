<?php

/**
 * Preprocess all templates.
 */
function footmali_amp_preprocess(&$vars, $hook) {
  $vars['ampsubtheme_path_file'] = DRUPAL_ROOT . '/' . drupal_get_path('theme', 'footmali_amp');
}

/**
 * Implements hook_preprocess_HOOK() for HTML document templates.
 *
 * Example of a preprocess hook for a subtheme that could be used to change
 * variables in templates in order to support custom styling of AMP pages.
 */
function footmali_amp_preprocess_html(&$variables) {

}

function footmali_amp_node_share($nid, $title)
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
    $messenger_url = 'fb-messenger://share/?link='.urlencode($url . '?utm_source=twitter&utm_medium=Social');
    $messenger_url .= '&app_id=714044432027505';

    return (object) array(
        'lang' => $lang,
        'url' => $url,
        'facebook_url' => $url,
        'twitter_url' => $twitter_url,
        'whatsapp_url' => $whatsapp_url,
        'messenger_url' => $messenger_url
    );
}

function footmali_amp_render_share_small($nid, $title)
{
    $share = footmali_amp_node_share($nid, $title);

    $output = '<div class="social-links small">';

    $output .= '<ul class="clearfix">';
    $output .= '<li class="text"><i class="fa fa-share-alt-square" aria-hidden="true"></i>partager</li>';
    $output .= '<li><a href="javascript:void" data-url="'.$share->url.'" class="facebook-share"><i class="fab fa-facebook-f"></i></a></li>';
    $output .= '<li><a href="'.$share->twitter_url.'" class="twitter-share"><i class="fab fa-twitter"></i></a></li>';
    $output .= '<li class="visible-mobile"><a href="'.$share->whatsapp_url.'" class="whatsapp-share" data-action="share/whatsapp/share" target="_blank"><i class="fab fa-whatsapp"></i></a></li>';
    $output .= '<li class="visible-mobile"><a href="'.$share->messenger_url.'" class="messenger-share"><i class="fab fa-facebook-messenger" aria-hidden="true"></i></a></li>';
    $output .= '</ul>';
    $output .= '</div>';

    return $output;
}