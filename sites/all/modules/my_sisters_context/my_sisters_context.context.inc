<?php
/**
 * @file
 * my_sisters_context.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function my_sisters_context_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'articles_page';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'menu' => array(
      'values' => array(
        'taxonomy/term/12' => 'taxonomy/term/12',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-testimonials-block' => array(
          'module' => 'views',
          'delta' => 'testimonials-block',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'views-calendar-block_2' => array(
          'module' => 'views',
          'delta' => 'calendar-block_2',
          'region' => 'postscript_first',
          'weight' => '-10',
        ),
        'views-fp_news-block_1' => array(
          'module' => 'views',
          'delta' => 'fp_news-block_1',
          'region' => 'postscript_second',
          'weight' => '-10',
        ),
        'views-fp_news-block_3' => array(
          'module' => 'views',
          'delta' => 'fp_news-block_3',
          'region' => 'postscript_third',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['articles_page'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'blog_page';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'menu' => array(
      'values' => array(
        'taxonomy/term/4' => 'taxonomy/term/4',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-testimonials-block' => array(
          'module' => 'views',
          'delta' => 'testimonials-block',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'views-calendar-block_2' => array(
          'module' => 'views',
          'delta' => 'calendar-block_2',
          'region' => 'postscript_first',
          'weight' => '-10',
        ),
        'views-fp_news-block_2' => array(
          'module' => 'views',
          'delta' => 'fp_news-block_2',
          'region' => 'postscript_second',
          'weight' => '-10',
        ),
        'views-fp_news-block_3' => array(
          'module' => 'views',
          'delta' => 'fp_news-block_3',
          'region' => 'postscript_third',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['blog_page'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'frontpage';
  $context->description = 'Front page';
  $context->tag = 'mysisters';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-testimonials-block' => array(
          'module' => 'views',
          'delta' => 'testimonials-block',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'views-calendar-block_2' => array(
          'module' => 'views',
          'delta' => 'calendar-block_2',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'views-slideshow-block' => array(
          'module' => 'views',
          'delta' => 'slideshow-block',
          'region' => 'header_third',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Front page');
  t('mysisters');
  $export['frontpage'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'news_pages';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'menu' => array(
      'values' => array(
        'taxonomy/term/5' => 'taxonomy/term/5',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-testimonials-block' => array(
          'module' => 'views',
          'delta' => 'testimonials-block',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'views-calendar-block_2' => array(
          'module' => 'views',
          'delta' => 'calendar-block_2',
          'region' => 'postscript_first',
          'weight' => '-10',
        ),
        'views-fp_news-block_2' => array(
          'module' => 'views',
          'delta' => 'fp_news-block_2',
          'region' => 'postscript_second',
          'weight' => '-10',
        ),
        'views-fp_news-block_3' => array(
          'module' => 'views',
          'delta' => 'fp_news-block_3',
          'region' => 'postscript_third',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['news_pages'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide';
  $context->description = 'block layout for common regions: header, footer, etc';
  $context->tag = 'layout';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-10',
        ),
        'menu_block-3' => array(
          'module' => 'menu_block',
          'delta' => 3,
          'region' => 'user_second',
          'weight' => '-10',
        ),
        'menu_block-1' => array(
          'module' => 'menu_block',
          'delta' => 1,
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'menu_block-2' => array(
          'module' => 'menu_block',
          'delta' => 2,
          'region' => 'footer_first',
          'weight' => '-10',
        ),
        'menu-menu-article-types' => array(
          'module' => 'menu',
          'delta' => 'menu-article-types',
          'region' => 'footer_second',
          'weight' => '-10',
        ),
        'block-2' => array(
          'module' => 'block',
          'delta' => 2,
          'region' => 'footer_third',
          'weight' => '-10',
        ),
        'block-3' => array(
          'module' => 'block',
          'delta' => 3,
          'region' => 'footer_fourth',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('block layout for common regions: header, footer, etc');
  t('layout');
  $export['sitewide'] = $context;

  return $export;
}
