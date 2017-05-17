<?php
/**
 * @file
 * operations.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function operations_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: user-menu_:profile-main.
  $menu_links['user-menu_:profile-main'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'profile-main',
    'router_path' => 'profile-main',
    'link_title' => '',
    'options' => array(
      'identifier' => 'user-menu_:profile-main',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );


  return $menu_links;
}
