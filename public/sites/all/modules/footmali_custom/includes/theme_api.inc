<?php


function theme_footmali_article_list_widget_wrapper($variables) {
    $title = $variables['title'];
    $title_type = $variables['title_type'];
    $list_type = $variables['list_type'];

    $wrapper = array();

    $prefix = '<div class="widget kopa-article-list-widget article-list-'. $list_type .'">';

    if(!is_null($title)):
        $prefix .= '<h3 class="widget-title style'. $title_type .'">';
            $prefix .= $title .'<span class="ttg"></span>';
        $prefix .= '</h3>';
    endif;
    $wrapper['prefix'] = $prefix;
    $wrapper['suffix'] = '</div>';

    return $wrapper;
}

function theme_footmali_node_list($variables) {
    $list_type = $variables['list_type'];
    $article_list = $variables['article_list'];
    $nodes = $variables['nodes'];
    $list_class = '';
    $wrapper = $variables['wrapper'];
    $wrapper_element = NULL;

    if(! is_null($wrapper)):
        $wrapper_element = theme($wrapper[0], $wrapper[1]);
    endif;


    $output = !is_null($wrapper_element) ? $wrapper_element['prefix'] : '';
    $output .= '<ul class="clearfix article-list">';
        if(count($nodes) > 0):
            $index = 1;
            foreach($nodes as $article):
                $args = array(
                    'node' => $article,
                    'list_type' => $list_type,
                    'article_list' => $article_list
                );

                if('order' == $list_type):
                    $args['index'] = $index;
                endif;

                $output .= theme('footmali_article_list_item', $args);

                if($index == 1):
                    #Between Headlines ad
                    $output .= '<li class="ads-wrapper">';
                        $output .= '<div class="ads">';
                            $output .= '<span class="heading">publicité</span>';
                            $output .= '<div id="headlines_1">';
                            // $output .=  '<ins class="adsbygoogle"';
                            //     $output .= 'style="display:block"';
                            //     $output .= 'data-ad-format="fluid"';
                            //     $output .= 'data-ad-layout-key="-66+bs+d-v+ke"';
                            //     $output .= 'data-ad-client="ca-pub-7538390076513661"';
                            //     $output .= 'data-ad-slot="1959205546"></ins>';
                            // $output .=  '<script>';
                            // $output .=  '(adsbygoogle = window.adsbygoogle || []).push({});';
                            // $output .=  '</script>';
                            $output .= '</div>';
                        $output .= '</div>';
                    $output .=  '</li>';
                endif;
                if($index == 5):
                    #Between Headlines ad
                    $output .= '<li class="ads-wrapper">';
                        $output .= '<div class="ads">';
                            $output .= '<span class="heading">publicité</span>';
                            $output .= '<div id="headlines_2">';
                            // $output .=  '<ins class="adsbygoogle"';
                            //     $output .= 'style="display:block"';
                            //     $output .= 'data-ad-format="fluid"';
                            //     $output .= 'data-ad-layout-key="-66+bs+d-v+ke"';
                            //     $output .= 'data-ad-client="ca-pub-7538390076513661"';
                            //     $output .= 'data-ad-slot="1959205546"></ins>';
                            // $output .=  '<script>';
                            // $output .=  '(adsbygoogle = window.adsbygoogle || []).push({});';
                            // $output .=  '</script>';
                            $output .= '</div>';
                        $output .= '</div>';
                    $output .=  '</li>';
                endif;
                if($index == 7):
                    #Between Headlines ad
                    $output .= '<li class="ads-wrapper">';
                        $output .= '<div class="ads">';
                            $output .= '<span class="heading">publicité</span>';
                            $output .= '<div id="headlines_3">';
                            // $output .=  '<ins class="adsbygoogle"';
                            //     $output .= 'style="display:block"';
                            //     $output .= 'data-ad-format="fluid"';
                            //     $output .= 'data-ad-layout-key="-66+bs+d-v+ke"';
                            //     $output .= 'data-ad-client="ca-pub-7538390076513661"';
                            //     $output .= 'data-ad-slot="1959205546"></ins>';
                            // $output .=  '<script>';
                            // $output .=  '(adsbygoogle = window.adsbygoogle || []).push({});';
                            // $output .=  '</script>';
                            $output .= '</div>';
                        $output .= '</div>';
                    $output .=  '</li>';
                endif;

                $index++;
            endforeach;
        endif;
    $output .= !is_null($wrapper_element) ? $wrapper_element['suffix'] : '</ul>';

    return $output;
}

function theme_footmali_article_list_item($variables) {
    $list_type = $variables['list_type'];
    $article_list = $variables['article_list'];
    $node = $variables['node'];

    $output = '';
        $output .= '<li>';
        if($article_list):
            $output .= '<article class="clearfix article">';
        endif;
                if('icon' == $list_type):
                    $output .= '<span class="kopa-list-icon"></span>';
                endif;

                $url = 'node/' . $node->nid;

                if('order' == $list_type && isset($variables['index'])):
                    $output .= '<i class="order-num">' . $variables['index'] . '</i>';
                endif;

                if('thumb-large' == $list_type):
                    $output .= '<div class="article-image">';
                        $img = output_image('large', $node->field_image);
                        $output .= l($img, $url, array('html' => TRUE));
                    $output .= '</div>';
                endif;
                if('thumb-small' == $list_type):
                    $output .= '<div class="article-image">';
                        $img = output_image('medium', $node->field_image);
                        $output .= l($img, $url, array('html' => TRUE));
                    $output .= '</div>';
                endif;

                if($article_list):
                    $output .= '<div class="article-body">';
                        $output .= '<div class="content-top">';
                            $output .= '<h4 class="entry-title">';
                endif;
                                $output .= l($node->title, $url);
                if($article_list):
                            $output .= '</h4>';
                        $output .= '</div>'; //content-top
                endif;

                $output .= '<div class="summary">';
                    $output .= trim(trim_paragraph($node->body[LANGUAGE_NONE][0]['value'],  120) . '...');
                $output .= '</div>';
            if($article_list):
                    $output .= '</div>'; //entry-content
                $output .= '</article>';
            endif;
        $output .= '</li>';

    return $output;

}

/**
* $variables: An associative array containing:
* format: (full, mini)
* standing data array
* title
* page URL
**/
function theme_footmali_standings_block($variables){

    $format = $variables['format'];
    $standings = $variables['standings'];
    $title = $variables['title'];
    $page_url = $variables['page_url'];
    $output = '';

    if(!empty($standings)){
        if('mini' == $format && $standings){
            $output  .= '<div class="widget-area-11">';
                $output .= '<div class="widget kopa-charts-widget">';
                    $output .= '<div class="widget-content">';
                    $output .= '<h3 class="widget-title style17">'. t($title) . '</h3>';
                    $output .= '<header>';
                        $output .= '<div class="t-col">' . t('Pos') . '</div>';
                        $output .= '<div class="t-col width1">' . t('Équipe') . '</div>';
                        $output .= '<div class="t-col">' . t('J.') . '</div>';
                        $output .= '<div class="t-col">' . t('Pts') . '</div>';
                    $output .= '</header>';

                    $index = 1;
                    $output .= '<ul class="clearfix">';
                    foreach($standings as $row):
                        $team = node_load($row->team);
                        $team_short_name = !empty($team->field_short_name) ? $team->field_short_name[LANGUAGE_NONE][0]['value'] : $team->title;

                        $output .= '<li>';
                            $output .= '<div class="t-col"><strong>' . $index . '</strong></div>';
                            $output .= '<div class="t-col width1">';
                                $output .= '<strong>' . strlen($team->title) < 18 ? $team->title : $team_short_name .'</strong>';
                            $output .= '</div>';
                            $output .= '<div class="t-col">' . $row->played . '</div>';
                            $output .= '<div class="t-col"><strong>' . $row->points . '</strong></div>';
                        $output .= '</li>';
                        $index++;
                    endforeach;
                    $output .= '</ul>';

                    if($page_url):
                        $output .= '<a class="kopa-view-all" href="' . $page_url . '">Voir tout<span class="fa fa-chevron-right"></span></a>';
                    endif;
                $output .= '</div>';
                $output .= '</div>';
            $output .= '</div>';
        }
        elseif('full' == $format && $standings){
            $output .= '<div class="widget kopa-team-widget kopa-charts-widget">';
                $output .= '<div class="widget-content">';
                    $output .= '<h3 class="widget-title style17">'. t($title) . '</h3>';
                    $output .= '<header>';
                        $output .= '<div class="t-col width3">' . t("Rang") . '</div>';
                        $output .= '<div class="t-col width2">' . t("Équipe") . '</div>';
                        $output .= '<div class="t-col width3">' . t("Pts") . '</div>';
                        $output .= '<div class="t-col width3 tbl-col">' . t("J.") . '</div>';
                        $output .= '<div class="t-col width3 tbl-col">' . t("G.") . '</div>';
                        $output .= '<div class="t-col width3 tbl-col">' . t("N.") . '</div>';
                        $output .= '<div class="t-col width3 tbl-col">' . t("P.") . '</div>';
                        $output .= '<div class="t-col width3 mb-col" style="text-transform: lowercase;">p.</div>';
                        $output .= '<div class="t-col width3 mb-col" style="text-transform: lowercase;">c.</div>';
                        $output .= '<div class="t-col width3 mb-col">+/-</div>';
                    $output .= '</header>';

                    $output .= '<ul class="clearfix">';
                        $index = 1;
                        foreach($standings as $row):
                            $team = node_load($row->team);
                            $team_short_name = !empty($team->field_short_name) ? $team->field_short_name[LANGUAGE_NONE][0]['value'] : $team->title;
                            $team_name = strlen($team->title) < 18 ? $team->title : $team_short_name;

                            $output .= '<li>';
                                $output .= '<div class="t-col width3"><strong>' . $index . '</strong></div>';
                                $output .= '<div class="t-col width2">';
                                    $output .= '<strong>' . $team_name . '</strong>';
                                $output .= '</div>';
                                $output .= '<div class="t-col width3"><strong>' . $row->points . '</strong></div>';
                                $output .= '<div class="t-col width3 tbl-col">' . $row->played . '</div>';
                                $output .= '<div class="t-col width3 tbl-col">' . $row->wins . '</div>';
                                $output .= '<div class="t-col width3 tbl-col">' . $row->draws . '</div>';
                                $output .= '<div class="t-col width3 tbl-col">' . $row->lost . '</div>';
                                $output .= '<div class="t-col width3 mb-col">' . $row->goalsfor . '</div>';
                                $output .= '<div class="t-col width3 mb-col">' . $row->goalsagainst . '</div>';
                                $output .= '<div class="t-col width3 mb-col">' . $row->goal_diff . '</div>';
                            $output .= '</li>';
                          $index++;
                        endforeach;
                    $output .= '</ul>';
                $output .= '</div>';
            $output .= '</div>';
        }
    }

    return $output;
}

function theme_footmali_article_block($variables){
    $title = $variables['title'];
    $list_type = $variables['list_type'];
    $nodes = $variables['nodes'];
    $output = '';

    $output .= '<div class="widget kopa-article-list-widget article-list-' . $list_type . '">';
        $output .= '<h3 class="widget-title style10">' . t($title) . '</h3>';
        $output .= '<div class="widget-content">';
            $output .= '<ul class="kopa-list clearfix">';
            foreach ($nodes as $node):
                $output .= theme('footmali_article_list_item', array(
                    'list_type' => 'thumb-small',
                    'node' => $node,
                    'article_list' => TRUE));
            endforeach;
            $output .= '</ul>';
        $output .= '</div>';
    $output .= '</div>';

    return $output;

}

/**
 * [theme_footmali_tab_widget description]
 * @param  array $variables array of variales('tabs array, tab_type number')
 * @return string $output   output HTML
 */
function theme_footmali_tab_widget($variables) {
    $tabs = $variables['tabs'];
    $tab_type = $variables['tab_type'];

    $output = '';

    $output .= '<div class="widget kopa-tab-' . $tab_type . '-widget">';
        $output .= '<div class="kopa-tab style7">';

            #tab headers
            $output .= '<ul class="nav nav-tabs">';
                $index = 1;
                foreach ($tabs as $title => $nodes):
                    $list_class = '';
                    if( 1 === $index):
                        $list_class .= ' active';
                    endif;
                    $output .= '<li class="' . $list_class . '">';
                        $options = array(
                            'attributes' => array(
                                'data-toggle' => 'tab',
                            ),
                            'fragment' => str_replace(' ', '_', strtolower($title)),
                            'external' => TRUE,
                        );
                        $output .= l(t($title), '', $options);
                    $output .= '</li>';

                    $index++;
                endforeach;
            $output .= '</ul>';

            #tab content panes
            $output .= '<div class="tab-content">';
            $index = 1;
                foreach ($tabs as $title => $content):
                    $active_class = '';
                    if( 1 === $index):
                        $active_class .= ' active';
                    endif;
                    $output .= '<div class="tab-pane '. $active_class .'" id="' . str_replace(' ', '_', strtolower($title)) . '">';
                        $output .= theme($content['theme'], $content);
                    $output .= '</div>';

                    $index++;
                endforeach;
            $output .= '</div>';
        $output .= '</div>';
    $output .= '</div>';

    return $output;
}

function theme_footmali_featured_2row($variables) {
    $nodes = $variables['nodes'];

    $output = '';
    $first_article = array_shift($nodes);
    $output .= '<div class="article-large">';
        $output .= '<ul class="clearfix article-list">';
            $output .= theme('footmali_article_list_item', array(
                'list_type' => 'thumb-large',
                'node' => $first_article,
                'article_list' => TRUE,
            ));

            $output .= '<li class="ads-wrapper">';
                $output .= '<div class="ads">';
                    $output .= '<span class="heading">publicité</span>';
                    $output .= '<div id="featured_article">';
                    // $output .=  '<ins class="adsbygoogle"';
                    //     $output .= 'style="display:block"';
                    //     $output .= 'data-ad-format="fluid"';
                    //     $output .= 'data-ad-layout-key="-66+bs+d-v+ke"';
                    //     $output .= 'data-ad-client="ca-pub-7538390076513661"';
                    //     $output .= 'data-ad-slot="1959205546"></ins>';
                    // $output .=  '<script>';
                    // $output .=  '(adsbygoogle = window.adsbygoogle || []).push({});';
                    // $output .=  '</script>';
                    $output .= '</div>';
                $output .= '</div>';
            $output .=  '</li>';
        $output .= '</ul>';
    $output .= '</div>';

    $output .= '<div class="article-small">';
        $output .= '<ul class="clearfix article-list">';
        $article_small_index = 0;

        foreach($nodes as $featured_article):
            $output .= theme('footmali_article_list_item', array(
                'list_type' => 'thumb-small',
                'node' => $featured_article,
                'article_list' => TRUE,
            ));

            if($article_small_index  == 1):
                $output .= '<li class="ads-wrapper">';
                    $output .= '<div class="ads">';
                        $output .= '<span class="heading">publicité</span>';
                        $output .= '<div id="in_between_features">';
                        // $output .=  '<ins class="adsbygoogle"';
                        //     $output .= 'style="display:block"';
                        //     $output .= 'data-ad-format="fluid"';
                        //     $output .= 'data-ad-layout-key="-66+bs+d-v+ke"';
                        //     $output .= 'data-ad-client="ca-pub-7538390076513661"';
                        //     $output .= 'data-ad-slot="1959205546"></ins>';
                        // $output .=  '<script>';
                        // $output .=  '(adsbygoogle = window.adsbygoogle || []).push({});';
                        // $output .=  '</script>';
                        $output .= '</div>';
                    $output .= '</div>';
                $output .=  '</li>';
            endif;
            $article_small_index++;
        endforeach;
        $output .= '</ul>';
    $output .= '</div>';

    return $output;
}
