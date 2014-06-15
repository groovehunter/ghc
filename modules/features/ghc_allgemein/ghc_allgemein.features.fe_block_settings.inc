<?php
/**
 * @file
 * ghc_allgemein.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ghc_allgemein_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['devel-switch_user'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'switch_user',
    'module' => 'devel',
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
        'region' => 'footer',
        'status' => '1',
        'theme' => 'fusion_core',
        'weight' => '0',
      ),
      'fusion_starter_lite' => array(
        'region' => 'footer',
        'status' => '1',
        'theme' => 'fusion_starter_lite',
        'weight' => '0',
      ),
      'garland' => array(
        'region' => 'footer',
        'status' => '1',
        'theme' => 'garland',
        'weight' => '0',
      ),
      'liquid_coolness' => array(
        'region' => 'footer',
        'status' => '1',
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
        'region' => 'footer',
        'status' => '1',
        'theme' => 'touchpro',
        'weight' => '0',
      ),
      'touchpro_subtheme' => array(
        'region' => 'footer',
        'status' => '1',
        'theme' => 'touchpro_subtheme',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['devel_node_access-dna_node'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'dna_node',
    'module' => 'devel_node_access',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'footer',
        'status' => '1',
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'fusion_core' => array(
        'region' => 'footer',
        'status' => '1',
        'theme' => 'fusion_core',
        'weight' => '0',
      ),
      'fusion_starter_lite' => array(
        'region' => 'footer',
        'status' => '1',
        'theme' => 'fusion_starter_lite',
        'weight' => '0',
      ),
      'garland' => array(
        'region' => 'footer',
        'status' => '1',
        'theme' => 'garland',
        'weight' => '0',
      ),
      'liquid_coolness' => array(
        'region' => 'footer',
        'status' => '1',
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
        'region' => 'footer',
        'status' => '1',
        'theme' => 'touchpro',
        'weight' => '0',
      ),
      'touchpro_subtheme' => array(
        'region' => 'footer',
        'status' => '1',
        'theme' => 'touchpro_subtheme',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['lang_dropdown-language'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'language',
    'module' => 'lang_dropdown',
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
        'weight' => '-15',
      ),
      'fusion_starter_lite' => array(
        'region' => 'sidebar_first',
        'status' => '1',
        'theme' => 'fusion_starter_lite',
        'weight' => '-15',
      ),
      'garland' => array(
        'region' => 'sidebar_first',
        'status' => '1',
        'theme' => 'garland',
        'weight' => '-15',
      ),
      'liquid_coolness' => array(
        'region' => 'sidebar_first',
        'status' => '1',
        'theme' => 'liquid_coolness',
        'weight' => '-15',
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
        'weight' => '-15',
      ),
      'touchpro_subtheme' => array(
        'region' => 'sidebar_first',
        'status' => '1',
        'theme' => 'touchpro_subtheme',
        'weight' => '-15',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['search-form'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'form',
    'module' => 'search',
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
        'weight' => '0',
      ),
      'fusion_starter_lite' => array(
        'region' => 'sidebar_first',
        'status' => '1',
        'theme' => 'fusion_starter_lite',
        'weight' => '0',
      ),
      'garland' => array(
        'region' => 'sidebar_first',
        'status' => '1',
        'theme' => 'garland',
        'weight' => '0',
      ),
      'liquid_coolness' => array(
        'region' => 'sidebar_first',
        'status' => '1',
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
        'region' => 'sidebar_first',
        'status' => '1',
        'theme' => 'touchpro',
        'weight' => '0',
      ),
      'touchpro_subtheme' => array(
        'region' => 'sidebar_first',
        'status' => '1',
        'theme' => 'touchpro_subtheme',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['system-main-menu'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'main-menu',
    'module' => 'system',
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

  $export['user-login'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'login',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'sidebar_first',
        'status' => '1',
        'theme' => 'bartik',
        'weight' => '0',
      ),
      'fusion_core' => array(
        'region' => 'sidebar_first',
        'status' => '1',
        'theme' => 'fusion_core',
        'weight' => '-19',
      ),
      'fusion_starter_lite' => array(
        'region' => 'sidebar_first',
        'status' => '1',
        'theme' => 'fusion_starter_lite',
        'weight' => '-19',
      ),
      'garland' => array(
        'region' => 'sidebar_first',
        'status' => '1',
        'theme' => 'garland',
        'weight' => '-19',
      ),
      'liquid_coolness' => array(
        'region' => 'sidebar_first',
        'status' => '1',
        'theme' => 'liquid_coolness',
        'weight' => '-19',
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
        'weight' => '-19',
      ),
      'touchpro_subtheme' => array(
        'region' => 'sidebar_first',
        'status' => '1',
        'theme' => 'touchpro_subtheme',
        'weight' => '-19',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  return $export;
}
