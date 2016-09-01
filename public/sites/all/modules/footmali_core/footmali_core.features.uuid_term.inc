<?php
/**
 * @file
 * footmali_core.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function footmali_core_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'League 1',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '096b5350-6532-4495-b89d-56a7dcc4b06f',
    'vocabulary_machine_name' => 'competitions',
    'field_country' => array(
      'und' => array(
        0 => array(
          'value' => 'Mali',
        ),
      ),
    ),
    'parent' => array(
      0 => '0c16063a-841a-44c9-984d-721d8579bee1',
      1 => '0c16063a-841a-44c9-984d-721d8579bee1',
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'compétitions/league-1',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Coupe de la Confédération',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '0b8c1a25-20fd-4694-8fbf-e3c60de75c5e',
    'vocabulary_machine_name' => 'competitions',
    'field_country' => array(
      'und' => array(
        0 => array(
          'value' => 'Afrique',
        ),
      ),
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'compétitions/coupe-de-la-confédération',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Championat du Mali',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '0c16063a-841a-44c9-984d-721d8579bee1',
    'vocabulary_machine_name' => 'competitions',
    'field_country' => array(
      'und' => array(
        0 => array(
          'value' => 'Mali',
        ),
      ),
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'compétitions/championat-du-mali',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Championnat D\'Afrique U-17',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '16a72489-ddb1-4d37-a16d-ca562529c800',
    'vocabulary_machine_name' => 'competitions',
    'field_country' => array(
      'und' => array(
        0 => array(
          'value' => 'Mali',
        ),
      ),
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'compétitions/championnat-dafrique-u-17',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Huitièmes De Finale',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => '184b3c0e-1901-4b70-8eb1-b037941fefc7',
    'vocabulary_machine_name' => 'competition_rounds',
    'field_competition' => array(),
    'url_alias' => array(
      0 => array(
        'alias' => 'compétition-tour/huitièmes-de-finale',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Les Aiglons U17',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => '3b4a3021-8889-41c4-94d8-214ee45a544e',
    'vocabulary_machine_name' => 'category',
    'parent' => array(
      0 => '8e57f774-51ed-4cca-a657-fcf53219981a',
      1 => '8e57f774-51ed-4cca-a657-fcf53219981a',
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'catégorie/les-aiglons-u17',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Les Aiglons U23',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '450432e7-007b-4033-9cce-c1ee46c1099a',
    'vocabulary_machine_name' => 'category',
    'parent' => array(
      0 => '8e57f774-51ed-4cca-a657-fcf53219981a',
      1 => '8e57f774-51ed-4cca-a657-fcf53219981a',
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'catégorie/les-aiglons-u23',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Ligue des Champions',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '469389f4-8712-4679-88b9-517f62e23ec8',
    'vocabulary_machine_name' => 'competitions',
    'field_country' => array(
      'und' => array(
        0 => array(
          'value' => 'Afrique',
        ),
      ),
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'compétitions/ligue-des-champions',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Attaquant',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '4a790de6-1fcc-44e6-9bdd-69000e77b5be',
    'vocabulary_machine_name' => 'position',
    'url_alias' => array(
      0 => array(
        'alias' => 'poste/attaquant',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Les Aiglons U20',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => '53229803-045b-4d13-9ad9-bb4bae6dfaa2',
    'vocabulary_machine_name' => 'category',
    'parent' => array(
      0 => '8e57f774-51ed-4cca-a657-fcf53219981a',
      1 => '8e57f774-51ed-4cca-a657-fcf53219981a',
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'catégorie/les-aiglons-u20',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Les Aigles',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => '5648d55f-1221-4ada-9815-bcbc82179cb8',
    'vocabulary_machine_name' => 'tags',
    'url_alias' => array(
      0 => array(
        'alias' => 'étiquettes/les-aigles',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Journée 2',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 6,
    'uuid' => '69709e87-1708-4657-8698-d2a062c30261',
    'vocabulary_machine_name' => 'competition_rounds',
    'field_competition' => array(
      'und' => array(
        0 => array(
          'target_id' => '096b5350-6532-4495-b89d-56a7dcc4b06f',
        ),
        1 => array(
          'target_id' => 'd41653e4-7370-4c26-a295-848cd4532435',
        ),
      ),
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'compétition-tour/journée-2',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Finale',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 4,
    'uuid' => '6a73d577-f9d0-4bd3-a864-f0d7f409df04',
    'vocabulary_machine_name' => 'competition_rounds',
    'field_competition' => array(),
    'url_alias' => array(
      0 => array(
        'alias' => 'compétition-tour/finale',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Championnat d’Afrique U-20',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '6cb7e280-120e-4337-91d6-73dadd5907f9',
    'vocabulary_machine_name' => 'competitions',
    'field_country' => array(
      'und' => array(
        0 => array(
          'value' => 'Afrique',
        ),
      ),
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'compétitions/championnat-d’afrique-u-20',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Gardien',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '6d295066-e971-42d7-8581-66cf19bd604e',
    'vocabulary_machine_name' => 'position',
    'url_alias' => array(
      0 => array(
        'alias' => 'poste/gardien',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Journée 1',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 5,
    'uuid' => '7784c026-a32b-4e30-a199-59553900b609',
    'vocabulary_machine_name' => 'competition_rounds',
    'field_competition' => array(
      'und' => array(
        0 => array(
          'target_id' => '096b5350-6532-4495-b89d-56a7dcc4b06f',
        ),
        1 => array(
          'target_id' => 'd41653e4-7370-4c26-a295-848cd4532435',
        ),
      ),
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'compétition-tour/journée-1',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Supercoupe de la CAF',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '77ca26f7-d9ec-4cd6-9301-cf2eeebe727d',
    'vocabulary_machine_name' => 'competitions',
    'field_country' => array(
      'und' => array(
        0 => array(
          'value' => 'Mali',
        ),
      ),
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'compétitions/supercoupe-de-la-caf',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Les Aigles',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 6,
    'uuid' => '8e57f774-51ed-4cca-a657-fcf53219981a',
    'vocabulary_machine_name' => 'category',
    'url_alias' => array(
      0 => array(
        'alias' => 'catégorie/les-aigles',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Défenseur',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '95bc4908-3b29-47b0-a069-ebc44ddfb5da',
    'vocabulary_machine_name' => 'position',
    'url_alias' => array(
      0 => array(
        'alias' => 'poste/défenseur',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Quarts De Finale',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => 'a8343499-67c7-4a1e-9b3b-b8e9c2a8a4e5',
    'vocabulary_machine_name' => 'competition_rounds',
    'field_competition' => array(),
    'url_alias' => array(
      0 => array(
        'alias' => 'compétition-tour/quarts-de-finale',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Coupe Du Monde',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'ae2225fc-fac7-4466-ba0f-269e39848390',
    'vocabulary_machine_name' => 'competitions',
    'field_country' => array(
      'und' => array(
        0 => array(
          'value' => 'Europe',
        ),
      ),
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'compétitions/coupe-du-monde',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Matches De Groupes',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'b3c1458b-c1a5-4a0a-a7a1-61cbb9b3f99b',
    'vocabulary_machine_name' => 'competition_rounds',
    'field_competition' => array(),
    'url_alias' => array(
      0 => array(
        'alias' => 'compétition-tour/matches-de-groupes',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Tous',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'b8d0ca01-e7dc-4450-9528-e2a3e4300d33',
    'vocabulary_machine_name' => 'competition_groups',
    'url_alias' => array(
      0 => array(
        'alias' => 'compétition-groupes/tous',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'League 2',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => 'ba9b62d4-80a7-4a69-9f92-4930018427c8',
    'vocabulary_machine_name' => 'category',
    'parent' => array(
      0 => 'da1fa83b-1def-4e8c-b94f-3fcc4d4e6839',
      1 => 'da1fa83b-1def-4e8c-b94f-3fcc4d4e6839',
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'catégorie/league-2',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'League 1',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'c52b8a99-9ddd-413c-a11c-2551a185f0aa',
    'vocabulary_machine_name' => 'category',
    'parent' => array(
      0 => 'da1fa83b-1def-4e8c-b94f-3fcc4d4e6839',
      1 => 'da1fa83b-1def-4e8c-b94f-3fcc4d4e6839',
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'catégorie/league-1',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Les Aiglons',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'c9d646e3-fd51-4904-8a52-a14ab84d650f',
    'vocabulary_machine_name' => 'tags',
    'url_alias' => array(
      0 => array(
        'alias' => 'étiquettes/les-aiglons',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'League 2',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'd41653e4-7370-4c26-a295-848cd4532435',
    'vocabulary_machine_name' => 'competitions',
    'field_country' => array(
      'und' => array(
        0 => array(
          'value' => 'Mali',
        ),
      ),
    ),
    'parent' => array(
      0 => '0c16063a-841a-44c9-984d-721d8579bee1',
      1 => '0c16063a-841a-44c9-984d-721d8579bee1',
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'compétitions/league-2',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Championat du Mali',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => 'da1fa83b-1def-4e8c-b94f-3fcc4d4e6839',
    'vocabulary_machine_name' => 'category',
    'url_alias' => array(
      0 => array(
        'alias' => 'catégorie/championat-du-mali',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Demi Finales',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 3,
    'uuid' => 'e996638f-28da-4f60-951e-98708afd826e',
    'vocabulary_machine_name' => 'competition_rounds',
    'field_competition' => array(
      'und' => array(
        0 => array(
          'target_id' => 'ae2225fc-fac7-4466-ba0f-269e39848390',
        ),
      ),
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'compétition-tour/demi-finales',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Milieu',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'eae5d840-19a2-4985-a55c-ce3244d1ce14',
    'vocabulary_machine_name' => 'position',
    'url_alias' => array(
      0 => array(
        'alias' => 'poste/milieu',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Coupe D\'Afrique Des Nations',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'f9fcb1c0-f071-417c-9610-5708dbe709b2',
    'vocabulary_machine_name' => 'competitions',
    'field_country' => array(
      'und' => array(
        0 => array(
          'value' => 'Afrique',
        ),
      ),
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'compétitions/coupe-dafrique-des-nations',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Jeux Africains Hommes',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'fce508f7-9bad-4555-a22e-4b14d14cde85',
    'vocabulary_machine_name' => 'competitions',
    'field_country' => array(
      'und' => array(
        0 => array(
          'value' => 'Afrique',
        ),
      ),
    ),
    'url_alias' => array(
      0 => array(
        'alias' => 'compétitions/jeux-africains-hommes',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Coupe Du Monde U-20',
    'description' => NULL,
    'format' => NULL,
    'weight' => 0,
    'uuid' => 'fe8ecae6-cf53-44b7-8bc6-a5f998957cf4',
    'vocabulary_machine_name' => 'tags',
    'url_alias' => array(
      0 => array(
        'alias' => 'étiquettes/coupe-du-monde-u-20',
        'language' => 'und',
      ),
    ),
  );
  return $terms;
}
