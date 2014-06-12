<?php
/**
 * @file
 * ghc_neuigkeiten.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ghc_neuigkeiten_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ghc_neuigkeiten_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ghc_neuigkeiten_node_info() {
  $items = array(
    'news_eintrag' => array(
      'name' => t('News-Eintrag'),
      'base' => 'node_content',
      'description' => t('Ein posting als "Neuigkeit", über das diskutiert werden kann.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}
