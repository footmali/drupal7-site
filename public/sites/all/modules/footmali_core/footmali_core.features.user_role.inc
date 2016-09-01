<?php
/**
 * @file
 * footmali_core.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function footmali_core_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  // Exported role: blogueur.
  $roles['blogueur'] = array(
    'name' => 'blogueur',
    'weight' => 5,
  );

  // Exported role: editeur.
  $roles['editeur'] = array(
    'name' => 'editeur',
    'weight' => 4,
  );

  // Exported role: journaliste.
  $roles['journaliste'] = array(
    'name' => 'journaliste',
    'weight' => 3,
  );

  return $roles;
}
