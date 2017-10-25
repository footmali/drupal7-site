<?php
/**
 * @file
 * Default theme implementation for beans.
 *
 * Available variables:
 * - $content: An array of comment items. Use render($content) to print them all, or
 *   print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $title: The (sanitized) entity label.
 * - $url: Direct url of the current entity if specified.
 * - $page: Flag for the full page state.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. By default the following classes are available, where
 *   the parts enclosed by {} are replaced by the appropriate values:
 *   - entity-{ENTITY_TYPE}
 *   - {ENTITY_TYPE}-{BUNDLE}
 *
 * Other variables:
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 *
 * - $standings: array of standing data
 * - $display_type: standing table display type, e.g. mini, full
 * - $page_url: page the standing links to
 *
 * @see template_preprocess()
 * @see template_preprocess_entity()
 * @see template_process()
 * @see footmali_preprocess_entity()
 */
?>
<div class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <div class="content"<?php print $content_attributes; ?>>
    <?php
    print theme('footmali_standings_block', array(
        'format' => $display_type,
        'standings' => $standings,
        'title' => $title,
        'page_url' => $page_url,
    ));
    ?>
  </div>
</div>
