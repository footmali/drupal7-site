<?php

$featured_articles = footmali_featured_articles();
?>


<?php $index = 1; foreach($featured_articles as $featured_article): ?>
    <?php if($index <= 1): ?>
    <div class="widget-area-5">
        <div class="widget kopa-article-list-widget article-list-4" style="margin-bottom: 0;">
            <h3 class="widget-title style1"><?php echo t('Features'); ?></h3>
            <ul class="clearfix">
                <li>
                    <article class="entry-item">
                        <div class="entry-thumb">
                            <a href="<?php echo drupal_get_path_alias("node/{$featured_article->nid}"); ?>">
                                <?php echo footmali_output_image('content_carrousel_large', $featured_article->field_image); ?>
                            </a>
                        </div>
                        <div class="entry-content">
                            <div class="content-top">
                                <h4 class="entry-title">
                                    <a href="<?php echo drupal_get_path_alias("node/{$featured_article->nid}"); ?>">
                                        <?php echo $featured_article->title; ?>
                                    </a>
                                </h4>
                            </div>
                            <?php echo footmali_trim_paragraph($featured_article->body[LANGUAGE_NONE][0]['value'],  140) . '...'; ?>
                            <footer>
                                <p class="entry-author"><?php echo t('by'); ?> <?php echo footmali_get_article_author($featured_article); ?></p>
                            </footer>
                        </div>
                    </article>
                </li>
            </ul>
        </div>
        <!-- widget -->

    </div>
    <?php endif; ?>
<?php $index++; endforeach; ?>

<div class="widget kopa-article-list-widget article-list-3 hidden-xs">
    <ul>
        <?php $index = 1; foreach($featured_articles as $featured_article): ?>
            <?php if($index > 1): ?>
                <li>
                    <article class="entry-item">
                        <span class="kopa-list-icon"></span>
                        <h4 class="entry-title">
                            <a href="<?php echo drupal_get_path_alias("node/{$featured_article->nid}"); ?>">
                                <?php echo $featured_article->title; ?>
                            </a>
                        </h4>
                    </article>
                </li>
            <?php endif; ?>
        <?php $index++; endforeach; ?>
    </ul>
</div>

<div class="widget kopa-article-list-widget article-list-1 visible-xs visible-sm">
    <ul>
        <?php $index = 1; foreach($featured_articles as $featured_article): ?>
            <?php if($index > 1): ?>
                <li>
                    <article class="entry-item">
                        <div class="entry-thumb">
                            <a href="<?php echo drupal_get_path_alias("node/{$featured_article->nid}"); ?>">
                                <?php echo footmali_output_image('content_carrousel_large', $featured_article->field_image); ?>
                            </a>
                        </div>
                        <div class="entry-content">
                            <div class="content-top">
                                <h4 class="entry-title">
                                    <a href="<?php echo drupal_get_path_alias("node/{$featured_article->nid}"); ?>">
                                        <?php echo $featured_article->title; ?>
                                    </a>
                                </h4>
                            </div>
                            <?php echo footmali_trim_paragraph($featured_article->body[LANGUAGE_NONE][0]['value'],  140) . '...'; ?>
                            <footer>
                                <!-- todo: link arthur's other articles -->
                                <p class="entry-author"><?php echo t('by'); ?> <?php echo footmali_get_article_author($featured_article); ?></p>
                            </footer>
                        </div>
                    </article>
                </li>
            <?php endif; ?>
        <?php $index++; endforeach; ?>
    </ul>
</div>
