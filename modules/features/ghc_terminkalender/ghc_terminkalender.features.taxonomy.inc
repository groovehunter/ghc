<?php
/**
 * @file
 * ghc_terminkalender.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ghc_terminkalender_taxonomy_default_vocabularies() {
  return array(
    'locations' => array(
      'name' => 'Locations',
      'machine_name' => 'locations',
      'description' => ' ',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
