<?php

/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * The doctype, html, head and body tags are not in this template. Instead they
 * can be found in the html.tpl.php template in this directory.
 *
 * Available variables:
 *
 * General utility variables:
 * - : The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['header']: Items for the header region.
 * - $page['footer']: Items for the footer region.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see template_process()
 * @see html.tpl.php
 *
 * @ingroup themeable
 */
?>

<?php
    global $theme_path;
    $path = $_SERVER['REQUEST_URI'];
?>

<header id="header">
    <nav class="clearfix">
        <!-- logo -->
        <a id="logo" class="navbar-brand" href="<?php echo $base_path; ?>">
            <span class="invisible">Footmali.com</span>
        </a>

        <div id="header-menu" class="row">
            <ul class="clearfix">
                <li><a href="/" <?php if($path == '/'){ echo 'class="active"';} ?> ><span><i class="fa fa-home"></i><span class="text"><?php echo t('Home'); ?></span></span></a></li>
                <li><a href="/actu" <?php if($path == '/actu' ){ echo 'class="active"';} ?> ><span><i class="fa fa-stream"></i><span class="text"><?php echo t('Actu'); ?></span></span></a></li>
                <li><a href="/video/index" <?php if(explode('/', $_SERVER['REQUEST_URI'])[1] == 'video'){ echo 'class="active"';} ?> ><span><i class="fa fa-play-circle"></i><span class="text"><?php echo t('Video'); ?></span></span></a></li>
            </ul>
        </div>
    </nav> 
</header>


<main id="main-content" role="main">
    <div class="container">
        <div id="admin" class="row">
            <?php if ($page['highlighted']): ?>
                <div id="highlighted"><?php print render($page['highlighted']); ?></div>
            <?php endif; ?>

            <?php print $messages; ?>

            <?php if ($tabs): ?>
                <div class="tabs"><?php print render($tabs); ?></div>
            <?php endif; ?>

            <?php print render($page['help']); ?>

            <?php if ($action_links): ?>
                <ul class="action-links"><?php print render($action_links); ?></ul>
            <?php endif; ?>
        </div>

        <div id="content" class="row clearfix">
            <div id="column1" class="clearfix">
                <div class="ads">
                    <!-- <span class="heading">publicité</span> -->
                    <div id="header-banner">
                        <ins class="adsbygoogle"
                            style="display:block"
                            data-ad-client="ca-pub-1792676367399829"
                            data-ad-slot="5413856475"
                            data-ad-format="auto"
                            data-full-width-responsive="true"></ins>
                        <script>
                            (adsbygoogle = window.adsbygoogle || []).push({});
                        </script>
                    </div>
                </div>
                <?php print render($title_prefix); ?>
                    <?php if ($title): ?><h1 class="title entry-title" id="page-title"><?php print $title; ?></h1><?php endif; ?>
                <?php print render($title_suffix); ?>

                <?php if ($page['content_top']){ print render($page['content_top']); } ?>
                <?php if ($page['content']){ print render($page['content']); } ?>
            </div>

            <!-- sidebar -->
            <aside id="column2" class="clearfix">
                <?php if ($page['sidebar_second']){ print render($page['sidebar_second']); } ?>
            </aside>
        </div>
    </div>
</main>

<footer id="footer">
    <div class="container">
        <div id="footer-menu" class="row">
            <ul class="clearfix">
                <li><a href="/" <?php if($path == '/'){ echo 'class="active"';} ?> ><span><i class="fa fa-home"></i><span class="text"><?php echo t('Home'); ?></span></span></a></li>
                <li><a href="/actu" <?php if($path == '/actu' ){ echo 'class="active"';} ?> ><span><i class="fa fa-stream"></i><span class="text"><?php echo t('Actu'); ?></span></span></a></li>
                <li><a href="/video/index" <?php if(explode('/', $_SERVER['REQUEST_URI'])[1] == 'video'){ echo 'class="active"';} ?> ><span><i class="fa fa-play-circle"></i><span class="text"><?php echo t('Video'); ?></span></span></a></li>
            </ul>
        </div>
    </div>
</footer>