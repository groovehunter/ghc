<?php
/**
 * @file
 * ghc_struktur.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function ghc_struktur_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'pressebericht_importer';
  $feeds_importer->config = array(
    'name' => 'pressebericht-importer',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'direct' => FALSE,
        'allowed_extensions' => 'txt csv tsv xml opml',
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          0 => 'public',
          1 => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'bundle' => 'pressebericht',
        'update_existing' => '2',
        'expire' => '-1',
        'mappings' => array(
          0 => array(
            'source' => 'Titel',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'Autor',
            'target' => 'field_autor',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Zeitschrift/Zeitung',
            'target' => 'field_publikation',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Erscheinungsdatum',
            'target' => 'field_datum:start',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Seite',
            'target' => 'field_seite',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Ausgabe',
            'target' => 'field_ausgabe',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Print',
            'target' => 'field_print',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Kategorie',
            'target' => 'field_tags',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Online',
            'target' => 'field_online',
            'unique' => FALSE,
          ),
        ),
        'input_format' => 'plain_text',
        'author' => '106',
        'authorize' => 1,
        'skip_hash_check' => 0,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => FALSE,
  );
  $export['pressebericht_importer'] = $feeds_importer;

  return $export;
}
