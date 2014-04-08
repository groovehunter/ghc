<?php
$view = new view();
$view->name = 'medien_im_verzeichnis';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'file_managed';
$view->human_name = 'medien im verzeichnis';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'medien im verzeichnis';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '36';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['style_plugin'] = 'media_browser';
/* Relationship: File: Media Folder (field_folder) */
$handler->display->display_options['relationships']['field_folder_tid']['id'] = 'field_folder_tid';
$handler->display->display_options['relationships']['field_folder_tid']['table'] = 'field_data_field_folder';
$handler->display->display_options['relationships']['field_folder_tid']['field'] = 'field_folder_tid';
$handler->display->display_options['relationships']['field_folder_tid']['required'] = TRUE;
/* Field: File: Name */
$handler->display->display_options['fields']['filename']['id'] = 'filename';
$handler->display->display_options['fields']['filename']['table'] = 'file_managed';
$handler->display->display_options['fields']['filename']['field'] = 'filename';
$handler->display->display_options['fields']['filename']['label'] = '';
$handler->display->display_options['fields']['filename']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['filename']['alter']['ellipsis'] = FALSE;
/* Sort criterion: File: Media Folder (field_folder) */
$handler->display->display_options['sorts']['field_folder_tid']['id'] = 'field_folder_tid';
$handler->display->display_options['sorts']['field_folder_tid']['table'] = 'field_data_field_folder';
$handler->display->display_options['sorts']['field_folder_tid']['field'] = 'field_folder_tid';
/* Sort criterion: File: Name */
$handler->display->display_options['sorts']['filename']['id'] = 'filename';
$handler->display->display_options['sorts']['filename']['table'] = 'file_managed';
$handler->display->display_options['sorts']['filename']['field'] = 'filename';
/* Contextual filter: Taxonomy term: Term ID */
$handler->display->display_options['arguments']['tid']['id'] = 'tid';
$handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['arguments']['tid']['field'] = 'tid';
$handler->display->display_options['arguments']['tid']['relationship'] = 'field_folder_tid';
$handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
/* Filter criterion: File: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'file_managed';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['exposed'] = TRUE;
$handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
$handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
$handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
$handler->display->display_options['filters']['type']['expose']['remember'] = TRUE;
$handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  4 => 0,
  3 => 0,
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'taxonomy/term/%';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'Medien';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;
$translatables['medien_im_verzeichnis'] = array(
  t('Master'),
  t('medien im verzeichnis'),
  t('more'),
  t('Apply'),
  t('Reset'),
  t('Sort by'),
  t('Asc'),
  t('Desc'),
  t('Items per page'),
  t('- All -'),
  t('Offset'),
  t('« first'),
  t('‹ previous'),
  t('next ›'),
  t('last »'),
  t('term from field_folder'),
  t('All'),
  t('Type'),
  t('Page'),
);

