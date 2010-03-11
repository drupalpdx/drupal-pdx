<?php
// $Id: vote_up_down_points.tpl.php,v 1.1.2.1 2009/03/25 20:55:38 lut4rp Exp $
/**
 * @file vote_up_down_points.tpl.php
 * This template can be overriden by vote_up_down_points_$style.tpl.php
 *
 * This template handles voting points output. Available variables:
 * - $points: points in +1 or -1 format;
 * - $label: translated points label without numbers ("point" or "points");
 * - $points_labelled: translated points label with numbers ("1 point" or "N points");
 * - $class: "positive", "negarive" or "neutral" regarding the points amout;
 * - $cid: $node->nid or $comment->cid;
 */
?>
<span id="vote_points_<?php print $cid; ?>" class="vote-points"><span class="<?php print $class; ?>"><?php print $points_labelled; ?></span></span>
