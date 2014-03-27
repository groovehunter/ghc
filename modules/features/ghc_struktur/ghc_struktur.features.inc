<?php
/**
 * @file
 * ghc_struktur.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ghc_struktur_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ghc_struktur_node_info() {
  $items = array(
    'pressebericht' => array(
      'name' => t('Pressebericht'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'wiki_seite' => array(
      'name' => t('Wiki-Seite'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}