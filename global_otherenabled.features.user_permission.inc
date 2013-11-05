<?php
/**
 * @file
 * global_otherenabled.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function global_otherenabled_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access site map'.
  $permissions['access site map'] = array(
    'name' => 'access site map',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'site_map',
  );

  // Exported permission: 'view delete button'.
  $permissions['view delete button'] = array(
    'name' => 'view delete button',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'jammer',
  );

  // Exported permission: 'view submit button'.
  $permissions['view submit button'] = array(
    'name' => 'view submit button',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'jammer',
  );

  return $permissions;
}
