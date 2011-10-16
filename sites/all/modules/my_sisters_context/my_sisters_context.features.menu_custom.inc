<?php
/**
 * @file
 * my_sisters_context.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function my_sisters_context_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-article-types
  $menus['menu-article-types'] = array(
    'menu_name' => 'menu-article-types',
    'title' => 'Article Types',
    'description' => 'mirrors the article taxnomy',
  );
  // Exported menu: menu-secondary-menu
  $menus['menu-secondary-menu'] = array(
    'menu_name' => 'menu-secondary-menu',
    'title' => 'Secondary Menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Article Types');
  t('Main menu');
  t('Secondary Menu');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');
  t('mirrors the article taxnomy');


  return $menus;
}
