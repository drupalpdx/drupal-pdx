<?php
// $Id: vote_up_down_widget_alt.tpl.php,v 1.1.2.1 2009/03/25 20:55:38 lut4rp Exp $
/**
 * @file vote_up_down_widget_alt.tpl.php
 *
 * This template handles alternative voting widget output. Available variables:
 * - $points: voting points of a same style as widget;
 * - $class: "vote-up-act", "vote-up-inact";
 * - $title: Contains a voting URL, should not be removed;
 * - $link: Voting links for users with disabled JS;
 * - $cid: $node->nid or $comment->cid;
 */
?>
<div class="vote-up-down-widget-alt">
  <?php print $points; ?>
  <?php if ($class) : ?>
    <span id="vote_up_<?php print $cid; ?>" class="<?php print $class; ?>" title="<?php print $title; ?>"><?php print $link; ?></span>
  <?php endif; ?>
</div>
