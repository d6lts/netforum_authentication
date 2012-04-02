<?php

/**
 * Implementation of hook_views_data().
 */
function netforum_authentication_views_data() {
  $data = array();

  // All the same type of field.
  $data['users']['cst_type'] =
  $data['users']['cst_key'] =
  $data['users']['cst_web_password'] = array(
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  $data['users']['cst_key']['title'] = ('netFORUM key');
  $data['users']['cst_key']['help'] = ("The user's netFORUM key.");
  $data['users']['cst_type']['title'] = ('netFORUM type');
  $data['users']['cst_type']['help'] = ("The user's netFORUM type.");
  $data['users']['cst_web_password']['title'] = ('netFORUM password.');
  $data['users']['cst_web_password']['help'] = ("The user's netFORUM password.");

  $data['users']['cst_id'] = array(
    'title' => t('netFORUM customer ID'),
    'help' => t('Numeric customer ID from netFORUM.'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort_numeric',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
    ),
  );

  return $data;
}
