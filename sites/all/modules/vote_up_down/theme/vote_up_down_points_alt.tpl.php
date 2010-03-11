<?php
// $Id: vote_up_down_points_alt.tpl.php,v 1.1.2.1 2009/03/25 20:55:38 lut4rp Exp $
/**
 * @file vote_up_down_points_alt.tpl.php
 *
 * This template handles voting points output for alternative voting widget. Available variables:
 * - $points: points in +1 or -1 format;
 * - $label: translated points label without numbers ("point" or "points");
 * - $points_labelled: translated points label with numbers ("1 point" or "N points");
 * - $class: "positive", "negarive" or "neutral" regarding the points amout;
 * - $cid: $node->nid or $comment->cid;
 */
?>
<div id="vote_points_<?php print $cid; ?>" class="vote-points"><div class="<?php print $class; ?>"><?php print $points; ?><div class="vote-points-label"><?php print $label; ?></div></div></div>

