<?php
/**
 * @file
 * ghc_allgemein.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function ghc_allgemein_filter_default_formats() {
  $formats = array();

  // Exported format: ghc.
  $formats['ghc'] = array(
    'format' => 'ghc',
    'name' => 'ghc',
    'cache' => '1',
    'status' => '1',
    'weight' => '0',
    'filters' => array(
      'filter_html' => array(
        'weight' => '-10',
        'status' => '1',
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <code>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_autop' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(
          'filter_url_length' => '72',
        ),
      ),
    ),
  );

  return $formats;
}
