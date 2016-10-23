<?php
$standings = footmali_get_standings(null, 'Éliminatoire de la Coupe du Monde 2018', 'Mondial', false, false);
?>


<div class="widget-area-11">
    <div class="widget kopa-charts-widget">
        <div class="widget-content">
        <h3 class="widget-title style17">Éliminatoire de la Coupe du Monde 2018: GROUP C</h3>
        <header>
            <div class="t-col"><?php echo t('Pos'); ?></div>
            <div class="t-col width1"><?php echo t('Équipe'); ?></div>
            <div class="t-col"><?php echo t('J.'); ?></div>
            <div class="t-col"><?php echo t('Pts'); ?></div>
        </header>
        <ul class="clearfix">
          <?php $index = 1;
              foreach($standings as $row): ?>
                <?php
                  $team = node_load($row->team);
                  $team_short_name = !empty($team->field_short_name) ? $team->field_short_name[LANGUAGE_NONE][0]['value'] : $team->title;
                ?>
                  <li>
                      <div class="t-col"><strong><?php echo $index; ?></strong></div>
                      <div class="t-col width1">
                          <strong><?php echo strlen($team->title) < 18 ? $team->title : $team_short_name; ?></strong>
                      </div>
                      <div class="t-col"><?php echo $row->played; ?></div>
                      <div class="t-col"><strong><?php echo $row->points; ?></strong></div>
                  </li>
              <?php $index++; endforeach; ?>
        </ul>
        <a class="kopa-view-all" href="/mondial-2018-Russie">Voir tout<span class="fa fa-chevron-right"></span></a>
    </div>
    </div>
</div>
