<?php
$standings = footmali_get_standings(null, 'Éliminatoire de la Coupe du Monde 2018', 'Mondial', false, false);
?>

<div class="widget kopa-team-widget kopa-charts-widget">
    <div class="widget-content">
        <h3 class="widget-title style17">Éliminatoire de la Coupe du Monde 2018: GROUP C</h3>
        <header>
            <div class="t-col width3"><?php echo t('Rang'); ?></div>
            <div class="t-col width2"><?php echo t('Équipe'); ?></div>
            <div class="t-col width3"><?php echo t('Pts'); ?></div>
            <div class="t-col width3 tbl-col"><?php echo t('J.'); ?></div>
            <div class="t-col width3 tbl-col"><?php echo t('G.'); ?></div>
            <div class="t-col width3 tbl-col"><?php echo t('N.'); ?></div>
            <div class="t-col width3 tbl-col"><?php echo t('P.'); ?></div>
            <div class="t-col width3 mb-col" style="text-transform: lowercase;">p.</div>
            <div class="t-col width3 mb-col" style="text-transform: lowercase;">c.</div>
            <div class="t-col width3 mb-col">+/-</div>
        </header>
        <ul class="clearfix">
          <?php $index = 1;
              foreach($standings as $row): ?>
                <?php
                  $team = node_load($row->team);
                  $team_short_name = !empty($team->field_short_name) ? $team->field_short_name[LANGUAGE_NONE][0]['value'] : $team->title;
                ?>
                  <li>
                      <div class="t-col width3"><strong><?php echo $index; ?></strong></div>
                      <div class="t-col width2">
                          <strong><?php echo strlen($team->title) < 18 ? $team->title : $team_short_name; ?></strong>
                      </div>
                      <div class="t-col width3"><strong><?php echo $row->points; ?></strong></div>
                      <div class="t-col width3 tbl-col"><?php echo $row->played; ?></div>
                      <div class="t-col width3 tbl-col"><?php echo $row->wins; ?></div>
                      <div class="t-col width3 tbl-col"><?php echo $row->draws; ?></div>
                      <div class="t-col width3 tbl-col"><?php echo $row->lost; ?></div>
                      <div class="t-col width3 mb-col"><?php echo $row->goalsfor; ?></div>
                      <div class="t-col width3 mb-col"><?php echo $row->goalsagainst; ?></div>
                      <div class="t-col width3 mb-col"><?php echo $row->goal_diff; ?></div>
                  </li>
              <?php $index++; endforeach; ?>
        </ul>
    </div>
</div>
