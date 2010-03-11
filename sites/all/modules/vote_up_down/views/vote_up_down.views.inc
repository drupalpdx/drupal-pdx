<?php
// $Id:

/**
 * @file
 * Provide views integration with vote_up_down.module.
 */

/**
 * Implementation of hook_views_data()
 */
function vote_up_down_views_data() {
  $data['vote_up_down']['table']['group'] = t('Vote up down');
  $data['vote_up_down']['table']['join'] = array(
    '#global' => array(),
  );

  $data['vote_up_down']['widget'] = array(
    'title' => t('Vote Up Down Widget'),
    'help' => t('Provide a widget for voting up/down.'),
    'field' => array(
      'handler' => 'views_handler_field_vote_up_down_widget',
    ),
  );

  return $data;
}

/**
 * Implementation of hook_views_handlers().
 */
function vote_up_down_views_handlers() {
  return array(
    'handlers' => array(
      'views_handler_field_vote_up_down_widget' => array(
        'parent' => 'views_handler_field',
        'path' => drupal_get_path('module', 'vote_up_down') . '/views',
      ),
    ),
  );
}
