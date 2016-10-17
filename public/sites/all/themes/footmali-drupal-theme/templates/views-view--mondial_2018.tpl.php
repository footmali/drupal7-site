<?php

/**
 * @file
 * Main view template.
 *
 * Variables available:
 * - $classes_array: An array of classes determined in
 *   template_preprocess_views_view(). Default classes are:
 *     .view
 *     .view-[css_name]
 *     .view-id-[view_name]
 *     .view-display-id-[display_name]
 *     .view-dom-id-[dom_id]
 * - $classes: A string version of $classes_array for use in the class attribute
 * - $css_name: A css-safe version of the view name.
 * - $css_class: The user-specified classes names, if any
 * - $header: The view header
 * - $footer: The view footer
 * - $rows: The results of the view query, if any
 * - $empty: The empty text to display if the view is empty
 * - $pager: The pager next/prev links to display, if any
 * - $exposed: Exposed widget form/info to display
 * - $feed_icon: Feed icon to display, if any
 * - $more: A link to view more, if any
 *
 * @ingroup views_templates
 */
?>
<div class="<?php print $classes; ?>">
<?php print render($title_prefix); ?>
<?php if ($title): ?>
    <?php print $title; ?>
<?php endif; ?>
<?php print render($title_suffix); ?>
<?php if ($header): ?>
    <div class="view-header">
        <?php print $header; ?>
    </div>
<?php endif; ?>

<div class="custom-header">
    <h1 class="wc2018">2018 FIFA World Cup Russia™</h1>
</div>

<div class="row">
    <div class="col-xs-12 mb-30">
        <div class="kopa-tab style7">
            <ul class="nav nav-tabs">
                <li class="active"><a href="#e-tab1" data-toggle="tab">Classement</a></li>
                <li><a href="#e-tab2" data-toggle="tab">Rencontre</a></li>
            </ul>
            <div class="tab-content">
                <div class="tab-pane active" id="e-tab1">
                    <?php include_once('includes/partials/_wc2018_full_standings.php'); ?>
                </div>
                <div class="tab-pane" id="e-tab2">
                    <?php include_once('includes/partials/_wc2018_fixtures.php'); ?>
                </div>
            </div>
        </div>

    </div>
</div>
<?php if ($rows): ?>
    <div class="view-content">
        <div class="widget kopa-article-list-widget article-list-1">
            <h3 class="widget-title style12">A La Une<span class="ttg"></span></h3>
            <ul class="clearfix">
                <?php foreach($results as $result): ?>
                    <?php
                    $article = node_load($result->nid);
                    $thumbnail_uri = $article->field_image[LANGUAGE_NONE][0]['uri'];
                    $image = '';


                    if($thumbnail_uri){
                        $variable = array(
                            'style_name' => 'content_carrousel_thumb',
                            'path' => $thumbnail_uri,
                            'width' => '',
                            'height' => '',
                        );

                        $image = theme_image_style($variable);
                    }
                    ?>
                <li>
                    <article class="entry-item">
                        <div class="entry-thumb">
                            <a href="<?php echo drupal_get_path_alias("node/".$article->nid); ?>">
                                <?php echo ! empty($image) ? $image : ''; ?>
                            </a>
                        </div>
                        <div class="entry-content">
                            <div class="content-top">
                                <h4 class="entry-title">
                                    <a itemprop="name" href="<?php echo drupal_get_path_alias("node/".$article->nid); ?>">
                                        <?php echo $article->title; ?>
                                    </a>
                                </h4>
                            </div>
                            <?php echo footmali_trim_paragraph($article->body[LANGUAGE_NONE][0]['value'],  140) . '...'; ?>
                        </div>
                    </article>
                </li>
            <?php endforeach ?>
            </ul>
        </div>
        <!-- widget -->
    </div>
<?php endif; ?>
</div>
