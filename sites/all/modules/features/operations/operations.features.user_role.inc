<?php
/**
 * @file
 * operations.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function operations_user_default_roles() {
  $roles = array();

  // Exported role: Collaborator.
  $roles['Collaborator'] = array(
    'name' => 'Collaborator',
    'weight' => 2,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 3,
  );

  return $roles;
}
