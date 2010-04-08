<?php

/**
 * Helper to implementation of hook_node_info().
 */
function _presentations_feature_node_info() {
  $items = array(
    'meeting' => array(
      'name' => t('Group Meeting'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Meeting Name'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'presentation' => array(
      'name' => t('Presentation'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'topic_request' => array(
      'name' => t('Presentation Topic Request'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Topic'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
