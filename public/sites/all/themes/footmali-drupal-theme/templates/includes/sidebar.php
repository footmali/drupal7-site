<div class="sidebar widget-area-11">
    <?php if(drupal_is_front_page()): ?>
        <div class="widget kopa-ads-widget">
        <!-- Sidebar -->
        <ins class="adsbygoogle"
            style="display:block"
            data-ad-client="ca-pub-7538390076513661"
            data-ad-slot="5771447117"
            data-ad-format="auto"
            data-full-width-responsive="true"></ins>
             <script>
                (adsbygoogle = window.adsbygoogle || []).push({});
             </script>
        </div>
        <!-- widget -->
     <?php endif; ?>

    <?php if ($page['sidebar_second']){ print render($page['sidebar_second']); } ?>

    <?php if(!drupal_is_front_page()): ?>
        <div class="widget kopa-ads-widget">
        <!-- Sidebar -->
        <ins class="adsbygoogle"
            style="display:block"
            data-ad-client="ca-pub-7538390076513661"
            data-ad-slot="5771447117"
            data-ad-format="auto"
            data-full-width-responsive="true"></ins>
             <script>
                (adsbygoogle = window.adsbygoogle || []).push({});
             </script>
        </div>
        <!-- widget -->
    <?php endif; ?>
</div>
<!-- sidebar -->
