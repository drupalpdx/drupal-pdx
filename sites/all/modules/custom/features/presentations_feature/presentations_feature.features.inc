<?php

/**
 * Implementation of hook_content_default_fields().
 */
function presentations_feature_content_default_fields() {
  module_load_include('inc', 'presentations_feature', 'presentations_feature.defaults');
  $args = func_get_args();
  return call_user_func_array('_presentations_feature_content_default_fields', $args);
}

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function presentations_feature_fieldgroup_default_groups() {
  module_load_include('inc', 'presentations_feature', 'presentations_feature.defaults');
  $args = func_get_args();
  return call_user_func_array('_presentations_feature_fieldgroup_default_groups', $args);
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function presentations_feature_imagecache_default_presets() {
  module_load_include('inc', 'presentations_feature', 'presentations_feature.defaults');
  $args = func_get_args();
  return call_user_func_array('_presentations_feature_imagecache_default_presets', $args);
}

/**
 * Implementation of hook_node_info().
 */
function presentations_feature_node_info() {
  module_load_include('inc', 'presentations_feature', 'presentations_feature.features.node');
  $args = func_get_args();
  return call_user_func_array('_presentations_feature_node_info', $args);
}

/**
 * Implementation of hook_user_default_permissions().
 */
function presentations_feature_user_default_permissions() {
  module_load_include('inc', 'presentations_feature', 'presentations_feature.defaults');
  $args = func_get_args();
  return call_user_func_array('_presentations_feature_user_default_permissions', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function presentations_feature_views_default_views() {
  module_load_include('inc', 'presentations_feature', 'presentations_feature.features.views');
  $args = func_get_args();
  return call_user_func_array('_presentations_feature_views_default_views', $args);
}
