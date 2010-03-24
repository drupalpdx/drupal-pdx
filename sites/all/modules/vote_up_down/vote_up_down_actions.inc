<?php
// $Id: vote_up_down_actions.inc,v 1.6.2.1 2008/10/08 16:42:21 lut4rp Exp $

/**
 * @file
 * Contains Drupal actions and actions sets for use with vote_up_down.module and the Voting API..
 */

/**
 * Implementation of hook_votingapi_action_sets().
 */
/* function vote_up_down_votingapi_action_sets() { */
/*   $sets = array( */
/*     'vote_up_down_promotion' => array( */
/*       'description' => 'Promotes a node to the front page if enough users vote for it.', */
/*       'content_type' => 'node', */
/*       'condition_mask' => 'AND', */
/*       'enabled' => 1, */
/*       'source' => 'vote_up_down', */
/*  */
/*       'conditions' => array( */
/*         'is_promoted' => array( */
/*           'description' => 'Node is not promoted', */
/*           'handler' => 'votingapi_node_properties_handler', */
/*           'data' => array( */
/*             'property' => 'promote', */
/*             'comparison' => '!=', */
/*             'value' => 1, */
/*           ), */
/*         ), */
/*         'min_vote' => array( */
/*           'description' => 'Sum higher than 5', */
/*           'handler' => 'votingapi_vote_result_handler', */
/*           'data' => array( */
/*             'tag' => 'vote', */
/*             'function' => 'sum', */
/*             'comparison' => '>', */
/*             'value' => 5, */
/*           ), */
/*         ), */
/*       ), */
/*       'actions' => array( */
/*         'action_node_promote', */
/*         'action_vote_up_down_userpoints_add', */
/*       ), */
/*     ), */
/*  */
/*     'vote_up_down_demotion' => array( */
/*       'description' => 'Demote a node from the front page if enough users vote against it.', */
/*       'content_type' => 'node', */
/*       'condition_mask' => 'AND', */
/*       'enabled' => 1, */
/*       'source' => 'vote_up_down', */
/*  */
/*       'conditions' => array( */
/*         'is_promoted' => array( */
/*           'description' => 'Node is promoted', */
/*           'handler' => 'votingapi_node_properties_handler', */
/*           'data' => array( */
/*             'property' => 'promote', */
/*             'comparison' => '=', */
/*             'value' => 1, */
/*           ), */
/*         ), */
/*         'min_vote' => array( */
/*           'description' => 'Sum lower than 0', */
/*           'handler' => 'votingapi_vote_result_handler', */
/*           'data' => array( */
/*             'tag' => 'vote', */
/*             'function' => 'sum', */
/*             'comparison' => '<', */
/*             'value' => 0, */
/*           ), */
/*         ), */
/*       ), */
/*       'actions' => array( */
/*         'action_node_unpromote', */
/*         'action_vote_up_down_userpoints_remove', */
/*       ), */
/*     ), */
/*  */
/*   ); */
/*  */
/*  */
/*   return $sets; */
/* } */

/**
 * Implementation of a Drupal action.
 * Award userpoint to node author.
 */
function action_vote_up_down_userpoints_add($op, $edit = array(), &$node) {
  switch ($op) {
    case 'metadata':
      return array(
        'description' => t('Award userpoint to node author (Vote up/down)'),
        'type' => t('Node'),
        'batchable' => FALSE,
        'configurable' => FALSE,
      );

    case 'do':
      userpoints_userpointsapi('points', variable_get('userpoints_actions', 0), $node->uid);
      watchdog('action', 'Awarded userpoint to author of node id %id', array('%id' => intval($node->nid)));
      break;

    // return an HTML config form for the action
    case 'form':
      return '';

    // validate the HTML form
    case 'validate':
      return TRUE;

    // process the HTML form to store configuration
    case 'submit':
      return '';
  }
}

/**
 * Implementation of a Drupal action.
 * Deduct userpoint from node author.
 */
function action_vote_up_down_userpoints_remove($op, $edit = array(), &$node) {
  switch ($op) {
    case 'metadata':
      return array(
        'description' => t('Deduct userpoint from node author (Vote up/down)'),
        'type' => t('Node'),
        'batchable' => FALSE,
        'configurable' => FALSE,
      );

    case 'do':
      userpoints_userpointsapi('points', -variable_get('userpoints_actions', 0), $node->uid);
      watchdog('action', 'Deducted userpoint from author of node id %id', array('%id' => intval($node->nid)));
      break;

    // return an HTML config form for the action
    case 'form':
      return '';

    // validate the HTML form
    case 'validate':
      return TRUE;

    // process the HTML form to store configuration
    case 'submit':
      return '';
  }
}

/**
 * Touches the creation date of a node. Useful for moderated nodes that should appear
 * 'fresh' as soon as they're promoted.
 */
function action_vote_up_down_node_touch_created($op, $edit = array(), &$node) {
  switch ($op) {
    case 'metadata':
      return array(
        'description' => t('Touch node creation date (Vote up/down)'),
        'type' => t('Node'),
        'batchable' => TRUE,
        'configurable' => FALSE,
      );

    case 'do':
      $node->created = time();
      if (!$edit['defer']) {
        node_save($node);
      }
      watchdog('action', 'Touched creation date of node id %id', array('%id' => intval($node->nid)));
      break;

    // return an HTML config form for the action
    case 'form':
      return '';

    // validate the HTML form
    case 'validate':
      return TRUE;

    // process the HTML form to store configuration
    case 'submit':
      return '';
  }
}

/**
 * Touches the change date of a node. Useful for moderated nodes that should appear
 * 'fresh' as soon as they're promoted.
 */
function action_vote_up_down_node_touch_changed($op, $edit = array(), &$node) {
  switch ($op) {
    case 'metadata':
      return array(
        'description' => t('Touch node change date (Vote up/down)'),
        'type' => t('Node'),
        'batchable' => TRUE,
        'configurable' => FALSE,
      );

    case 'do':
      $node->changed = time();
      if (!$edit['defer']) {
        node_save($node);
      }
      watchdog('action', 'Touched change date of node id %id', array('%id' => intval($node->nid)));
      break;

    // return an HTML config form for the action
    case 'form':
      return '';

    // validate the HTML form
    case 'validate':
      return TRUE;

    // process the HTML form to store configuration
    case 'submit':
      return '';
  }
}
