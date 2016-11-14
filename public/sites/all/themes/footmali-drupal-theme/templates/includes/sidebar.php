<?php
  $theme_path = path_to_theme();
  $node = isset($node) ? $node : false;
?>
<div class="sidebar widget-area-11">

    <?php //include_once('partials/_search.php'); ?>

    <?php include_once('partials/_ad_sidebar.php'); ?>

    <?php if(drupal_is_front_page()): ?>
      <?php include_once('partials/_wc2018_sidebar_standings.php'); ?>
      <?php include_once('partials/_news_popular.php'); ?>
    <?php elseif(!drupal_is_front_page()): ?>
      <?php include_once('partials/_news_headlines_popular.php'); ?>
    <?php endif; ?>

    <?php include_once('partials/_facebook_banner.php'); ?>

    <?php if($node && $node->type == 'article'): ?>
        <div class="widget kopa-article-list-widget article-list-5">
            <h3 class="widget-title style16">
                <span>Vous Aimerez Aussi</span>
            </h3>
            <div class="OUTBRAIN" data-widget-id="TS_1" data-src="" data-ob-template="Footmali" ></div>
        </div>
    <?php endif; ?>
</div>
<!-- sidebar -->
