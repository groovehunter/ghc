<?php
/**
 * @file
 * ghc_container.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ghc_container_taxonomy_default_vocabularies() {
  return array(
    'container' => array(
      'name' => 'Container',
      'machine_name' => 'container',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
