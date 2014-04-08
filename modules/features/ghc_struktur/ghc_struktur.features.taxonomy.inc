<?php
/**
 * @file
 * ghc_struktur.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ghc_struktur_taxonomy_default_vocabularies() {
  return array(
    'ghc_container' => array(
      'name' => 'ghc_container',
      'machine_name' => 'ghc_container',
      'description' => 'Container, dh. Arbeitsbereiche ',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'ghc_tags' => array(
      'name' => 'ghc_tags',
      'machine_name' => 'ghc_tags',
      'description' => 'Freie Tags aller coleur!',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'media_folders' => array(
      'name' => 'Media Folders',
      'machine_name' => 'media_folders',
      'description' => 'Use media folders to organize your media',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'publikationsmedien' => array(
      'name' => 'Publikationsmedien',
      'machine_name' => 'publikationsmedien',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
