<?php
/**
 * @file
 * site_startup.features.inc
 */

/**
 * Implements hook_node_info().
 */
function site_startup_node_info() {
  $items = array(
    'shared_fields' => array(
      'name' => t('_Shared Fields'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
