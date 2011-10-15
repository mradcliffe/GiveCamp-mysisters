<?php

/**
 * Implements hook_skinr_group_PLUGIN_info().
 */
function my_sisters_place_skinr_group_msp_info() {
  $groups['msp_box'] = array(
    'title' => t('msp Layout & Positioning Settings'),
    'description' => t('Align an element to the grid.'),
    'weight' => -15,
  );  

  return $groups;
}

/**
 * Implements hook_skinr_skin_PLUGIN_info().
 */
function my_sisters_place_skinr_skin_msp_info() {

  $skins = array();
  
  $skins['msp_skins_general_styles'] = array(
    'title' => t('General Theming - Block Styles'),
    'type' => 'checkboxes',
    'description' => t('Theme specific reusable block styles'),
    'group' => 'box',
    'theme hooks' => array('block'),
    'default status' => '1',
    'options' => array(
      'msp-solid' => array(
        'title' => 'Solid Background with Inner Glow',
        'class' => array('msp-solid'),
      ),
			'msp-block-menu' => array(
				'title' => 'For use with menu blocks',
				'class' => array('msp-block-menu'),
			),
    ),
  );
	
	return $skins;
}