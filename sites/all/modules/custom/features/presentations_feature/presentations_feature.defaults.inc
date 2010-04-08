<?php

/**
 * Helper to implementation of hook_content_default_fields().
 */
function _presentations_feature_content_default_fields() {
  $fields = array();

  // Exported field: field_eventdate
  $fields[] = array(
    'field_name' => 'field_eventdate',
    'type_name' => 'meeting',
    'display_settings' => array(
      'weight' => '-4',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'datetime',
    'required' => '1',
    'multiple' => '0',
    'module' => 'date',
    'active' => '1',
    'granularity' => array(
      'year' => 'year',
      'month' => 'month',
      'day' => 'day',
      'hour' => 'hour',
      'minute' => 'minute',
    ),
    'timezone_db' => 'UTC',
    'tz_handling' => 'site',
    'todate' => 'optional',
    'repeat' => 0,
    'repeat_collapsed' => '',
    'default_format' => 'medium',
    'widget' => array(
      'default_value' => 'now',
      'default_value_code' => '',
      'default_value2' => 'same',
      'default_value_code2' => '',
      'input_format' => 'M j Y - g:i:sa',
      'input_format_custom' => '',
      'increment' => '1',
      'text_parts' => array(),
      'year_range' => '0:+3',
      'label_position' => 'above',
      'label' => 'Date',
      'weight' => '-4',
      'description' => '',
      'type' => 'date_popup',
      'module' => 'date',
    ),
  );

  // Exported field: field_eventlocation
  $fields[] = array(
    'field_name' => 'field_eventlocation',
    'type_name' => 'meeting',
    'display_settings' => array(
      'weight' => '-3',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'location',
    'required' => '1',
    'multiple' => '0',
    'module' => 'location_cck',
    'active' => '1',
    'location_settings' => array(
      'form' => array(
        'fields' => array(
          'name' => array(
            'collect' => '1',
            'default' => '',
            'weight' => '2',
          ),
          'street' => array(
            'collect' => '1',
            'default' => '',
            'weight' => '4',
          ),
          'additional' => array(
            'collect' => '1',
            'default' => '',
            'weight' => '6',
          ),
          'city' => array(
            'collect' => '1',
            'default' => '',
            'weight' => '8',
          ),
          'province' => array(
            'collect' => '1',
            'default' => '',
            'weight' => '10',
          ),
          'postal_code' => array(
            'collect' => '1',
            'default' => '',
            'weight' => '12',
          ),
          'country' => array(
            'collect' => '1',
            'default' => 'us',
            'weight' => '14',
          ),
          'locpick' => array(
            'collect' => '0',
            'weight' => '20',
          ),
        ),
      ),
      'display' => array(
        'hide' => array(
          'country' => 'country',
          'locpick' => 'locpick',
          'province_name' => 'province_name',
          'country_name' => 'country_name',
          'name' => 0,
          'street' => 0,
          'additional' => 0,
          'city' => 0,
          'province' => 0,
          'postal_code' => 0,
          'map_link' => 0,
          'coords' => 0,
        ),
      ),
    ),
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'name' => '',
          'street' => '',
          'additional' => '',
          'country' => 'us',
          'locpick' => array(
            'user_latitude' => '',
            'user_longitude' => '',
          ),
          'cck_preview_in_progress' => TRUE,
          'location_settings' => array(
            'form' => array(
              'fields' => array(
                'lid' => array(
                  'default' => FALSE,
                ),
                'name' => array(
                  'default' => '',
                  'collect' => 1,
                  'weight' => 2,
                ),
                'street' => array(
                  'default' => '',
                  'collect' => 1,
                  'weight' => 4,
                ),
                'additional' => array(
                  'default' => '',
                  'collect' => 1,
                  'weight' => 6,
                ),
                'city' => array(
                  'default' => '',
                  'collect' => 0,
                  'weight' => 8,
                ),
                'province' => array(
                  'default' => '',
                  'collect' => 0,
                  'weight' => 10,
                ),
                'postal_code' => array(
                  'default' => '',
                  'collect' => 0,
                  'weight' => 12,
                ),
                'country' => array(
                  'default' => 'us',
                  'collect' => 1,
                  'weight' => 14,
                ),
                'locpick' => array(
                  'default' => FALSE,
                  'collect' => 1,
                  'weight' => 20,
                  'nodiff' => TRUE,
                ),
                'latitude' => array(
                  'default' => 0,
                ),
                'longitude' => array(
                  'default' => 0,
                ),
                'source' => array(
                  'default' => 0,
                ),
                'is_primary' => array(
                  'default' => 0,
                ),
                'delete_location' => array(
                  'default' => FALSE,
                  'nodiff' => TRUE,
                ),
              ),
            ),
          ),
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Location',
      'weight' => '-3',
      'description' => '',
      'type' => 'location',
      'module' => 'location_cck',
    ),
  );

  // Exported field: field_email
  $fields[] = array(
    'field_name' => 'field_email',
    'type_name' => 'presentation',
    'display_settings' => array(
      'weight' => '15',
      'parent' => 'group_contact_info',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'email',
    'required' => '1',
    'multiple' => '0',
    'module' => 'email',
    'active' => '1',
    'field_permissions' => array(
      'view' => 'view',
      'create' => 0,
      'edit' => 0,
      'edit own' => 0,
      'view own' => 0,
    ),
    'widget' => array(
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'email' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'E-mail Address',
      'weight' => '15',
      'description' => '',
      'type' => 'email_textfield',
      'module' => 'email',
    ),
  );

  // Exported field: field_meetingreference
  $fields[] = array(
    'field_name' => 'field_meetingreference',
    'type_name' => 'presentation',
    'display_settings' => array(
      'weight' => '2',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '1',
    'multiple' => '1',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'meeting' => 'meeting',
      'page' => 0,
      'presentation' => 0,
      'topic_request' => 0,
      'story' => 0,
    ),
    'advanced_view' => 'meeting_selection',
    'advanced_view_args' => '',
    'field_permissions' => array(
      'create' => 0,
      'edit' => 0,
      'edit own' => 0,
      'view' => 0,
      'view own' => 0,
    ),
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Available For Meeting',
      'weight' => '2',
      'description' => '',
      'type' => 'nodereference_buttons',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_meetingreference_actual
  $fields[] = array(
    'field_name' => 'field_meetingreference_actual',
    'type_name' => 'presentation',
    'display_settings' => array(
      'weight' => '10',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'page' => 0,
      'presentation' => 0,
      'topic_request' => 0,
      'story' => 0,
      'meeting' => 'meeting',
    ),
    'advanced_view' => 'meeting_selection',
    'advanced_view_args' => '',
    'field_permissions' => array(
      'create' => 'create',
      'edit' => 'edit',
      'edit own' => 0,
      'view' => 0,
      'view own' => 0,
    ),
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'nid' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Actual Date of Presentation',
      'weight' => '10',
      'description' => 'Administrators: select the actual meeting date on which the presentation was given.',
      'type' => 'nodereference_buttons',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_phone
  $fields[] = array(
    'field_name' => 'field_phone',
    'type_name' => 'presentation',
    'display_settings' => array(
      'weight' => '16',
      'parent' => 'group_contact_info',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'ca_phone',
    'required' => '0',
    'multiple' => '0',
    'module' => 'phone',
    'active' => '1',
    'phone_country_code' => 0,
    'ca_phone_separator' => '-',
    'ca_phone_parentheses' => 1,
    'field_permissions' => array(
      'view' => 'view',
      'create' => 0,
      'edit' => 0,
      'edit own' => 0,
      'view own' => 0,
    ),
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_phone][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Phone Number (Optional)',
      'weight' => '16',
      'description' => 'Optionally, enter a phone number where the group organizers can reach you.',
      'type' => 'phone_textfield',
      'module' => 'phone',
    ),
  );

  // Exported field: field_presentation_duration
  $fields[] = array(
    'field_name' => 'field_presentation_duration',
    'type_name' => 'presentation',
    'display_settings' => array(
      'weight' => '3',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '1',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '10',
    'max' => '60',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'field_permissions' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_presentation_duration][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Duration (minutes)',
      'weight' => '3',
      'description' => 'Estimate the amount of time in minutes that your presentation will take, including time for Q&A.',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_presentation_embed
  $fields[] = array(
    'field_name' => 'field_presentation_embed',
    'type_name' => 'presentation',
    'display_settings' => array(
      'weight' => '8',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'video_thumbnail',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'shadowbox',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'emvideo',
    'required' => '0',
    'multiple' => '1',
    'module' => 'emvideo',
    'active' => '1',
    'field_permissions' => array(
      'create' => 0,
      'edit' => 0,
      'edit own' => 0,
      'view' => 0,
      'view own' => 0,
    ),
    'widget' => array(
      'video_width' => '640',
      'video_height' => '360',
      'video_autoplay' => 0,
      'preview_width' => '480',
      'preview_height' => '270',
      'preview_autoplay' => 0,
      'thumbnail_width' => '160',
      'thumbnail_height' => '90',
      'thumbnail_default_path' => 'files/presentations/video-thumbnails/video-thumbnail-default.gif',
      'thumbnail_link_title' => 'See video',
      'providers' => array(
        'archive' => 'archive',
        'bliptv' => 'bliptv',
        'google' => 'google',
        'livevideo' => 'livevideo',
        'myspace' => 'myspace',
        'revver' => 'revver',
        'ustream' => 'ustream',
        'ustreamlive' => 'ustreamlive',
        'vimeo' => 'vimeo',
        'youtube' => 'youtube',
        'zzz_custom_url' => 'zzz_custom_url',
        'dailymotion' => 0,
        'guba' => 0,
        'imeem' => 0,
        'lastfm' => 0,
        'metacafe' => 0,
        'sevenload' => 0,
        'spike' => 0,
        'tudou' => 0,
        'twistage' => 0,
        'voicethread' => 0,
        'yahoomusic' => 0,
      ),
      'default_value' => array(
        '0' => array(
          'embed' => '',
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'emthumb' => 1,
      'emthumb_label' => 'Embed Video custom thumbnail',
      'emthumb_description' => 'If you upload a custom thumbnail, then this will be displayed when the Embed Video thumbnail is called for, overriding any automatic thumbnails by custom providers.',
      'emthumb_max_resolution' => '0',
      'emimport_image_path' => 'presentations/video-thumbnails',
      'emthumb_custom_alt' => 0,
      'emthumb_custom_title' => 0,
      'emthumb_store_local_thumbnail' => 1,
      'emthumb_start_collapsed' => 0,
      'label' => 'Embed Video',
      'weight' => '8',
      'description' => '',
      'type' => 'emvideo_textfields',
      'module' => 'emvideo',
    ),
  );

  // Exported field: field_presentation_file
  $fields[] = array(
    'field_name' => 'field_presentation_file',
    'type_name' => 'presentation',
    'display_settings' => array(
      'weight' => '6',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '1',
    'list_default' => 1,
    'description_field' => '1',
    'field_permissions' => '',
    'widget' => array(
      'file_extensions' => 'txt doc docx ppt pptx pdf rtf',
      'file_path' => 'presentations/attachments',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'label' => 'Upload Related Files (PDF, PPT, etc.)',
      'weight' => '6',
      'description' => '',
      'type' => 'filefield_widget',
      'module' => 'filefield',
    ),
  );

  // Exported field: field_presentation_image
  $fields[] = array(
    'field_name' => 'field_presentation_image',
    'type_name' => 'presentation',
    'display_settings' => array(
      'weight' => '7',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => '480x360_linked',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'shadowbox_gallery_field___480x360___original',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '1',
    'field_permissions' => array(
      'create' => 0,
      'edit' => 0,
      'edit own' => 0,
      'view' => 0,
      'view own' => 0,
    ),
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => 'presentations/images',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 1,
      'title' => '',
      'custom_title' => 1,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'label' => 'Images',
      'weight' => '7',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_presentation_link
  $fields[] = array(
    'field_name' => 'field_presentation_link',
    'type_name' => 'presentation',
    'display_settings' => array(
      'weight' => '9',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'link',
    'required' => '0',
    'multiple' => '1',
    'module' => 'link',
    'active' => '1',
    'attributes' => array(
      'target' => 'user',
      'rel' => '',
      'class' => '',
    ),
    'display' => array(
      'url_cutoff' => '80',
    ),
    'url' => 0,
    'title' => 'optional',
    'title_value' => '',
    'enable_tokens' => '',
    'field_permissions' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'title' => '',
          'url' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Related Links',
      'weight' => '9',
      'description' => 'Optionally, add links related to the presentation or to notes or slides, for instance in Google docs.',
      'type' => 'link',
      'module' => 'link',
    ),
  );

  // Exported field: field_presenter_name
  $fields[] = array(
    'field_name' => 'field_presenter_name',
    'type_name' => 'presentation',
    'display_settings' => array(
      'weight' => '14',
      'parent' => 'group_contact_info',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'field_permissions' => array(
      'view' => 'view',
      'create' => 0,
      'edit' => 0,
      'edit own' => 0,
      'view own' => 0,
    ),
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_presenter_name][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Presenter Name',
      'weight' => '14',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_topic_request_ref
  $fields[] = array(
    'field_name' => 'field_topic_request_ref',
    'type_name' => 'presentation',
    'display_settings' => array(
      'weight' => 0,
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'topic_request' => 'topic_request',
      'page' => 0,
      'story' => 0,
      'presentation' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'field_permissions' => '',
    'widget' => array(
      'node_link' => array(
        'teaser' => 1,
        'full' => 1,
        'title' => 'Offer to give a presentation on this topic',
        'hover_title' => '',
        'destination' => 'node',
      ),
      'fallback' => 'leave_blank',
      'edit_fallback' => 0,
      'label' => 'In Response to Request',
      'weight' => 0,
      'description' => '',
      'type' => 'nodereference_url',
      'module' => 'nodereference_url',
    ),
  );

  // Exported field: field_backref_403dffdb7a5ea425ee
  $fields[] = array(
    'field_name' => 'field_backref_403dffdb7a5ea425ee',
    'type_name' => 'topic_request',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'noderelationships_backref',
    'required' => '0',
    'multiple' => '0',
    'module' => 'noderelationships',
    'active' => '1',
    'referrer_type' => 'presentation',
    'referrer_field' => 'field_topic_request_ref',
    'field_permissions' => array(
      'create' => 0,
      'edit' => 0,
      'edit own' => 0,
      'view' => 0,
      'view own' => 0,
    ),
    'widget' => array(
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'Presentations Offered in Response to this Request',
      'weight' => '-2',
      'description' => '',
      'type' => 'noderelationships_backref',
      'module' => 'noderelationships',
    ),
  );

  // Translatables
  array(
    t('Actual Date of Presentation'),
    t('Available For Meeting'),
    t('Date'),
    t('Duration (minutes)'),
    t('E-mail Address'),
    t('Embed Video'),
    t('Images'),
    t('In Response to Request'),
    t('Location'),
    t('Phone Number (Optional)'),
    t('Presentations Offered in Response to this Request'),
    t('Presenter Name'),
    t('Related Links'),
    t('Upload Related Files (PDF, PPT, etc.)'),
  );

  return $fields;
}

/**
 * Helper to implementation of hook_fieldgroup_default_groups().
 */
function _presentations_feature_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_contact_info
  $groups[] = array(
    'group_type' => 'standard',
    'type_name' => 'presentation',
    'group_name' => 'group_contact_info',
    'label' => 'Contact Information',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '5',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 1,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '5',
    'fields' => array(
      '0' => 'field_presenter_name',
      '1' => 'field_email',
      '2' => 'field_phone',
    ),
  );

  // Translatables
  array(
    t('Contact Information'),
  );

  return $groups;
}

/**
 * Helper to implementation of hook_imagecache_default_presets().
 */
function _presentations_feature_imagecache_default_presets() {
  $items = array(
    '480x360' => array(
      'presetname' => '480x360',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '480',
            'height' => '',
            'upscale' => 0,
          ),
        ),
        '1' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '',
            'height' => '360',
            'upscale' => 0,
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Helper to implementation of hook_user_default_permissions().
 */
function _presentations_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: create field_meetingreference_actual
  $permissions[] = array(
    'name' => 'create field_meetingreference_actual',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: create meeting content
  $permissions[] = array(
    'name' => 'create meeting content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: create presentation content
  $permissions[] = array(
    'name' => 'create presentation content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: create topic_request content
  $permissions[] = array(
    'name' => 'create topic_request content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: create url aliases
  $permissions[] = array(
    'name' => 'create url aliases',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete any meeting content
  $permissions[] = array(
    'name' => 'delete any meeting content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete any presentation content
  $permissions[] = array(
    'name' => 'delete any presentation content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete any topic_request content
  $permissions[] = array(
    'name' => 'delete any topic_request content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete own meeting content
  $permissions[] = array(
    'name' => 'delete own meeting content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete own presentation content
  $permissions[] = array(
    'name' => 'delete own presentation content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: delete own topic_request content
  $permissions[] = array(
    'name' => 'delete own topic_request content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: edit any meeting content
  $permissions[] = array(
    'name' => 'edit any meeting content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit any presentation content
  $permissions[] = array(
    'name' => 'edit any presentation content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit any topic_request content
  $permissions[] = array(
    'name' => 'edit any topic_request content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit field_meetingreference_actual
  $permissions[] = array(
    'name' => 'edit field_meetingreference_actual',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit own meeting content
  $permissions[] = array(
    'name' => 'edit own meeting content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit own presentation content
  $permissions[] = array(
    'name' => 'edit own presentation content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: edit own topic_request content
  $permissions[] = array(
    'name' => 'edit own topic_request content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  // Exported permission: use vote up
  $permissions[] = array(
    'name' => 'use vote up',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view field_email
  $permissions[] = array(
    'name' => 'view field_email',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: view field_phone
  $permissions[] = array(
    'name' => 'view field_phone',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: view field_presenter_name
  $permissions[] = array(
    'name' => 'view field_presenter_name',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: view up/down votes
  $permissions[] = array(
    'name' => 'view up/down votes',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
    ),
  );

  return $permissions;
}
