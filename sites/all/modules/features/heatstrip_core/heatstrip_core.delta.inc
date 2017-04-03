<?php
/**
 * @file
 * heatstrip_core.delta.inc
 */

/**
 * Implements hook_delta_default_templates().
 */
function heatstrip_core_delta_default_templates() {
  $export = array();

  $delta = new stdClass();
  $delta->disabled = FALSE; /* Edit this to true to make a default delta disabled initially */
  $delta->api_version = 3;
  $delta->machine_name = 'delta_2_col_sidebar_left';
  $delta->name = 'Delta 2 Col Sidebar Left';
  $delta->description = '';
  $delta->theme = 'heatstrip';
  $delta->mode = 'preserve';
  $delta->parent = '';
  $delta->settings = array(
    'theme_heatstrip_settings' => array(
      'alpha_region_sidebar_second_zone' => NULL,
      'alpha_region_sidebar_second_equal_height_element' => FALSE,
      'alpha_region_content_columns' => '9',
    ),
  );
  $export['delta_2_col_sidebar_left'] = $delta;

  $delta = new stdClass();
  $delta->disabled = FALSE; /* Edit this to true to make a default delta disabled initially */
  $delta->api_version = 3;
  $delta->machine_name = 'delta_front';
  $delta->name = 'Delta Front';
  $delta->description = '';
  $delta->theme = 'heatstrip';
  $delta->mode = 'preserve';
  $delta->parent = '';
  $delta->settings = array(
    'theme_heatstrip_settings' => array(
      'alpha_zone_slider_wrapper' => 1,
      'alpha_zone_slider_force' => 0,
      'alpha_zone_slider_order' => 0,
      'alpha_zone_slider_section' => 'header',
      'alpha_zone_slider_weight' => '8',
      'alpha_zone_slider_columns' => '12',
      'alpha_zone_slider_css' => '',
      'alpha_zone_slider_wrapper_css' => '',
      'alpha_zone_slider_equal_height_container' => 0,
      'alpha_region_slider_force' => 0,
      'alpha_region_slider_zone' => 'slider',
      'alpha_region_slider_prefix' => '0',
      'alpha_region_slider_columns' => '12',
      'alpha_region_slider_suffix' => '0',
      'alpha_region_slider_weight' => '0',
      'alpha_region_slider_position' => '0',
      'alpha_region_slider_css' => '',
      'alpha_region_slider_equal_height_element' => 0,
      'alpha_region_slider_equal_height_container' => 0,
      'alpha_zone_menu_weight' => '9',
      'alpha_zone_header_weight' => '10',
      'alpha_zone_preface_columns' => '12',
      'alpha_region_preface_first_columns' => '3',
      'alpha_region_preface_second_columns' => '3',
      'alpha_region_preface_third_columns' => '3',
      'alpha_region_preface_fourth_zone' => 'preface',
      'alpha_region_preface_fourth_columns' => '3',
      'alpha_region_preface_fourth_weight' => '11',
      'alpha_region_preface_fourth_equal_height_element' => 0,
      'alpha_zone_content_columns' => '12',
      'alpha_region_postscript_first_columns' => '6',
      'alpha_region_postscript_fourth_columns' => '12',
    ),
  );
  $export['delta_front'] = $delta;

  return $export;
}
