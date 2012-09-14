<?php
/**
 * @file
 * site_startup.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function site_startup_user_default_roles() {
  $roles = array();

  // Exported role: webmaster.
  $roles['webmaster'] = array(
    'name' => 'webmaster',
    'weight' => '2',
  );

  return $roles;
}
