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
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <?php print $head; ?>
    <title><?php print $head_title; ?></title>
    <?php print $styles; ?>
    <noscript>
        <style>
            .main-menu-mobile:target{
                display: block;
            }
        </style>
    </noscript>

    <!-- Google Tag Manager -->
<script>(function(w,d,s,l,i){w[l]=w[l]||[];w[l].push({'gtm.start':
new Date().getTime(),event:'gtm.js'});var f=d.getElementsByTagName(s)[0],
j=d.createElement(s),dl=l!='dataLayer'?'&l='+l:'';j.async=true;j.src=
'https://www.googletagmanager.com/gtm.js?id='+i+dl;f.parentNode.insertBefore(j,f);
})(window,document,'script','dataLayer','GTM-W59KKT2');</script>
<!-- End Google Tag Manager -->



    <!-- adsense -->
    <script async src="//pagead2.googlesyndication.com/pagead/js/adsbygoogle.js"></script>
    <script>
        (adsbygoogle = window.adsbygoogle || []).push({
            //google_ad_client: "ca-pub-7538390076513661",
            google_ad_client: "ca-pub-6013670346438022",
            enable_page_level_ads: true
        });
    </script>

    <!-- outbrain -->
    <script type="text/javascript" async="async" src="https://widgets.outbrain.com/outbrain.js"></script>

   <script src="//assets.adobedtm.com/launch-EN9a2f5dda180f431399f73a3e396a68af.min.js"></script>

 <link rel="stylesheet" type="text/css" href="//cdnjs.cloudflare.com/ajax/libs/cookieconsent2/3.0.3/cookieconsent.min.css" />
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
 </head>
<body class="<?php echo $is_admin? 'admin_user': 'none_admin_user'; ?> <?php echo $is_front ? 'kopa-home-page' : 'kopa-sub-page kopa-single-page';?> <?php print $classes; ?>" <?php print $attributes; ?>>

  <!-- Google Tag Manager (noscript) -->
  <noscript><iframe src="https://www.googletagmanager.com/ns.html?id=GTM-W59KKT2"
  height="0" width="0" style="display:none;visibility:hidden"></iframe></noscript>
  <!-- End Google Tag Manager (noscript) -->

    <div id="fb-root"></div>
    <?php print $page_top; ?>
    <?php print $page; ?>
    <?php print $page_bottom; ?>

    <a href="#" class="scrollup"><span class="fa fa-chevron-up"></span></a>


    <script>
        var footmali = {
            template_directory: "/<?php echo $theme_path; ?>/"
        };
    </script>
    <?php print $scripts; ?>
    <!-- Web Font Loader -->
    <script>
       WebFontConfig = {
            google: {
                families: ['Open Sans:400,300,600,700,800', 'Oswald:400,300,700', 'Roboto Condensed:300italic,400italic,700italic,400,300,700']
            }
       };

       (function(d) {
          var wf = d.createElement('script'), s = d.scripts[0];
          wf.src = 'https://ajax.googleapis.com/ajax/libs/webfont/1.5.18/webfont.js';
          s.parentNode.insertBefore(wf, s);
       })(document);
    </script>

    <!-- Facebook -->
    <script>
        window.fbAsyncInit = function() {
            FB.init({
                appId: '714044432027505',
                status: true,
                xfbml: true,
                version: 'v2.10'
            });
        };

        (function(d, s, id){
            var js, fjs = d.getElementsByTagName(s)[0];
            if (d.getElementById(id)) {return;}
            js = d.createElement(s); js.id = id;
            js.src = "//connect.facebook.net/fr_FR/sdk.js";
            fjs.parentNode.insertBefore(js, fjs);
        }(document, 'script', 'facebook-jssdk'));
    </script>

    <!-- Twitter-->
    <script>
        window.twttr = (function(d, s, id) {
            var js, fjs = d.getElementsByTagName(s)[0],
            t = window.twttr || {};
            if (d.getElementById(id)) return t;
            js = d.createElement(s);
            js.id = id;
            js.src = "https://platform.twitter.com/widgets.js";
            fjs.parentNode.insertBefore(js, fjs);

            t._e = [];
            t.ready = function(f) {
                t._e.push(f);
            };

            return t;
        }(document, "script", "twitter-wjs"));
    </script>

    <!-- Google -->
    <script src="https://apis.google.com/js/platform.js" async defer></script>
      <script type="text/javascript">_satellite.pageBottom();</script>
</body>
</html>
