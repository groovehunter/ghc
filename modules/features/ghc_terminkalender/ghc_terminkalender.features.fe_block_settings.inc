<?php
/**
 * @file
 * ghc_terminkalender.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ghc_terminkalender_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['flippy-flippy_pager-node_type-termin'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'flippy_pager-node_type-termin',
    'module' => 'flippy',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'fusion_core' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'fusion_core',
        'weight' => '0',
      ),
      'fusion_starter_lite' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'fusion_starter_lite',
        'weight' => '0',
      ),
      'garland' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'garland',
        'weight' => '0',
      ),
      'liquid_coolness' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'liquid_coolness',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
      'touchpro' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'touchpro',
        'weight' => '0',
      ),
      'touchpro_subtheme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'touchpro_subtheme',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['views--exp-clone_of_kalender-page'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => '-exp-clone_of_kalender-page',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
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
        'weight' => '-17',
      ),
      'fusion_starter_lite' => array(
        'region' => 'sidebar_first',
        'status' => '1',
        'theme' => 'fusion_starter_lite',
        'weight' => '-17',
      ),
      'garland' => array(
        'region' => 'sidebar_first',
        'status' => '1',
        'theme' => 'garland',
        'weight' => '-17',
      ),
      'liquid_coolness' => array(
        'region' => 'sidebar_first',
        'status' => '1',
        'theme' => 'liquid_coolness',
        'weight' => '-17',
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
        'weight' => '-17',
      ),
      'touchpro_subtheme' => array(
        'region' => 'sidebar_first',
        'status' => '1',
        'theme' => 'touchpro_subtheme',
        'weight' => '-17',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  return $export;
}
