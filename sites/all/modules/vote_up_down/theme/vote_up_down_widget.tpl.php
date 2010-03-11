<?php
// $Id: vote_up_down_widget.tpl.php,v 1.1.2.1 2009/03/25 20:55:38 lut4rp Exp $
/**
 * @file vote_up_down_widget.tpl.php
 *
 * This template handles default voting widget output. Available variables:
 * - $points: voting points of a same style as widget;
 * - $class1: "vote-up-act", "vote-up-inact";
 * - $class2: "vote-down-act", "vote-down-inact";
 * - $title1, $title1: Contains a voting URL, should not be removed;
 * - $link1, $link2: Voting links for users with disabled JS;
 * - $cid: $node->nid or $comment->cid;
 */
?>
<div class="vote-up-down-widget">
  <?php if ($class1) : ?>
    <span id="vote_up_<?php print $cid; ?>" class="<?php print $class1; ?>" title="<?php print $title1; ?>"><?php print $link1; ?></span>
    <span id="vote_down_<?php print $cid; ?>" class="<?php print $class2; ?>" title="<?php print $title2; ?>"><?php print $link2; ?></span>
  <?php endif; ?>
</div>
