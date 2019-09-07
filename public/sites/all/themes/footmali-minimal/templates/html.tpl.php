<?php

/**
 * @file
 * Default theme implementation to display the basic html structure of a single
 * Drupal page.
 *
 * Variables:
 * - $css: An array of CSS files for the current page.
 * - $language: (object) The language the site is being displayed in.
 *   $language->language contains its textual representation.
 *   $language->dir contains the language direction. It will either be 'ltr' or 'rtl'.
 * - $rdf_namespaces: All the RDF namespace prefixes used in the HTML document.
 * - $grddl_profile: A GRDDL profile allowing agents to extract the RDF data.
 * - $head_title: A modified version of the page title, for use in the TITLE
 *   tag.
 * - $head_title_array: (array) An associative array containing the string parts
 *   that were used to generate the $head_title variable, already prepared to be
 *   output as TITLE tag. The key/value pairs may contain one or more of the
 *   following, depending on conditions:
 *   - title: The title of the current page, if any.
 *   - name: The name of the site.
 *   - slogan: The slogan of the site, if any, and if there is no title.
 * - $head: Markup for the HEAD section (including meta tags, keyword tags, and
 *   so on).
 * - $styles: Style tags necessary to import all CSS files for the page.
 * - $scripts: Script tags necessary to load the JavaScript files and settings
 *   for the page.
 * - $page_top: Initial markup from any modules that have altered the
 *   page. This variable should always be output first, before all other dynamic
 *   content.
 * - $page: The rendered page content.
 * - $page_bottom: Final closing markup from any modules that have altered the
 *   page. This variable should always be output last, after all other dynamic
 *   content.
 * - $classes String of classes that can be used to style contextually through
 *   CSS.
 *
 * @see template_preprocess()
 * @see template_preprocess_html()
 * @see template_process()
 *
 * @ingroup themeable
 */
?>
<?php

global $theme_path;

?>
<!DOCTYPE html>
<html lang="<?php print $language->language; ?>">
<head profile="<?php print $grddl_profile; ?>">
    <!-- Required meta tags -->
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">
    <meta property="fb:pages" content="59161831864" />
    
    <?php print $head; ?>

    <title><?php print $head_title; ?></title>

    <?php print $styles; ?>

    <!-- Google Tag Manager -->

</head>
<body class="<?php print $classes; ?>" <?php print $attributes; ?>>

  <!-- Google Tag Manager (noscript) -->
  <!-- End Google Tag Manager (noscript) -->

    <?php print $page_top; ?>
    <?php print $page; ?>


    <?php print $scripts; ?>
    <?php print $page_bottom; ?>

    <!-- Fontawesome -->
    <script src="//use.fontawesome.com/29ccf52a4b.js"></script>
    <script src="//cdnjs.cloudflare.com/ajax/libs/cookieconsent2/3.0.3/cookieconsent.min.js"></script>
    <script>
    window.addEventListener("load", function(){
    window.cookieconsent.initialise({
      "palette": {
        "popup": {
          "background": "#efefef",
          "text": "#404040"
        },
        "button": {
          "background": "#8ec760",
          "text": "#ffffff"
        }
      },
      "theme": "classic",
      "content": {
        "message": "En poursuivant votre navigation sur footmali.com, vous acceptez l'utilisation de cookies.",
      "dismiss": "Ok",
      "link": "En savoir plus"
      }
    })});
    </script>
</body>
</html>
