<?php
/**
 * @file
 * ghc_neuigkeiten.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ghc_neuigkeiten_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views--exp-neuigkeiten-page'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => '-exp-neuigkeiten-page',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'neuigkeiten*',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'fusion_core' => array(
        'region' => 'sidebar_first',
        'status' => '1',
        'theme' => 'fusion_core',
        'weight' => '-16',
      ),
      'fusion_starter_lite' => array(
        'region' => 'sidebar_first',
        'status' => '1',
        'theme' => 'fusion_starter_lite',
        'weight' => '-16',
      ),
      'garland' => array(
        'region' => 'sidebar_first',
        'status' => '1',
        'theme' => 'garland',
        'weight' => '-16',
      ),
      'liquid_coolness' => array(
        'region' => 'sidebar_first',
        'status' => '1',
        'theme' => 'liquid_coolness',
        'weight' => '-16',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
      'touchpro' => array(
        'region' => 'sidebar_first',
        'status' => '1',
        'theme' => 'touchpro',
        'weight' => '-16',
      ),
      'touchpro_subtheme' => array(
        'region' => 'sidebar_first',
        'status' => '1',
        'theme' => 'touchpro_subtheme',
        'weight' => '-16',
      ),
    ),
    'title' => '',
    'visibility' => '1',
  );

  return $export;
}
