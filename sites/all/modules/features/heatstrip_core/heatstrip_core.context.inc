<?php
/**
 * @file
 * heatstrip_core.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function heatstrip_core_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'layout-2-col-sidebar';
  $context->description = '';
  $context->tag = 'heatstrip';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'page' => 'page',
        'product' => 'product',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        '~which-product-do-i-need' => '~which-product-do-i-need',
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
      ),
    ),
    'delta' => array(
      'delta_template' => 'delta_2_col_sidebar_left',
    ),
    'theme_html' => array(
      'class' => 'page-2-col-sidebar',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('heatstrip');
  $export['layout-2-col-sidebar'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'layout-contact-us';
  $context->description = '';
  $context->tag = 'heatstrip';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'contact-us' => 'contact-us',
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
        'block-14' => array(
          'module' => 'block',
          'delta' => '14',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'page-2-col-sidebar',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('heatstrip');
  $export['layout-contact-us'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'layout-faqs';
  $context->description = '';
  $context->tag = 'heatstrip';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'faqs' => 'faqs',
      ),
    ),
  );
  $context->reactions = array(
    'theme_html' => array(
      'class' => 'page-2-col-sidebar',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('heatstrip');
  $export['layout-faqs'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'layout-front';
  $context->description = '';
  $context->tag = 'heatstrip';
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
        'views-banners-block' => array(
          'module' => 'views',
          'delta' => 'banners-block',
          'region' => 'slider',
          'weight' => '-10',
        ),
        'block-1' => array(
          'module' => 'block',
          'delta' => '1',
          'region' => 'preface_first',
          'weight' => '-10',
        ),
        'block-2' => array(
          'module' => 'block',
          'delta' => '2',
          'region' => 'preface_second',
          'weight' => '-10',
        ),
        'block-3' => array(
          'module' => 'block',
          'delta' => '3',
          'region' => 'preface_third',
          'weight' => '-10',
        ),
        'block-4' => array(
          'module' => 'block',
          'delta' => '4',
          'region' => 'preface_fourth',
          'weight' => '-10',
        ),
        'block-21' => array(
          'module' => 'block',
          'delta' => '21',
          'region' => 'postscript_zero',
          'weight' => '-10',
        ),
        'block-5' => array(
          'module' => 'block',
          'delta' => '5',
          'region' => 'postscript_first',
          'weight' => '-10',
        ),
        'views-news-block' => array(
          'module' => 'views',
          'delta' => 'news-block',
          'region' => 'postscript_second',
          'weight' => '-10',
        ),
        'views-projects-block' => array(
          'module' => 'views',
          'delta' => 'projects-block',
          'region' => 'postscript_third',
          'weight' => '-10',
        ),
        'views-ticker-block' => array(
          'module' => 'views',
          'delta' => 'ticker-block',
          'region' => 'postscript_fourth',
          'weight' => '-10',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'delta_front',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('heatstrip');
  $export['layout-front'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'layout-global';
  $context->description = '';
  $context->tag = 'heatstrip';
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
        'block-15' => array(
          'module' => 'block',
          'delta' => '15',
          'region' => 'branding',
          'weight' => '-10',
        ),
        'nice_menus-1' => array(
          'module' => 'nice_menus',
          'delta' => '1',
          'region' => 'menu',
          'weight' => '-10',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'menu',
          'weight' => '-9',
        ),
        'block-6' => array(
          'module' => 'block',
          'delta' => '6',
          'region' => 'footer_first',
          'weight' => '-10',
        ),
        'menu-menu-footer-1st' => array(
          'module' => 'menu',
          'delta' => 'menu-footer-1st',
          'region' => 'footer_second',
          'weight' => '-10',
        ),
        'block-16' => array(
          'module' => 'block',
          'delta' => '16',
          'region' => 'footer_second',
          'weight' => '-9',
        ),
        'menu-menu-footer-2nd' => array(
          'module' => 'menu',
          'delta' => 'menu-footer-2nd',
          'region' => 'footer_third',
          'weight' => '-10',
        ),
        'menu-menu-footer-3rd' => array(
          'module' => 'menu',
          'delta' => 'menu-footer-3rd',
          'region' => 'footer_fourth',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('heatstrip');
  $export['layout-global'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'layout-media';
  $context->description = '';
  $context->tag = 'heatstrip';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'media' => 'media',
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
        'block-12' => array(
          'module' => 'block',
          'delta' => '12',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'page-2-col-sidebar',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('heatstrip');
  $export['layout-media'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'layout-online-warranty';
  $context->description = '';
  $context->tag = 'heatstrip';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'online-warranty' => 'online-warranty',
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
        'block-13' => array(
          'module' => 'block',
          'delta' => '13',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'page-2-col-sidebar',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('heatstrip');
  $export['layout-online-warranty'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'layout-page-about-heatstrip';
  $context->description = '';
  $context->tag = 'heatstrip';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'about-heatstrip' => 'about-heatstrip',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-7' => array(
          'module' => 'block',
          'delta' => '7',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('heatstrip');
  $export['layout-page-about-heatstrip'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'layout-product-classic';
  $context->description = '';
  $context->tag = 'heatstrip';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'product' => 'product',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        '~admin' => '~admin',
        '~admin/*' => '~admin/*',
        '~node/add' => '~node/add',
        '~node/edit' => '~node/edit',
        '~node/add/*' => '~node/add/*',
        '~node/*/edit' => '~node/*/edit',
        '~node/edit/*' => '~node/edit/*',
        '~node/*/webform' => '~node/*/webform',
        '~node/*/webform/*' => '~node/*/webform/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-products-block' => array(
          'module' => 'views',
          'delta' => 'products-block',
          'region' => 'content',
          'weight' => '-26',
        ),
        'delta_blocks-page-title' => array(
          'module' => 'delta_blocks',
          'delta' => 'page-title',
          'region' => 'content',
          'weight' => '-20',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '15',
        ),
        'views-sidebar_info-block' => array(
          'module' => 'views',
          'delta' => 'sidebar_info-block',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'views-products-block_1' => array(
          'module' => 'views',
          'delta' => 'products-block_1',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'block-9' => array(
          'module' => 'block',
          'delta' => '9',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'views-video-block' => array(
          'module' => 'views',
          'delta' => 'video-block',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('heatstrip');
  $export['layout-product-classic'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'layout-projects';
  $context->description = '';
  $context->tag = 'heatstrip';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'projects' => 'projects',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-17' => array(
          'module' => 'block',
          'delta' => '17',
          'region' => 'content',
          'weight' => '-10',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('heatstrip');
  $export['layout-projects'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'page-where-to-buy-australia';
  $context->description = '';
  $context->tag = 'heatstrip';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'where-to-buy-australia' => 'where-to-buy-australia',
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
        'block-11' => array(
          'module' => 'block',
          'delta' => '11',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('heatstrip');
  $export['page-where-to-buy-australia'] = $context;

  return $export;
}
