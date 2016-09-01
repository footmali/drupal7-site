<?php
/**
 * @file
 * footmali_core.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function footmali_core_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'body'
  $field_bases['body'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'node',
    ),
    'field_name' => 'body',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_with_summary',
  );

  // Exported field_base: 'field_away_team'
  $field_bases['field_away_team'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_away_team',
    'indexes' => array(
      'nid' => array(
        0 => 'nid',
      ),
    ),
    'locked' => 0,
    'module' => 'node_reference',
    'settings' => array(
      'referenceable_types' => array(
        'article' => 0,
        'competition' => 0,
        'fixture' => 0,
        'page' => 0,
        'player' => 0,
        'team' => 'team',
      ),
      'view' => array(
        'args' => array(),
        'display_name' => '',
        'view_name' => '',
      ),
    ),
    'translatable' => 0,
    'type' => 'node_reference',
  );

  // Exported field_base: 'field_away_team_score'
  $field_bases['field_away_team_score'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_away_team_score',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_category'
  $field_bases['field_category'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_category',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'category',
          'parent' => 0,
        ),
      ),
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_competition'
  $field_bases['field_competition'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_competition',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'competitions' => 'competitions',
        ),
      ),
      'target_type' => 'taxonomy_term',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_competition_round'
  $field_bases['field_competition_round'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_competition_round',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'competition_rounds' => 'competition_rounds',
        ),
      ),
      'target_type' => 'taxonomy_term',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_country'
  $field_bases['field_country'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_country',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Mondial' => 'Mondial',
        'Afrique' => 'Afrique',
        'Europe' => 'Europe',
        'Afghanistan' => 'Afghanistan',
        'Afrique du Sud' => 'Afrique du Sud',
        'Akrotiri' => 'Akrotiri',
        'Albanie' => 'Albanie',
        'Algérie' => 'Algérie',
        'Allemagne' => 'Allemagne',
        'Andorre' => 'Andorre',
        'Angola' => 'Angola',
        'Anguilla' => 'Anguilla',
        'Antarctique' => 'Antarctique',
        'Antigua-et-Barbuda' => 'Antigua-et-Barbuda',
        'Antilles néerlandaises' => 'Antilles néerlandaises',
        'Arabie saoudite' => 'Arabie saoudite',
        'Arctic Ocean' => 'Arctic Ocean',
        'Argentine' => 'Argentine',
        'Arménie' => 'Arménie',
        'Aruba' => 'Aruba',
        'Ashmore and Cartier Islands' => 'Ashmore and Cartier Islands',
        'Atlantic Ocean' => 'Atlantic Ocean',
        'Australie' => 'Australie',
        'Autriche' => 'Autriche',
        'Azerbaïdjan' => 'Azerbaïdjan',
        'Bahamas' => 'Bahamas',
        'Bahreïn' => 'Bahreïn',
        'Bangladesh' => 'Bangladesh',
        'Barbade' => 'Barbade',
        'Belau' => 'Belau',
        'Belgique' => 'Belgique',
        'Belize' => 'Belize',
        'Bénin' => 'Bénin',
        'Bermudes' => 'Bermudes',
        'Bhoutan' => 'Bhoutan',
        'Biélorussie' => 'Biélorussie',
        'Birmanie' => 'Birmanie',
        'Bolivie' => 'Bolivie',
        'Bosnie-Herzégovine' => 'Bosnie-Herzégovine',
        'Botswana' => 'Botswana',
        'Brésil' => 'Brésil',
        'Brunei' => 'Brunei',
        'Bulgarie' => 'Bulgarie',
        'Burkina Faso' => 'Burkina Faso',
        'Burundi' => 'Burundi',
        'Cambodge' => 'Cambodge',
        'Cameroun' => 'Cameroun',
        'Canada' => 'Canada',
        'Cap-Vert' => 'Cap-Vert',
        'Chili' => 'Chili',
        'Chine' => 'Chine',
        'Chypre' => 'Chypre',
        'Clipperton Island' => 'Clipperton Island',
        'Colombie' => 'Colombie',
        'Comores' => 'Comores',
        'Congo' => 'Congo',
        'Coral Sea Islands' => 'Coral Sea Islands',
        'Corée du Nord' => 'Corée du Nord',
        'Corée du Sud' => 'Corée du Sud',
        'Costa Rica' => 'Costa Rica',
        'Côte d\'Ivoire' => 'Côte d\'Ivoire',
        'Croatie' => 'Croatie',
        'Cuba' => 'Cuba',
        'Danemark' => 'Danemark',
        'Dhekelia' => 'Dhekelia',
        'Djibouti' => 'Djibouti',
        'Dominique' => 'Dominique',
        'Égypte' => 'Égypte',
        'Émirats arabes unis' => 'Émirats arabes unis',
        'Équateur' => 'Équateur',
        'Érythrée' => 'Érythrée',
        'Espagne' => 'Espagne',
        'Estonie' => 'Estonie',
        'États-Unis' => 'États-Unis',
        'Éthiopie' => 'Éthiopie',
        'Finlande' => 'Finlande',
        'France' => 'France',
        'Gabon' => 'Gabon',
        'Gambie' => 'Gambie',
        'Gaza Strip' => 'Gaza Strip',
        'Géorgie' => 'Géorgie',
        'Ghana' => 'Ghana',
        'Gibraltar' => 'Gibraltar',
        'Grèce' => 'Grèce',
        'Grenade' => 'Grenade',
        'Groenland' => 'Groenland',
        'Guam' => 'Guam',
        'Guatemala' => 'Guatemala',
        'Guernsey' => 'Guernsey',
        'Guinée' => 'Guinée',
        'Guinée équatoriale' => 'Guinée équatoriale',
        'Guinée-Bissao' => 'Guinée-Bissao',
        'Guyana' => 'Guyana',
        'Haïti' => 'Haïti',
        'Honduras' => 'Honduras',
        'Hong Kong' => 'Hong Kong',
        'Hongrie' => 'Hongrie',
        'Ile Bouvet' => 'Ile Bouvet',
        'Ile Christmas' => 'Ile Christmas',
        'Ile Norfolk' => 'Ile Norfolk',
        'Iles Cayman' => 'Iles Cayman',
        'Iles Cook' => 'Iles Cook',
        'Iles des Cocos (Keeling)' => 'Iles des Cocos (Keeling)',
        'Iles Falkland' => 'Iles Falkland',
        'Iles Féroé' => 'Iles Féroé',
        'Iles Fidji' => 'Iles Fidji',
        'Iles Géorgie du Sud et Sandwich du Sud' => 'Iles Géorgie du Sud et Sandwich du Sud',
        'Iles Heard et McDonald' => 'Iles Heard et McDonald',
        'Iles Marshall' => 'Iles Marshall',
        'Iles Pitcairn' => 'Iles Pitcairn',
        'Iles Salomon' => 'Iles Salomon',
        'Iles Svalbard et Jan Mayen' => 'Iles Svalbard et Jan Mayen',
        'Iles Turks-et-Caicos' => 'Iles Turks-et-Caicos',
        'Iles Vierges américaines' => 'Iles Vierges américaines',
        'Iles Vierges britanniques' => 'Iles Vierges britanniques',
        'Inde' => 'Inde',
        'Indian Ocean' => 'Indian Ocean',
        'Indonésie' => 'Indonésie',
        'Iran' => 'Iran',
        'Iraq' => 'Iraq',
        'Irlande' => 'Irlande',
        'Islande' => 'Islande',
        'Italie' => 'Italie',
        'Jamaïque' => 'Jamaïque',
        'Jan Mayen' => 'Jan Mayen',
        'Japon' => 'Japon',
        'Jersey' => 'Jersey',
        'Jordanie' => 'Jordanie',
        'Kazakhstan' => 'Kazakhstan',
        'Kenya' => 'Kenya',
        'Kirghizistan' => 'Kirghizistan',
        'Kiribati' => 'Kiribati',
        'Koweït' => 'Koweït',
        'Laos' => 'Laos',
        'Lesotho' => 'Lesotho',
        'Lettonie' => 'Lettonie',
        'Liban' => 'Liban',
        'Liberia' => 'Liberia',
        'Libye' => 'Libye',
        'Liechtenstein' => 'Liechtenstein',
        'Lituanie' => 'Lituanie',
        'Luxembourg' => 'Luxembourg',
        'Macao' => 'Macao',
        'Madagascar' => 'Madagascar',
        'Malaisie' => 'Malaisie',
        'Malawi' => 'Malawi',
        'Maldives' => 'Maldives',
        'Mali' => 'Mali',
        'Malte' => 'Malte',
        'Man, Isle of' => 'Man, Isle of',
        'Mariannes du Nord' => 'Mariannes du Nord',
        'Maroc' => 'Maroc',
        'Maurice' => 'Maurice',
        'Mauritanie' => 'Mauritanie',
        'Mayotte' => 'Mayotte',
        'Mexique' => 'Mexique',
        'Micronésie' => 'Micronésie',
        'Moldavie' => 'Moldavie',
        'Monaco' => 'Monaco',
        'Monde' => 'Monde',
        'Mongolie' => 'Mongolie',
        'Monténégro' => 'Monténégro',
        'Montserrat' => 'Montserrat',
        'Mozambique' => 'Mozambique',
        'Namibie' => 'Namibie',
        'Nauru' => 'Nauru',
        'Navassa Island' => 'Navassa Island',
        'Népal' => 'Népal',
        'Nicaragua' => 'Nicaragua',
        'Niger' => 'Niger',
        'Nigeria' => 'Nigeria',
        'Nioué' => 'Nioué',
        'Norvège' => 'Norvège',
        'Nouvelle-Calédonie' => 'Nouvelle-Calédonie',
        'Nouvelle-Zélande' => 'Nouvelle-Zélande',
        'Oman' => 'Oman',
        'Ouganda' => 'Ouganda',
        'Ouzbékistan' => 'Ouzbékistan',
        'Pacific Ocean' => 'Pacific Ocean',
        'Pakistan' => 'Pakistan',
        'Palestine' => 'Palestine',
        'Panama' => 'Panama',
        'Papouasie-Nouvelle-Guinée' => 'Papouasie-Nouvelle-Guinée',
        'Paracel Islands' => 'Paracel Islands',
        'Paraguay' => 'Paraguay',
        'Pays-Bas' => 'Pays-Bas',
        'Pérou' => 'Pérou',
        'Philippines' => 'Philippines',
        'Pologne' => 'Pologne',
        'Polynésie française' => 'Polynésie française',
        'Porto Rico' => 'Porto Rico',
        'Portugal' => 'Portugal',
        'Qatar' => 'Qatar',
        'République centrafricaine' => 'République centrafricaine',
        'République démocratique du Congo' => 'République démocratique du Congo',
        'République dominicaine' => 'République dominicaine',
        'République tchèque' => 'République tchèque',
        'Roumanie' => 'Roumanie',
        'Royaume-Uni' => 'Royaume-Uni',
        'Russie' => 'Russie',
        'Rwanda' => 'Rwanda',
        'Sahara occidental' => 'Sahara occidental',
        'Saint-Christophe-et-Niévès' => 'Saint-Christophe-et-Niévès',
        'Sainte-Hélène' => 'Sainte-Hélène',
        'Sainte-Lucie' => 'Sainte-Lucie',
        'Saint-Marin' => 'Saint-Marin',
        'Saint-Pierre-et-Miquelon' => 'Saint-Pierre-et-Miquelon',
        'Saint-Siège' => 'Saint-Siège',
        'Saint-Vincent-et-les-Grenadines' => 'Saint-Vincent-et-les-Grenadines',
        'Salvador' => 'Salvador',
        'Samoa' => 'Samoa',
        'Samoa américaines' => 'Samoa américaines',
        'Sao Tomé-et-Principe' => 'Sao Tomé-et-Principe',
        'Sénégal' => 'Sénégal',
        'Serbie' => 'Serbie',
        'Seychelles' => 'Seychelles',
        'Sierra Leone' => 'Sierra Leone',
        'Singapour' => 'Singapour',
        'Slovaquie' => 'Slovaquie',
        'Slovénie' => 'Slovénie',
        'Somalie' => 'Somalie',
        'Soudan' => 'Soudan',
        'Southern Ocean' => 'Southern Ocean',
        'Spratly Islands' => 'Spratly Islands',
        'Sri Lanka' => 'Sri Lanka',
        'Suède' => 'Suède',
        'Suisse' => 'Suisse',
        'Suriname' => 'Suriname',
        'Swaziland' => 'Swaziland',
        'Syrie' => 'Syrie',
        'Tadjikistan' => 'Tadjikistan',
        'Taïwan' => 'Taïwan',
        'Tanzanie' => 'Tanzanie',
        'Tchad' => 'Tchad',
        'Terres australes françaises' => 'Terres australes françaises',
        'Territoire britannique de l\'Océan Indien' => 'Territoire britannique de l\'Océan Indien',
        'Thaïlande' => 'Thaïlande',
        'Timor Oriental' => 'Timor Oriental',
        'Togo' => 'Togo',
        'Tokélaou' => 'Tokélaou',
        'Tonga' => 'Tonga',
        'Trinité-et-Tobago' => 'Trinité-et-Tobago',
        'Tunisie' => 'Tunisie',
        'Turkménistan' => 'Turkménistan',
        'Turquie' => 'Turquie',
        'Tuvalu' => 'Tuvalu',
        'Ukraine' => 'Ukraine',
        'Union européenne' => 'Union européenne',
        'Uruguay' => 'Uruguay',
        'Vanuatu' => 'Vanuatu',
        'Venezuela' => 'Venezuela',
        'Viêt Nam' => 'Viêt Nam',
        'Wake Island' => 'Wake Island',
        'Wallis-et-Futuna' => 'Wallis-et-Futuna',
        'West Bank' => 'West Bank',
        'Yémen' => 'Yémen',
        'Zambie' => 'Zambie',
        'Zimbabwe' => 'Zimbabwe',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_date_time'
  $field_bases['field_date_time'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_date_time',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'date',
    'settings' => array(
      'cache_count' => 4,
      'cache_enabled' => 0,
      'granularity' => array(
        'day' => 'day',
        'hour' => 'hour',
        'minute' => 'minute',
        'month' => 'month',
        'second' => 0,
        'year' => 'year',
      ),
      'timezone_db' => 'UTC',
      'todate' => '',
      'tz_handling' => 'user',
    ),
    'translatable' => 0,
    'type' => 'datetime',
  );

  // Exported field_base: 'field_dob'
  $field_bases['field_dob'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_dob',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'date',
    'settings' => array(
      'cache_count' => 4,
      'cache_enabled' => 0,
      'granularity' => array(
        'day' => 'day',
        'hour' => 0,
        'minute' => 0,
        'month' => 'month',
        'second' => 0,
        'year' => 'year',
      ),
      'timezone_db' => '',
      'todate' => '',
      'tz_handling' => 'none',
    ),
    'translatable' => 0,
    'type' => 'datetime',
  );

  // Exported field_base: 'field_favorite_competitons'
  $field_bases['field_favorite_competitons'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_favorite_competitons',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'competitions',
          'parent' => 0,
        ),
      ),
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_favorite_players'
  $field_bases['field_favorite_players'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_favorite_players',
    'indexes' => array(
      'nid' => array(
        0 => 'nid',
      ),
    ),
    'locked' => 0,
    'module' => 'node_reference',
    'settings' => array(
      'referenceable_types' => array(
        'article' => 0,
        'blog' => 0,
        'fixture' => 0,
        'page' => 0,
        'player' => 'player',
        'poll' => 0,
        'squad' => 0,
        'team' => 0,
      ),
      'view' => array(
        'args' => array(),
        'display_name' => '',
        'view_name' => '',
      ),
    ),
    'translatable' => 0,
    'type' => 'node_reference',
  );

  // Exported field_base: 'field_favorite_teams'
  $field_bases['field_favorite_teams'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_favorite_teams',
    'indexes' => array(
      'nid' => array(
        0 => 'nid',
      ),
    ),
    'locked' => 0,
    'module' => 'node_reference',
    'settings' => array(
      'referenceable_types' => array(
        'article' => 0,
        'blog' => 0,
        'fixture' => 0,
        'page' => 0,
        'player' => 0,
        'poll' => 0,
        'squad' => 0,
        'team' => 'team',
      ),
      'view' => array(
        'args' => array(),
        'display_name' => '',
        'view_name' => '',
      ),
    ),
    'translatable' => 0,
    'type' => 'node_reference',
  );

  // Exported field_base: 'field_file_image_alt_text'
  $field_bases['field_file_image_alt_text'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_file_image_alt_text',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_file_image_title_text'
  $field_bases['field_file_image_title_text'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_file_image_title_text',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_first_name'
  $field_bases['field_first_name'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_first_name',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_height'
  $field_bases['field_height'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_height',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'decimal_separator' => '.',
    ),
    'translatable' => 0,
    'type' => 'number_float',
  );

  // Exported field_base: 'field_home_team'
  $field_bases['field_home_team'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_home_team',
    'indexes' => array(
      'nid' => array(
        0 => 'nid',
      ),
    ),
    'locked' => 0,
    'module' => 'node_reference',
    'settings' => array(
      'referenceable_types' => array(
        'article' => 0,
        'competition' => 0,
        'fixture' => 0,
        'page' => 0,
        'player' => 0,
        'team' => 'team',
      ),
      'view' => array(
        'args' => array(),
        'display_name' => '',
        'view_name' => '',
      ),
    ),
    'translatable' => 0,
    'type' => 'node_reference',
  );

  // Exported field_base: 'field_home_team_score'
  $field_bases['field_home_team_score'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_home_team_score',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_image'
  $field_bases['field_image'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_image',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_last_name'
  $field_bases['field_last_name'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_last_name',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_main_competition'
  $field_bases['field_main_competition'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_main_competition',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'competitions',
          'parent' => 0,
        ),
      ),
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_match_played'
  $field_bases['field_match_played'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_match_played',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'not played',
        1 => 'played',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_more_tags'
  $field_bases['field_more_tags'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_more_tags',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'player' => 'player',
          'team' => 'team',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_other_club'
  $field_bases['field_other_club'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_other_club',
    'indexes' => array(
      'nid' => array(
        0 => 'nid',
      ),
    ),
    'locked' => 0,
    'module' => 'node_reference',
    'settings' => array(
      'referenceable_types' => array(
        'article' => 0,
        'blog' => 0,
        'fixture' => 0,
        'page' => 0,
        'player' => 0,
        'poll' => 0,
        'squad' => 0,
        'team' => 'team',
      ),
      'view' => array(
        'args' => array(),
        'display_name' => '',
        'view_name' => '',
      ),
    ),
    'translatable' => 0,
    'type' => 'node_reference',
  );

  // Exported field_base: 'field_position'
  $field_bases['field_position'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_position',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'position',
          'parent' => 0,
        ),
      ),
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_season'
  $field_bases['field_season'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_season',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'date',
    'settings' => array(
      'cache_count' => 4,
      'cache_enabled' => 0,
      'granularity' => array(
        'day' => 0,
        'hour' => 0,
        'minute' => 0,
        'month' => 0,
        'second' => 0,
        'year' => 'year',
      ),
      'timezone_db' => '',
      'todate' => '',
      'tz_handling' => 'none',
    ),
    'translatable' => 0,
    'type' => 'datetime',
  );

  // Exported field_base: 'field_squad_player'
  $field_bases['field_squad_player'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_squad_player',
    'indexes' => array(
      'nid' => array(
        0 => 'nid',
      ),
    ),
    'locked' => 0,
    'module' => 'node_reference',
    'settings' => array(
      'referenceable_types' => array(
        'article' => 0,
        'fixture' => 0,
        'page' => 0,
        'player' => 'player',
        'squad' => 0,
        'team' => 0,
      ),
      'view' => array(
        'args' => array(),
        'display_name' => '',
        'view_name' => '',
      ),
    ),
    'translatable' => 0,
    'type' => 'node_reference',
  );

  // Exported field_base: 'field_squad_player_number'
  $field_bases['field_squad_player_number'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_squad_player_number',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_squad_players'
  $field_bases['field_squad_players'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_squad_players',
    'indexes' => array(
      'revision_id' => array(
        0 => 'revision_id',
      ),
    ),
    'locked' => 0,
    'module' => 'field_collection',
    'settings' => array(
      'hide_blank_items' => 1,
      'path' => '',
    ),
    'translatable' => 0,
    'type' => 'field_collection',
  );

  // Exported field_base: 'field_squad_team'
  $field_bases['field_squad_team'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_squad_team',
    'indexes' => array(
      'nid' => array(
        0 => 'nid',
      ),
    ),
    'locked' => 0,
    'module' => 'node_reference',
    'settings' => array(
      'referenceable_types' => array(
        'article' => 0,
        'competition' => 0,
        'fixture' => 0,
        'page' => 0,
        'player' => 0,
        'squad' => 0,
        'team' => 'team',
      ),
      'view' => array(
        'args' => array(),
        'display_name' => '',
        'view_name' => '',
      ),
    ),
    'translatable' => 0,
    'type' => 'node_reference',
  );

  // Exported field_base: 'field_tags'
  $field_bases['field_tags'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_tags',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'tags',
          'parent' => 0,
        ),
      ),
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_team_type'
  $field_bases['field_team_type'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_team_type',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'club' => 'Club',
        'national' => 'National',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_video'
  $field_bases['field_video'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_video',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'video_embed_field',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'video_embed_field',
  );

  // Exported field_base: 'field_weight'
  $field_bases['field_weight'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_weight',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  return $field_bases;
}
