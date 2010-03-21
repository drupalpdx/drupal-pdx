<?php
// $Id: 

/**
 * A handler to provide the vote up down widget field.
 *
 * @ingroup views_handler_field
 */
class views_handler_field_vote_up_down_widget extends views_handler_field {
  function query() {
    // do nothing -- to override the parent query.
  }

  function option_definition() {
    $options = parent::option_definition();
    return $options;
  }

  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);

    // Remove the checkbox
    unset($form['alter']['alter_text']);
    unset($form['alter']['text']['#dependency']);
    unset($form['alter']['text']['#process']);
  }

  function render($values) {
    $node->nid = $values->nid;
    $node->type = db_result(db_query("SELECT type FROM {node} WHERE nid = '%d'", $node->nid));
    return vote_up_down_widget_form($node);
  }
}
