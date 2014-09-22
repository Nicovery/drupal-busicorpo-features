<?php
/**
 * @file
 * busicorpo_complet.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function busicorpo_complet_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Contact',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'webform' => 'webform',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => array(
        'column_type' => 'col-sm',
        'column_size' => '6',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'right' => array(
        'column_type' => 'col-sm',
        'column_size' => '6',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'bottom' => array(
        'column_type' => 'col-sm',
        'column_size' => '12',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
    'bottom' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '5d879328-4803-4958-a459-3a4b63b8c975';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ffd33ea8-7233-45a0-998f-99665288566b';
    $pane->panel = 'bottom';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '6',
      'links' => 1,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'full',
      'link_node_title' => 0,
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ffd33ea8-7233-45a0-998f-99665288566b';
    $display->content['new-ffd33ea8-7233-45a0-998f-99665288566b'] = $pane;
    $display->panels['bottom'][0] = 'new-ffd33ea8-7233-45a0-998f-99665288566b';
    $pane = new stdClass();
    $pane->pid = 'new-11af497d-d556-4925-994d-dde31ccda1a1';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'block-4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '11af497d-d556-4925-994d-dde31ccda1a1';
    $display->content['new-11af497d-d556-4925-994d-dde31ccda1a1'] = $pane;
    $display->panels['left'][0] = 'new-11af497d-d556-4925-994d-dde31ccda1a1';
    $pane = new stdClass();
    $pane->pid = 'new-5b5fbe48-fdc2-4101-8da3-457e2dfe5bfa';
    $pane->panel = 'right';
    $pane->type = 'entity_field_extra';
    $pane->subtype = 'node:webform';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5b5fbe48-fdc2-4101-8da3-457e2dfe5bfa';
    $display->content['new-5b5fbe48-fdc2-4101-8da3-457e2dfe5bfa'] = $pane;
    $display->panels['right'][0] = 'new-5b5fbe48-fdc2-4101-8da3-457e2dfe5bfa';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-5b5fbe48-fdc2-4101-8da3-457e2dfe5bfa';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function busicorpo_complet_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'page_accueil';
  $page->task = 'page';
  $page->admin_title = 'Page accueil';
  $page->admin_description = '';
  $page->path = 'accueil';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_page_accueil_panel_context_2';
  $handler->task = 'page';
  $handler->subtask = 'page_accueil';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'container',
        'contains' => 'row',
        'children' => array(
          0 => 'main',
          1 => 2,
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'row',
        'children' => array(
          0 => 1,
          1 => 'main-column',
        ),
        'parent' => 'canvas',
      ),
      'main-column' => array(
        'type' => 'column',
        'contains' => 'region',
        'bootstrap_class' => array(
          'xs' => 'col-xs-4',
          'sm' => 'col-sm-4',
          'md' => 'col-md-4',
          'lg' => 'col-lg-4',
        ),
        'children' => array(
          0 => 'center',
          1 => 'contenu_bas',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Centre',
        'parent' => 'main-column',
      ),
      'contenu_bas' => array(
        'type' => 'region',
        'title' => 'Contenu bas',
        'parent' => 'main-column',
        'wrapper' => 'div',
        'element_id' => '',
        'class' => '',
        'container_class_add' => 1,
        'container_full_class_add' => 0,
      ),
      1 => array(
        'type' => 'column',
        'parent' => 'main',
        'children' => array(),
        'wrapper' => 'div',
        'element_id' => '',
        'class' => '',
        'contains' => 'row',
        'bootstrap_class' => array(
          'xs' => 'col-xs-12',
          'sm' => 'col-sm-12',
          'md' => 'col-md-12',
          'lg' => 'col-lg-12',
        ),
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(),
        'parent' => 'canvas',
        'wrapper' => 'div',
        'element_id' => '',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => array(
        'column_type' => 'col-sm',
        'column_size' => '4',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'middle' => array(
        'column_type' => 'col-sm',
        'column_size' => '4',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'right' => array(
        'column_type' => 'col-sm',
        'column_size' => '4',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'bottom' => NULL,
      'center' => NULL,
      'contenu_bas' => NULL,
      'region_1' => NULL,
      'region_2' => NULL,
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'middle' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '556d4863-0bf1-43c3-ae61-4c36f80e1a51';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-cebaded2-cd9e-4df9-a7a9-386e784ca317';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'block-1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Bloc de texte 1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cebaded2-cd9e-4df9-a7a9-386e784ca317';
    $display->content['new-cebaded2-cd9e-4df9-a7a9-386e784ca317'] = $pane;
    $display->panels['center'][0] = 'new-cebaded2-cd9e-4df9-a7a9-386e784ca317';
    $pane = new stdClass();
    $pane->pid = 'new-9e7308cc-0907-472c-bedf-0ea2dcf67139';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'block-2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Bloc de texte 2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '9e7308cc-0907-472c-bedf-0ea2dcf67139';
    $display->content['new-9e7308cc-0907-472c-bedf-0ea2dcf67139'] = $pane;
    $display->panels['center'][1] = 'new-9e7308cc-0907-472c-bedf-0ea2dcf67139';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['page_accueil'] = $page;

  return $pages;

}
