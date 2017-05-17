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

  // Exported menu link: navigation_skills-archive:skill_list.
  $menu_links['navigation_skills-archive:skill_list'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'skill_list',
    'router_path' => 'skill_list',
    'link_title' => 'Skills Archive',
    'options' => array(
      'identifier' => 'navigation_skills-archive:skill_list',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
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
  // Exported menu link: user-menu_user-account:user.
  $menu_links['user-menu_user-account:user'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'User account',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'user-menu_user-account:user',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Skills Archive');
  t('User account');

  return $menu_links;
}
