<?php
// $Id: shadowbox.admin.inc,v 1.1.2.9 2010/02/24 18:50:33 nicholasalipaz Exp $

/**
 * @file
 * Administrative interface for the Shadowbox module.
 */


/**
 * FAPI definition for the Shadowbox global settings form.
 *
 * @ingroup forms
 * @see shadowbox_global_settings_validate()
 */
function shadowbox_global_settings() {
  $shadowbox_path = SHADOWBOX_DEFAULT_PATH;
  $shadowbox_location = variable_get('shadowbox_location', $shadowbox_path);
  $module_path = drupal_get_path('module', 'shadowbox');

  // Test
  $form['shadowbox']['test'] = array(
    '#type' => 'markup',
    '#prefix' => '<div id="shadowbox-settings-test">',
    '#value' => l('Test Shadowbox with the current settings.', "$module_path/sample.png", array('attributes' => array('rel' => 'shadowbox'))),
    '#suffix' => '</div>',
  );

  // Global settings
  $form['shadowbox']['shadowbox_enabled'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enable Shadowbox'),
    '#default_value' => variable_get('shadowbox_enabled', TRUE),
    '#description' => t('Check this box to enable Shadowbox for the entire site.'),
  );
  $form['shadowbox']['shadowbox_location'] = array(
    '#type' => 'textfield',
    '#title' => t('Shadowbox location'),
    '#default_value' => variable_get('shadowbox_location', $shadowbox_path),
    '#description' => t('Enter the location of the !download. It is recommended to use e.g. sites/all/libraries/shadowbox.', array('!download' => l('third party Shadowbox distribution', 'http://www.shadowbox-js.com/download.html', array('absolute' => TRUE)))),
  );
  $form['shadowbox']['active'] = array(
    '#type' => 'fieldset',
    '#title' => t('Page specific activation settings'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );
  $form['shadowbox']['active']['shadowbox_active_type'] = array(
    '#type' => 'radios',
    '#title' => t('Enable Shadowbox on specific pages'),
    '#options' => array('disable' => t('Enable on every page except the listed pages.'), 'enable' => t('Enable on only the listed pages.'), 'php' => t('Enable if the following PHP code returns <code>TRUE</code> (PHP-mode, experts only).')),
    '#default_value' => variable_get('shadowbox_active_type', 'disable'),
  );
  $form['shadowbox']['active']['shadowbox_pages'] = array(
    '#type' => 'textarea',
    '#title' => t('Pages'),
    '#default_value' => variable_get('shadowbox_pages', "admin*\nimg_assist*\nnode/add/*\nnode/*/edit"),
    '#description' => t("Enter one page per line as Drupal paths. The '*' character is a wildcard. Example paths are %blog for the blog page and %blog-wildcard for every personal blog. %front is the front page. If the PHP-mode is chosen, enter PHP code between php tags. Note that executing incorrect PHP-code can break your Drupal site.", array('%blog' => 'blog', '%blog-wildcard' => 'blog/*', '%front' => '<front>')),
  );

  // Options
  $form['shadowbox']['shadowbox_options'] = array(
    '#type' => 'fieldset',
    '#title' => t('Shadowbox options'),
    '#description' => t('Shadowbox is highly configurable, but can also be used with little to no configuration at all. The following options may be used to configure Shadowbox on a site-wide basis.'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  // Animation
  $form['shadowbox']['shadowbox_options']['animation_settings'] = array(
    '#type' => 'fieldset',
    '#title' => t('Animation'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );
  $form['shadowbox']['shadowbox_options']['animation_settings']['shadowbox_animate'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enable animation'),
    '#description' => t('Set this false to disable all fancy animations (except fades). This can improve the overall effect on computers with poor performance.'),
    '#default_value' => variable_get('shadowbox_animate', TRUE),
  );
  $form['shadowbox']['shadowbox_options']['animation_settings']['shadowbox_animate_fade'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enable fading animations'),
    '#description' => t('Set this false to disable all fading animations.'),
    '#default_value' => variable_get('shadowbox_animate_fade', TRUE),
  );
  $form['shadowbox']['shadowbox_options']['animation_settings']['shadowbox_animation_sequence'] = array(
    '#type' => 'select',
    '#title' => t('Animation sequence'),
    '#multiple' => FALSE,
    '#description' => t('The animation sequence to use when resizing Shadowbox.'),
    '#options' => array(
      'wh' => t('Width then height'),
      'hw' => t('Height then width'),
      'sync' => t('Simultaneously'),
    ),
    '#default_value' => variable_get('shadowbox_animation_sequence', 'wh'),
  );
  $form['shadowbox']['shadowbox_options']['animation_settings']['shadowbox_resize_duration'] = array(
    '#type' => 'textfield',
    '#title' => t('Resize duration'),
    '#description' => t('The duration (in seconds) of the resizing animations.'),
    '#size' => 5,
    '#maxlength' => 4,
    '#default_value' => variable_get('shadowbox_resize_duration', 0.35),
  );
  $form['shadowbox']['shadowbox_options']['animation_settings']['shadowbox_fade_duration'] = array(
    '#type' => 'textfield',
    '#title' => t('Fade duration'),
    '#description' => t('The duration (in seconds) of the overlay fade animation.'),
    '#size' => 5,
    '#maxlength' => 4,
    '#default_value' => variable_get('shadowbox_fade_duration', 0.35),
  );
  $form['shadowbox']['shadowbox_options']['animation_settings']['shadowbox_initial_height'] = array(
    '#type' => 'textfield',
    '#title' => t('Initial height'),
    '#description' => t('The height of Shadowbox (in pixels) when it first appears on the screen.'),
    '#size' => 5,
    '#maxlength' => 4,
    '#default_value' => variable_get('shadowbox_initial_height', 160),
  );
  $form['shadowbox']['shadowbox_options']['animation_settings']['shadowbox_initial_width'] = array(
    '#type' => 'textfield',
    '#title' => t('Initial width'),
    '#description' => t('The width of Shadowbox (in pixels) when it first appears on the screen.'),
    '#size' => 5,
    '#maxlength' => 4,
    '#default_value' => variable_get('shadowbox_initial_width', 320),
  );

  // Overlay
  $form['shadowbox']['shadowbox_options']['overlay'] = array(
    '#type' => 'fieldset',
    '#title' => t('Overlay'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );
  $form['shadowbox']['shadowbox_options']['overlay']['shadowbox_overlay_color'] = array(
    '#type' => 'textfield',
    '#title' => t('Overlay color'),
    '#description' => t('Select a hexadecimal color value for the overlay (e.g. 000 or 000000 for black).'),
    '#size' => 8,
    '#maxlength' => 7,
    '#default_value' => variable_get('shadowbox_overlay_color', '000'),
    '#field_prefix' => '#',
  );
  $form['shadowbox']['shadowbox_options']['overlay']['shadowbox_overlay_opacity'] = array(
    '#type' => 'textfield',
    '#title' => t('Overlay opacity'),
    '#description' => t('The opacity of the overlay. Accepts values between 0 and 1. 0 is fully transparent, 1 is fully opaque.'),
    '#size' => 5,
    '#maxlength' => 4,
    '#default_value' => variable_get('shadowbox_overlay_opacity', 0.85),
  );
  $form['shadowbox']['shadowbox_options']['overlay']['shadowbox_viewport_padding'] = array(
    '#type' => 'textfield',
    '#title' => t('Viewport padding'),
    '#description' => t('The amount of padding (in pixels) to maintain around the edge of the browser window.'),
    '#size' => 4,
    '#maxlength' => 4,
    '#default_value' => variable_get('shadowbox_viewport_padding', 20),
  );

  // Galleries
  $form['shadowbox']['shadowbox_options']['gallery'] = array(
    '#type' => 'fieldset',
    '#title' => t('Galleries'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );
  $form['shadowbox']['shadowbox_options']['gallery']['shadowbox_display_nav'] = array(
    '#type' => 'checkbox',
    '#title' => t('Display gallery navigation.'),
    '#description' => t('Enable display of the gallery navigation controls.'),
    '#default_value' => variable_get('shadowbox_display_nav', TRUE),
  );
  $form['shadowbox']['shadowbox_options']['gallery']['shadowbox_continuous_galleries'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enable continuous galleries'),
    '#description' => t('By default, the galleries will not let a user go before the first image or after the last. Enabling this feature will let the user go directly to the first image in a gallery from the last one by selecting "Next".'),
    '#default_value' => variable_get('shadowbox_continuous_galleries', FALSE),
  );
  $form['shadowbox']['shadowbox_options']['gallery']['shadowbox_display_counter'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enable counter'),
    '#description' => t('Enable display of the gallery counter. Counters are never displayed on elements that are not part of a gallery.'),
    '#default_value' => variable_get('shadowbox_display_counter', TRUE),
  );
  $form['shadowbox']['shadowbox_options']['gallery']['shadowbox_counter_type'] = array(
    '#type' => 'select',
    '#title' => t('Counter type'),
    '#multiple' => FALSE,
    '#description' => t('The mode to use for the gallery counter. May be either \'default\' or \'skip\'. The default counter is a simple \'1 of 5\' message. The skip counter displays a separate link to each piece in the gallery, enabling quick navigation in large galleries.'),
    '#options' => array(
      'default' => t('Default'),
      'skip' => t('Skip'),
    ),
    '#default_value' => variable_get('shadowbox_counter_type', 'default'),
  );
  $form['shadowbox']['shadowbox_options']['gallery']['shadowbox_counter_limit'] = array(
    '#type' => 'textfield',
    '#title' => t('Counter limit'),
    '#description' => t('Limits the number of counter links that will be displayed in a "skip" style counter. If the actual number of gallery elements is greater than this value, the counter will be restrained to the elements immediately preceding and following the current element.'),
    '#default_value' => variable_get('shadowbox_counter_limit', 10),
  );
  $form['shadowbox']['shadowbox_options']['gallery']['shadowbox_slideshow_delay'] = array(
    '#type' => 'textfield',
    '#title' => t('Slideshow delay'),
    '#description' => t('A delay (in seconds) to use for slideshows. If set to anything other than 0, this value determines an interval at which Shadowbox will automatically proceed to the next piece in the gallery.'),
    '#default_value' => variable_get('shadowbox_slideshow_delay', 0),
  );

  // Movies
  $form['shadowbox']['shadowbox_options']['movies'] = array(
    '#type' => 'fieldset',
    '#title' => t('Movies'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );
  $form['shadowbox']['shadowbox_options']['movies']['shadowbox_autoplay_movies'] = array(
    '#type' => 'checkbox',
    '#title' => t('Auto-play movies'),
    '#description' => t('Automatically play movies when they are loaded.'),
    '#default_value' => variable_get('shadowbox_autoplay_movies', TRUE),
  );
  $form['shadowbox']['shadowbox_options']['movies']['shadowbox_show_movie_controls'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enable movie controls'),
    '#description' => t('Enable display of QuickTime and Windows Media player movie controls.'),
    '#default_value' => variable_get('shadowbox_show_movie_controls', TRUE),
  );

  // Input controls
  $form['shadowbox']['shadowbox_options']['input'] = array(
    '#type' => 'fieldset',
    '#title' => t('Input controls'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );
  $form['shadowbox']['shadowbox_options']['input']['shadowbox_overlay_listen'] = array(
    '#type' => 'checkbox',
    '#title' => t('Mouse click closes overlay.'),
    '#description' => t('Enable listening for mouse clicks on the overlay that will close Shadowbox.'),
    '#default_value' => variable_get('shadowbox_overlay_listen', TRUE),
  );
  $form['shadowbox']['shadowbox_options']['input']['shadowbox_enable_keys'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enable keys'),
    '#description' => t('Enable keyboard navigation of galleries.'),
    '#default_value' => variable_get('shadowbox_enable_keys', TRUE),
  );

  // Media handling
  $form['shadowbox']['shadowbox_options']['media_handling'] = array(
    '#type' => 'fieldset',
    '#title' => t('Media handling'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );
  $form['shadowbox']['shadowbox_options']['media_handling']['shadowbox_handle_oversize'] = array(
    '#type' => 'select',
    '#title' => t('Handle large images'),
    '#multiple' => FALSE,
    '#description' => t('The mode to use for handling images that are too large for the viewport. The "none" setting will not alter the image dimensions, though clipping may occur. Setting this to "resize" enables on-the-fly resizing of large content. In this mode, the height and width of large, resizable content will be adjusted so that it may still be viewed in its entirety while maintaining its original aspect ratio. The "drag" mode will display an oversized image at its original resolution, but will allow the user to drag it within the view to see portions that may be clipped.'),
    '#options' => array(
      'resize' => t('Resize'),
      'drag' => t('Drag'),
      'none' => t('None'),
    ),
    '#default_value' => variable_get('shadowbox_handle_oversize', 'resize'),
  );
  $form['shadowbox']['shadowbox_options']['media_handling']['shadowbox_handle_unsupported'] = array(
    '#type' => 'select',
    '#title' => t('Handle unsupported'),
    '#multiple' => FALSE,
    '#description' => t('The mode to use for handling unsupported media. May be either <strong>link</strong> or <strong>remove</strong>. Media are unsupported when the browser plugin required to display the media properly is not installed. The link option will display a user-friendly error message with a link to a page where the needed plugin can be downloaded. The remove option will simply remove any unsupported gallery elements from the gallery before displaying it. With this option, if the element is not part of a gallery, the link will simply be followed.'),
    '#options' => array(
      'link' => t('Link'),
      'remove' => t('Remove'),
    ),
    '#default_value' => variable_get('shadowbox_handle_unsupported', 'link'),
  );

  // Libraries
  $form['shadowbox']['shadowbox_options']['libraries'] = array(
    '#type' => 'fieldset',
    '#title' => t('Libraries'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );
  $form['shadowbox']['shadowbox_options']['libraries']['shadowbox_use_sizzle'] = array(
    '#type' => 'checkbox',
    '#title' => t('Use Sizzle'),
    '#description' => t('Enable loading the Sizzle.js CSS selector library.'),
    '#default_value' => variable_get('shadowbox_use_sizzle', FALSE),
  );

  return system_settings_form($form);
}

/**
 * Validate admin settings form inputs.
 */
function shadowbox_global_settings_validate($form, &$form_state) {
  $color = $form_state['values']['shadowbox_overlay_color'];
  $opacity = $form_state['values']['shadowbox_overlay_opacity'];
  $slideshow_delay = $form_state['values']['shadowbox_slideshow_delay'];
  $resize_duration = $form_state['values']['shadowbox_resize_duration'];
  $fade_duration = $form_state['values']['shadowbox_fade_duration'];
  $viewport_padding = $form_state['values']['shadowbox_viewport_padding'];
  $initial_height = $form_state['values']['shadowbox_initial_height'];
  $initial_width = $form_state['values']['shadowbox_initial_width'];
  $counter_limit = $form_state['values']['shadowbox_counter_limit'];

  if (!is_numeric($resize_duration) || $resize_duration < 0 || $resize_duration > 10) {
    form_set_error('shadowbox_resize_duration', t('You must enter a number between 0 and 10.'));
  }

  if (!is_numeric($fade_duration) || $fade_duration < 0 || $fade_duration > 10) {
    form_set_error('shadowbox_fade_duration', t('You must enter a number between 0 and 10.'));
  }

  if (!is_numeric($initial_height)) {
    form_set_error('shadowbox_initial_height', t('You must enter a number.'));
  }
  else {
    $form_state['values']['shadowbox_initial_height'] = floor($initial_height);
  }

  if (!is_numeric($initial_width)) {
    form_set_error('shadowbox_initial_width', t('You must enter a number.'));
  }
  else {
    $form_state['values']['shadowbox_initial_width'] = floor($initial_width);
  }

  if (!_validate_hex_color($color)) {
    form_set_error('shadowbox_overlay_color', t('You must enter a properly formed hex value (e.g. 000 or 000000 for black.)'));
  }

  if ($opacity == '' || (floor($opacity) != 0 && $opacity != 1)) {
    form_set_error('shadowbox_overlay_opacity', t('You must enter a decimal number between 0 and 1.'));
  }

  if (!is_numeric($viewport_padding) || $viewport_padding < 0 || $viewport_padding > 200) {
    form_set_error('shadowbox_viewport_padding', t('You must enter a number between 0 and 200.'));
  }
  else {
    $form_state['values']['shadowbox_viewport_padding'] = (int)$viewport_padding;
  }
}

/**
 * FAPI definition for the Shadowbox automatic image handling settings form.
 *
 * @ingroup forms
 * @see shadowbox_global_settings_validate()
 */
function shadowbox_automatic_settings() {
  $form['shadowbox_auto_enable_all_images'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enable for all image links'),
    '#description' => t('Enable this option to automatically add the <code>rel="shadowbox"</code> attribute to all links pointing to an image file.'),
    '#default_value' => variable_get('shadowbox_auto_enable_all_images', 0),
  );
  $form['shadowbox_auto_gallery'] = array(
    '#type' => 'checkbox',
    '#title' => t('Group images as a shadowbox gallery'),
    '#description' => t('Enable this options to open all images in a shadowbox gallery rather than individually.'),
    '#default_value' => variable_get('shadowbox_auto_gallery', 0),
  );

  return system_settings_form($form);
}
