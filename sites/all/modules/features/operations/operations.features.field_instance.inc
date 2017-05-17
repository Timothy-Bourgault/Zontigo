<?php
/**
 * @file
 * operations.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function operations_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'profile2-main-field_location'.
  $field_instances['profile2-main-field_location'] = array(
    'bundle' => 'main',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Where do you hail from?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_location',
    'label' => 'Location',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'profile2-main-field_profile_image'.
  $field_instances['profile2-main-field_profile_image'] = array(
    'bundle' => 'main',
    'deleted' => 0,
    'description' => 'Upload a profile image
',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_profile_image',
    'label' => 'Profile Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 3,
      'file_directory' => 'sites/all/images/avatar.jpg',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '150x150',
      'min_resolution' => '50x50',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'profile2-main-field_short_bio'.
  $field_instances['profile2-main-field_short_bio'] = array(
    'bundle' => 'main',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Tell a little about yourself',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_short_bio',
    'label' => 'Short Bio',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'profile2-main-field_skills'.
  $field_instances['profile2-main-field_skills'] = array(
    'bundle' => 'main',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select the skills you would like to contribute.  If you have skills that are not listed here, then please add them to our skills archive in the navigation menu!',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_skills',
    'label' => 'Skills',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'profile2-main-field_user_name'.
  $field_instances['profile2-main-field_user_name'] = array(
    'bundle' => 'main',
    'default_value' => array(
      0 => array(
        'value' => 'username',
      ),
    ),
    'deleted' => 0,
    'description' => 'Enter your name',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_user_name',
    'label' => 'User Name',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Enter your name');
  t('Location');
  t('Profile Image');
  t('Select the skills you would like to contribute.  If you have skills that are not listed here, then please add them to our skills archive in the navigation menu!');
  t('Short Bio');
  t('Skills');
  t('Tell a little about yourself');
  t('Upload a profile image
');
  t('User Name');
  t('Where do you hail from?');

  return $field_instances;
}
