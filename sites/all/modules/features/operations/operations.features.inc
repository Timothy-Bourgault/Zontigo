<?php
/**
 * @file
 * operations.features.inc
 */

/**
 * Implements hook_views_api().
 */
function operations_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function operations_node_info() {
  $items = array(
    'proposal' => array(
      'name' => t('Proposal'),
      'base' => 'node_content',
      'description' => t('Create a project proposal'),
      'has_title' => '1',
      'title_label' => t('Name of Project'),
      'help' => '',
    ),
    'skill' => array(
      'name' => t('Skill'),
      'base' => 'node_content',
      'description' => t('A special talent'),
      'has_title' => '1',
      'title_label' => t('Skill Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_default_profile2_type().
 */
function operations_default_profile2_type() {
  $items = array();
  $items['main'] = entity_import('profile2_type', '{
    "userCategory" : false,
    "userView" : false,
    "type" : "main",
    "label" : "Collaborator Profile",
    "weight" : "0",
    "data" : { "registration" : 1, "use_page" : 1 },
    "rdf_mapping" : []
  }');
  return $items;
}
