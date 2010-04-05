
<div class="presentation-sidebar">
  <?php if(!(empty($node->field_presentation_file[0]['view']))): ?>
  <div class="field field-type-filefield field-field-presentation-file">
    <div class="field-label">Files</div>
    <div class="field-items">
      <?php foreach ((array)$node->field_presentation_file as $item) { ?>
        <div class="field-item"><?php print $item['view'] ?></div>
      <?php } ?>
    </div>
  </div>
  <?php endif; ?>
  <?php if(!(empty($node->field_presentation_link[0]['view']))): ?>
  <div class="field field-type-link field-field-presentation-link">
    <div class="field-label">Related Links</div>
    <div class="field-items">
      <?php foreach ((array)$node->field_presentation_link as $item) { ?>
        <div class="field-item"><?php print $item['view'] ?></div>
      <?php } ?>
    </div>
  </div>
  <?php endif; ?>
  
  <div class="field field-type-nodereference field-field-meetingreference">
    <div class="field-label">Available For Meeting</div>
    <div class="field-items">
      <?php foreach ((array)$node->field_meetingreference as $item) { ?>
        <div class="field-item"><?php print $item['view'] ?></div>
      <?php } ?>
    </div>
  </div>
  
  <?php if(!(empty($node->field_meetingreference_actual[0]['view']))): ?>
  <div class="field field-type-nodereference field-field-meetingreference-actual">
    <div class="field-label">Presented At</div>
    <div class="field-item"><?php print $node->field_meetingreference_actual[0]['view'] ?></div>
  </div>
  <?php endif; ?>
</div>

<div class="presentation-main">
<?php print $node->content['body']['#value']; ?>

<?php if(!(empty($node->field_topic_request_ref[0]['view']))): ?>
<div class="field field-type-nodereference field-field-topic-request-ref">
  <div class="field-label-inline">In Response to Request:</div>
  <?php print $node->field_topic_request_ref[0]['view'] ?>
</div>
<?php endif; ?>

<div class="field field-type-number-integer field-field-presentation-duration">
  <div class="field-label-inline">Duration (minutes):</div>
  <?php print $node->field_presentation_duration[0]['view'] ?>
</div>


<div class="field field-type-filefield field-field-presentation-image">
  <div class="field-items">
    <?php foreach ((array)$node->field_presentation_image as $item) { ?>
      <div class="field-item"><?php print $item['view'] ?></div>
    <?php } ?>
    <div class="clear"></div>
  </div>
</div>

<div class="field field-type-emvideo field-field-presentation-embed">
  <div class="field-items">
    <?php foreach ((array)$node->field_presentation_embed as $item) { ?>
      <div class="field-item"><?php print $item['view'] ?></div>
    <?php } ?>
  </div>
</div>

<?php if(!(empty($node->field_presenter_name[0]['view'])) || !(empty($node->field_email[0]['view'])) || !(empty($node->field_phone[0]['view']))): ?>
<fieldset class="fieldgroup group-contact-info"><legend>Contact Information</legend>
  <div class="field field-type-text field-field-presenter-name">
    <div class="field-label-inline">Presenter Name:</div>
    <?php print $node->field_presenter_name[0]['view'] ?>
  </div>
  
  <div class="field field-type-email field-field-email">
    <div class="field-label-inline">E-mail Address:</div>
    <?php print $node->field_email[0]['view'] ?>
  </div>
  
  <?php if(!(empty($node->field_phone[0]['view']))): ?>
  <div class="field field-type-ca-phone field-field-phone">
    <div class="field-label-inline">Phone Number:</div>
    <?php print $node->field_phone[0]['view'] ?>
  </div>
  <?php endif; ?>
</fieldset>
<?php endif; ?>
</div>
<div class="clear"></div>
