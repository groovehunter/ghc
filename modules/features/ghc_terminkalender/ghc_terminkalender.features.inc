<?php
/**
 * @file
 * ghc_terminkalender.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ghc_terminkalender_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ghc_terminkalender_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ghc_terminkalender_node_info() {
  $items = array(
    'termin' => array(
      'name' => t('Termin'),
      'base' => 'node_content',
      'description' => t('Ein Datums-Inhaltstyp der mit einer Kalender-Ansicht verknüpft ist.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
