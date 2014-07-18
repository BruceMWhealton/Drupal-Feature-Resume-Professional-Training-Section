<?php
/**
 * @file
 * drupal_resume_professional_training_section.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drupal_resume_professional_training_section_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function drupal_resume_professional_training_section_node_info() {
  $items = array(
    'professional_training' => array(
      'name' => t('Professional Training'),
      'base' => 'node_content',
      'description' => t('Use this content type to describe any courses you have taken that would be considered "continuing education" or "professional training."  A separate area will exist for entering formal education, e.g. Colleges and Universities where you have received degrees.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
