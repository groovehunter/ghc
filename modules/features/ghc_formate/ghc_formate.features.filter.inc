<?php
/**
 * @file
 * ghc_formate.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function ghc_formate_filter_default_formats() {
  $formats = array();

  // Exported format: Wiki-Formattierung.
  $formats['wiki_formattierung'] = array(
    'format' => 'wiki_formattierung',
    'name' => 'Wiki-Formattierung',
    'cache' => '1',
    'status' => '1',
    'weight' => '0',
    'filters' => array(
      'filter_html' => array(
        'weight' => '-10',
        'status' => '1',
        'settings' => array(
          'allowed_html' => ' <cite> <blockquote> <code>',
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
      'filter_simplewiki' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(
          'autotoc' => 1,
        ),
      ),
    ),
  );

  return $formats;
}
