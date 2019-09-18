<?php

/**
 * @file
 * Default theme implementation to display a node.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: An array of node items. Use render($content) to print them all,
 *   or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $user_picture: The node author's picture from user-picture.tpl.php.
 * - $date: Formatted creation date. Preprocess functions can reformat it by
 *   calling format_date() with the desired parameters on the $created variable.
 * - $name: Themed username of node author output from theme_username().
 * - $node_url: Direct URL of the current node.
 * - $display_submitted: Whether submission information should be displayed.
 * - $submitted: Submission information created from $name and $date during
 *   template_preprocess_node().
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - node: The current template type; for example, "theming hook".
 *   - node-[type]: The current node type. For example, if the node is a
 *     "Blog entry" it would result in "node-blog". Note that the machine
 *     name will often be in a short form of the human readable label.
 *   - node-teaser: Nodes in teaser form.
 *   - node-preview: Nodes in preview mode.
 *   The following are controlled through the node publishing options.
 *   - node-promoted: Nodes promoted to the front page.
 *   - node-sticky: Nodes ordered above other non-sticky nodes in teaser
 *     listings.
 *   - node-unpublished: Unpublished nodes visible only to administrators.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type; for example, story, page, blog, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 *
 * Node status variables:
 * - $view_mode: View mode; for example, "full", "teaser".
 * - $teaser: Flag for the teaser state (shortcut for $view_mode == 'teaser').
 * - $page: Flag for the full page state.
 * - $promote: Flag for front page promotion state.
 * - $sticky: Flags for sticky post setting.
 * - $status: Flag for published status.
 * - $comment: State of comment settings for the node.
 * - $readmore: Flags true if the teaser content of the node cannot hold the
 *   main body content.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * Field variables: for each field instance attached to the node a corresponding
 * variable is defined; for example, $node->body becomes $body. When needing to
 * access a field's raw values, developers/themers are strongly encouraged to
 * use these variables. Otherwise they will have to explicitly specify the
 * desired field language; for example, $node->body['en'], thus overriding any
 * language negotiation rule that was previously applied.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 *
 * @ingroup themeable
 */
?>

<?php if($page): ?>
    <div class="node">
        <article id="article">
            <div class="article-image">
                <?php echo footmali_output_image('article_page', $node->field_image); ?>
            </div>
            
            <div class="article-body">
                <div class="article-meta">
                    <span class="article-author"><?php echo footmali_get_article_author($node); ?></a></span>
                    <span class="article-date"><?php setlocale(LC_TIME, 'fr_FR'); echo strftime('%d %B %Y', $node->created); ?></span>
                </div>
                <?php echo footmali_render_share_small($nid, $title); ?>
                <?php print render($content['body']); ?>
                <?php $top_related_articles_block = module_invoke('views', 'block_view', 'news-top_related_articles'); ?>
                <div class="top-related-articles">
                    <h3>Lire Aussi</h3>
                    <?php print render($top_related_articles_block['content']); ?>
                </div>
            </div>
            <div class="ads">
                <span class="heading">publicité</span>
                <div id="between_article_text_1">
                    <!-- between_article_text_1 -->
                    <ins class="adsbygoogle"
                        style="display:block; text-align:center;"
                        data-ad-layout="in-article"
                        data-ad-format="fluid"
                        data-ad-client="ca-pub-1792676367399829"
                        data-ad-slot="1579742613"></ins>
                    <script>
                        (adsbygoogle = window.adsbygoogle || []).push({});
                    </script>
                </div>
            </div>
            <div class="ads">
                <span class="heading">publicité</span>
                <div id="between_article_text_2">
                    <!-- between_article_text_2 -->
                    <ins class="adsbygoogle"
                        style="display:block; text-align:center;"
                        data-ad-layout="in-article"
                        data-ad-format="fluid"
                        data-ad-client="ca-pub-1792676367399829"
                        data-ad-slot="1787626173"></ins>
                    <script>
                        (adsbygoogle = window.adsbygoogle || []).push({});
                    </script>
                </div>
            </div>

            <!-- <div class="click-feed">
                <h3>Vous Aimerez Aussi</h3>
                <div class="ads">
                    <span class="heading">publicité</span>
                </div>
            </div> -->
        </article>
    </div>
<?php endif; ?>

<?php if($teaser): ?>
    <article class="article">
        <div class="article-image">
            <a href="/<?php echo drupal_get_path_alias('node/' . $node->nid); ?>">
                <?php echo footmali_output_image('large', $node->field_image); ?>
            </a>
        </div>
        <div class="article-body">
            <div class="content-top">
                <h4 class="entry-title"><a href="/<?php echo drupal_get_path_alias('node/' . $node->nid); ?>"><?php echo $title; ?></a></h4>
                <div class="summary">
                    <p><?php echo footmali_trim_paragraph($body[0]['value'], 150) . '...'; ?></p>
                </div>
            </div>
        </div>
        <?php echo footmali_render_share_small($nid, $title); ?>
    </article>
<?php endif; ?>
