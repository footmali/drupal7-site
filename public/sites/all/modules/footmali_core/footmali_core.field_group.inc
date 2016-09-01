<?php
/**
 * @file
 * footmali_core.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function footmali_core_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_competition|node|fixture|form';
  $field_group->group_name = 'group_competition';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fixture';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Compétition',
    'weight' => '1',
    'children' => array(
      0 => 'field_season',
      1 => 'field_competition',
      2 => 'field_competition_round',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-competition field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_competition|node|fixture|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_match_status|node|fixture|form';
  $field_group->group_name = 'group_match_status';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fixture';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Statut',
    'weight' => '3',
    'children' => array(
      0 => 'field_match_played',
      1 => 'field_date_time',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-match-status field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_match_status|node|fixture|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_teams_scores|node|fixture|form';
  $field_group->group_name = 'group_teams_scores';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'fixture';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Équipes & Scores',
    'weight' => '2',
    'children' => array(
      0 => 'field_home_team',
      1 => 'field_away_team',
      2 => 'field_home_team_score',
      3 => 'field_away_team_score',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-teams-scores field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_teams_scores|node|fixture|form'] = $field_group;

  return $export;
}
