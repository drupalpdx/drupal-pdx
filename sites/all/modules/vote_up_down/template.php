<?php
// $Id: template.php,v 1.7.2.1 2008/10/08 16:42:21 lut4rp Exp $

/**
 * @file
 * template.php for the vote_up_down.module
 */

function _phptemplate_variables($hook, $vars) {
  switch ($hook) {
    case 'node':
      $vars['storylink_url'] = check_url($vars['node']->vote_storylink_url);
      if (arg(1) != 'add' && arg(2) != 'edit') {
        $style = variable_get('vote_up_down_widget_style_node', 0) == 1 ? '_alt' : '';
        $vars['vote_up_down_widget'] = theme("vote_up_down_widget$style", $vars['node']->nid, 'node');
        $vars['vote_up_down_points'] = theme("vote_up_down_points$style", $vars['node']->nid, 'node');
      }
      $vars['vote_storylink_via'] = theme('vote_storylink_via', $vars['node']->vote_storylink_url);
      if (arg(1) == 'top') {
        static $count;
        $count = is_array($count) ? $count : array();
        $count[$hook] = is_int($count[$hook]) ? $count[$hook] : 1;
        $vars['seqid'] = $count[$hook]++;
      }
      break;
  }
  return $vars;
}