<?php
/**
 * @file
 * ghc_rechte_allgemein.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function ghc_rechte_allgemein_user_default_roles() {
  $roles = array();

  // Exported role: externe-person.
  $roles['externe-person'] = array(
    'name' => 'externe-person',
    'weight' => '5',
  );

  // Exported role: hotelier.
  $roles['hotelier'] = array(
    'name' => 'hotelier',
    'weight' => '4',
  );

  // Exported role: superuser.
  $roles['superuser'] = array(
    'name' => 'superuser',
    'weight' => '2',
  );

  return $roles;
}
