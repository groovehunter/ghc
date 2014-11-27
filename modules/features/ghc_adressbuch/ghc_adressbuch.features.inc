<?php
/**
 * @file
 * ghc_adressbuch.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ghc_adressbuch_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ghc_adressbuch_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ghc_adressbuch_node_info() {
  $items = array(
    'kontakt' => array(
      'name' => t('Kontakt'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}