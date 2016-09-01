<?php
/**
 * @file
 * footmali_core.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function footmali_core_taxonomy_default_vocabularies() {
  return array(
    'category' => array(
      'name' => 'Catégorie',
      'machine_name' => 'category',
      'description' => 'Catégories d\'articles',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'competition_groups' => array(
      'name' => 'Compétition Groupes',
      'machine_name' => 'competition_groups',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'competition_rounds' => array(
      'name' => 'Compétition Phase',
      'machine_name' => 'competition_rounds',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'competitions' => array(
      'name' => 'Compétitions',
      'machine_name' => 'competitions',
      'description' => 'Ls compétition national et international.',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'position' => array(
      'name' => 'Poste',
      'machine_name' => 'position',
      'description' => 'Poste des joueurs',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'tags' => array(
      'name' => 'Étiquettes',
      'machine_name' => 'tags',
      'description' => 'Utilisez les étiquettes pour regrouper les articles sur des sujets similaires dans des catégories.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
