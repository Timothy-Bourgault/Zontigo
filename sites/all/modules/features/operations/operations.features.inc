<?php
/**
 * @file
 * operations.features.inc
 */

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
