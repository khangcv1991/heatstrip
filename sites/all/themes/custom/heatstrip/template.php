<?php

/**
 * @file
 * This file is empty by default because the base theme chain (Alpha & Omega) provides
 * all the basic functionality. However, in case you wish to customize the output that Drupal
 * generates through Alpha & Omega this file is a good place to do so.
 * 
 * Alpha comes with a neat solution for keeping this file as clean as possible while the code
 * for your subtheme grows. Please read the README.txt in the /preprocess and /process subfolders
 * for more information on this topic.
 */

//drupal_add_library('system', 'ui.tabs');

function heatstrip_preprocess_page(&$variables) {

	$arg0 = arg(0);
	if ($arg0 == 'faqs') {
		drupal_add_library('system', 'ui.tabs');
		drupal_add_js('jQuery(document).ready(function () { jQuery( ".tabs" ).tabs(); });', 'inline');
	}

}

function heatstrip_form_alter(&$form, &$form_state, $form_id) {
	if ($form_id == 'search_block_form') {
		$form['search_block_form']['#attributes'] = array('placeholder' => 'Search');
	}
}