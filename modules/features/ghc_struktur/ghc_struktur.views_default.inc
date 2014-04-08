<?php
/**
 * @file
 * ghc_struktur.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ghc_struktur_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'presseberichte';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Presseberichte';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Presseberichte';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_autor' => 'field_autor',
    'field_datum' => 'field_datum',
    'edit_node' => 'edit_node',
    'field_medien' => 'field_medien',
    'field_online' => 'field_online',
    'created' => 'created',
    'field_print' => 'field_print',
    'field_seite' => 'field_seite',
  );
  $handler->display->display_options['style_options']['default'] = 'field_datum';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_autor' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_datum' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_medien' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_online' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_print' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_seite' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Autor */
  $handler->display->display_options['fields']['field_autor']['id'] = 'field_autor';
  $handler->display->display_options['fields']['field_autor']['table'] = 'field_data_field_autor';
  $handler->display->display_options['fields']['field_autor']['field'] = 'field_autor';
  /* Field: Content: Publikation */
  $handler->display->display_options['fields']['field_publikation']['id'] = 'field_publikation';
  $handler->display->display_options['fields']['field_publikation']['table'] = 'field_data_field_publikation';
  $handler->display->display_options['fields']['field_publikation']['field'] = 'field_publikation';
  /* Field: Content: Datum */
  $handler->display->display_options['fields']['field_datum']['id'] = 'field_datum';
  $handler->display->display_options['fields']['field_datum']['table'] = 'field_data_field_datum';
  $handler->display->display_options['fields']['field_datum']['field'] = 'field_datum';
  /* Field: Content: Online */
  $handler->display->display_options['fields']['field_online']['id'] = 'field_online';
  $handler->display->display_options['fields']['field_online']['table'] = 'field_data_field_online';
  $handler->display->display_options['fields']['field_online']['field'] = 'field_online';
  /* Field: Content: Print */
  $handler->display->display_options['fields']['field_print']['id'] = 'field_print';
  $handler->display->display_options['fields']['field_print']['table'] = 'field_data_field_print';
  $handler->display->display_options['fields']['field_print']['field'] = 'field_print';
  /* Field: Content: Seite */
  $handler->display->display_options['fields']['field_seite']['id'] = 'field_seite';
  $handler->display->display_options['fields']['field_seite']['table'] = 'field_data_field_seite';
  $handler->display->display_options['fields']['field_seite']['field'] = 'field_seite';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd.M.Y';
  /* Field: Content: Medien */
  $handler->display->display_options['fields']['field_medien']['id'] = 'field_medien';
  $handler->display->display_options['fields']['field_medien']['table'] = 'field_data_field_medien';
  $handler->display->display_options['fields']['field_medien']['field'] = 'field_medien';
  $handler->display->display_options['fields']['field_medien']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_medien']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_medien']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_medien']['type'] = 'pdfpreview';
  $handler->display->display_options['fields']['field_medien']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
    'show_description' => 0,
    'tag' => 'span',
  );
  $handler->display->display_options['fields']['field_medien']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_medien']['separator'] = '';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'pressebericht' => 'pressebericht',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Notizen (field_notizen) */
  $handler->display->display_options['filters']['field_notizen_value']['id'] = 'field_notizen_value';
  $handler->display->display_options['filters']['field_notizen_value']['table'] = 'field_data_field_notizen';
  $handler->display->display_options['filters']['field_notizen_value']['field'] = 'field_notizen_value';
  $handler->display->display_options['filters']['field_notizen_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_notizen_value']['group'] = 1;
  $handler->display->display_options['filters']['field_notizen_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_notizen_value']['expose']['operator_id'] = 'field_notizen_value_op';
  $handler->display->display_options['filters']['field_notizen_value']['expose']['label'] = 'Notizen';
  $handler->display->display_options['filters']['field_notizen_value']['expose']['operator'] = 'field_notizen_value_op';
  $handler->display->display_options['filters']['field_notizen_value']['expose']['identifier'] = 'field_notizen_value';
  $handler->display->display_options['filters']['field_notizen_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Online (field_online) */
  $handler->display->display_options['filters']['field_online_value']['id'] = 'field_online_value';
  $handler->display->display_options['filters']['field_online_value']['table'] = 'field_data_field_online';
  $handler->display->display_options['filters']['field_online_value']['field'] = 'field_online_value';
  $handler->display->display_options['filters']['field_online_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_online_value']['group'] = 1;
  $handler->display->display_options['filters']['field_online_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_online_value']['expose']['operator_id'] = 'field_online_value_op';
  $handler->display->display_options['filters']['field_online_value']['expose']['label'] = 'Online';
  $handler->display->display_options['filters']['field_online_value']['expose']['operator'] = 'field_online_value_op';
  $handler->display->display_options['filters']['field_online_value']['expose']['identifier'] = 'field_online_value';
  $handler->display->display_options['filters']['field_online_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_online_value']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Print (field_print) */
  $handler->display->display_options['filters']['field_print_value']['id'] = 'field_print_value';
  $handler->display->display_options['filters']['field_print_value']['table'] = 'field_data_field_print';
  $handler->display->display_options['filters']['field_print_value']['field'] = 'field_print_value';
  $handler->display->display_options['filters']['field_print_value']['group'] = 1;
  $handler->display->display_options['filters']['field_print_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_print_value']['expose']['operator_id'] = 'field_print_value_op';
  $handler->display->display_options['filters']['field_print_value']['expose']['label'] = 'Print';
  $handler->display->display_options['filters']['field_print_value']['expose']['operator'] = 'field_print_value_op';
  $handler->display->display_options['filters']['field_print_value']['expose']['identifier'] = 'field_print_value';
  $handler->display->display_options['filters']['field_print_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Datum (field_datum) */
  $handler->display->display_options['filters']['field_datum_value']['id'] = 'field_datum_value';
  $handler->display->display_options['filters']['field_datum_value']['table'] = 'field_data_field_datum';
  $handler->display->display_options['filters']['field_datum_value']['field'] = 'field_datum_value';
  $handler->display->display_options['filters']['field_datum_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_datum_value']['expose']['operator_id'] = 'field_datum_value_op';
  $handler->display->display_options['filters']['field_datum_value']['expose']['label'] = 'Datum (field_datum)';
  $handler->display->display_options['filters']['field_datum_value']['expose']['operator'] = 'field_datum_value_op';
  $handler->display->display_options['filters']['field_datum_value']['expose']['identifier'] = 'field_datum_value';
  $handler->display->display_options['filters']['field_datum_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_datum_value']['granularity'] = 'month';
  $handler->display->display_options['filters']['field_datum_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_datum_value']['year_range'] = '-3:+0';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'presseberichte';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Presseberichte';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $translatables['presseberichte'] = array(
    t('Master'),
    t('Presseberichte'),
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
    t('Title'),
    t('Autor'),
    t('Publikation'),
    t('Datum'),
    t('Online'),
    t('Print'),
    t('Seite'),
    t('Edit link'),
    t('Post date'),
    t('Medien'),
    t('Notizen'),
    t('Datum (field_datum)'),
    t('Page'),
  );
  $export['presseberichte'] = $view;

  return $export;
}
