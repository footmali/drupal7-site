<?php
/**
 * @file
 * footmali_core.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function footmali_core_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function footmali_core_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function footmali_core_image_default_styles() {
  $styles = array();

  // Exported image style: article_page.
  $styles['article_page'] = array(
    'label' => 'Article Page',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 812,
          'height' => 457,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: article_previous_next.
  $styles['article_previous_next'] = array(
    'label' => 'Article Previous Next',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 75,
          'height' => 75,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: article_teaser.
  $styles['article_teaser'] = array(
    'label' => 'Article Teaser',
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 175,
          'height' => 128,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: content_carrousel_large.
  $styles['content_carrousel_large'] = array(
    'label' => 'Content Carrousel Large',
    'effects' => array(
      10 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 770,
          'height' => 469,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: content_carrousel_thumb.
  $styles['content_carrousel_thumb'] = array(
    'label' => 'Content Carrousel Thumb',
    'effects' => array(
      11 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 175,
          'height' => 110,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: fixture_result_team_logo.
  $styles['fixture_result_team_logo'] = array(
    'label' => 'Fixture & Result Team Logo ',
    'effects' => array(
      8 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 83,
          'height' => 97,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: homepage_highlight_carousel.
  $styles['homepage_highlight_carousel'] = array(
    'label' => 'Homepage Highlight Carousel',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1170,
          'height' => 505,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: player.
  $styles['player'] = array(
    'label' => 'Player',
    'effects' => array(
      7 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 300,
          'height' => 350,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: squad_player.
  $styles['squad_player'] = array(
    'label' => 'Squad Player',
    'effects' => array(
      6 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 190,
          'height' => 146,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: team_logo.
  $styles['team_logo'] = array(
    'label' => 'Team Logo',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 50,
          'height' => 50,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: video_grid_thumbnail.
  $styles['video_grid_thumbnail'] = array(
    'label' => 'Video Grid Thumbnail',
    'effects' => array(
      9 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 247,
          'height' => 210,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function footmali_core_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Utilisez les <em>articles</em> pour des contenus possédant une temporalité tels que des actualités, des communiqués de presse ou des billets de blog.'),
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
    'fixture' => array(
      'name' => t('Rencontre'),
      'base' => 'node_content',
      'description' => t('Utilisez <i>Rencontre</i> pour créer les rencontre des match.'),
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
    'player' => array(
      'name' => t('Joueur'),
      'base' => 'node_content',
      'description' => t('Utilisez  <i>Joueur</i> pour créer des profils de joueur sportif'),
      'has_title' => '1',
      'title_label' => t('Nom'),
      'help' => '',
    ),
    'squad' => array(
      'name' => t('Effectif'),
      'base' => 'node_content',
      'description' => t('Utilisez <i>Effectif</i> pour créer des effectif d\'équipe par saison.'),
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
    'team' => array(
      'name' => t('Équipe'),
      'base' => 'node_content',
      'description' => t('Utilisez <i>Équipe</i> pour créer des profils des équipes nationales et des clubs'),
      'has_title' => '1',
      'title_label' => t('Nom'),
      'help' => '',
    ),
    'video' => array(
      'name' => t('Video'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
