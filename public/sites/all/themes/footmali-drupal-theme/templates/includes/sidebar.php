<?php 
  $theme_path = path_to_theme();
?>
<div class="sidebar widget-area-11">
    <div class="widget">
      <a href="http://monequipe.footmali.com">
        <img src="/<?php echo $theme_path; ?>/images/mon-equipe-square.png"  alt="Footmali Mon Équipe"/>
      </a>
    </div>

    <?php //include_once('partials/_search.php'); ?>

    <?php include_once('partials/_ad_sidebar.php'); ?>

    <?php if(drupal_is_front_page()): ?>
      <?php include_once('partials/_wc2018_sidebar_standings.php'); ?>
      <?php include_once('partials/_news_popular.php'); ?>
    <?php elseif(!drupal_is_front_page()): ?>
      <?php include_once('partials/_news_headlines_popular.php'); ?>
    <?php endif; ?>

    <?php include_once('partials/_facebook_banner.php'); ?>

</div>
<!-- sidebar -->
