<?php
/**
 * @file
 * drupal_resume_professional_training_section.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function drupal_resume_professional_training_section_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'body'
  $field_bases['body'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'node',
    ),
    'field_name' => 'body',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'views_base_columns' => array(
        'bundle' => 'bundle',
        'entity_id' => 'entity_id',
        'entity_type' => 'entity_type',
        'format' => 'format',
        'revision_id' => 'revision_id',
        'summary' => 'summary',
        'value' => 'value',
      ),
      'views_base_table' => 1,
    ),
    'translatable' => 0,
    'type' => 'text_with_summary',
  );

  // Exported field_base: 'field_course_end_date'
  $field_bases['field_course_end_date'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_course_end_date',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'date',
    'settings' => array(
      'cache_count' => 3,
      'cache_enabled' => 1,
      'granularity' => array(
        'day' => 0,
        'hour' => 0,
        'minute' => 0,
        'month' => 'month',
        'second' => 0,
        'year' => 'year',
      ),
      'timezone_db' => '',
      'todate' => '',
      'tz_handling' => 'none',
      'views_base_columns' => array(
        'bundle' => 'bundle',
        'entity_type' => 'entity_type',
        'value' => 'value',
      ),
      'views_base_table' => 0,
    ),
    'translatable' => 0,
    'type' => 'datetime',
  );

  // Exported field_base: 'field_course_is_taught_by'
  $field_bases['field_course_is_taught_by'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_course_is_taught_by',
    'foreign keys' => array(
      'nid' => array(
        'columns' => array(
          'nid' => 'nid',
        ),
        'table' => 'node',
      ),
    ),
    'indexes' => array(
      'nid' => array(
        0 => 'nid',
      ),
    ),
    'locked' => 0,
    'module' => 'node_reference',
    'settings' => array(
      'referenceable_types' => array(
        'article' => 0,
        'educational_organization' => 'educational_organization',
        'page' => 0,
        'professional_training' => 0,
        'schemaorg_event' => 0,
        'schemaorg_person' => 0,
      ),
      'view' => array(
        'args' => array(),
        'display_name' => '',
        'view_name' => '',
      ),
      'views_base_columns' => array(
        'bundle' => 'bundle',
        'entity_type' => 'entity_type',
        'nid' => 'nid',
      ),
      'views_base_table' => 1,
    ),
    'translatable' => 0,
    'type' => 'node_reference',
  );

  // Exported field_base: 'field_course_start_date'
  $field_bases['field_course_start_date'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_course_start_date',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'date',
    'settings' => array(
      'cache_count' => 4,
      'cache_enabled' => 0,
      'granularity' => array(
        'day' => 0,
        'hour' => 0,
        'minute' => 0,
        'month' => 'month',
        'second' => 0,
        'year' => 'year',
      ),
      'timezone_db' => '',
      'todate' => '',
      'tz_handling' => 'none',
      'views_base_columns' => array(
        'bundle' => 'bundle',
        'entity_type' => 'entity_type',
        'value' => 'value',
      ),
      'views_base_table' => 0,
    ),
    'translatable' => 0,
    'type' => 'datetime',
  );

  // Exported field_base: 'field_course_title'
  $field_bases['field_course_title'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_course_title',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
      'views_base_columns' => array(
        'bundle' => 'bundle',
        'entity_id' => 'entity_id',
        'entity_type' => 'entity_type',
        'format' => 'format',
        'value' => 'value',
      ),
      'views_base_table' => 1,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_course_url_link'
  $field_bases['field_course_url_link'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_course_url_link',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'views_base_columns' => array(
        'attributes' => 'attributes',
        'bundle' => 'bundle',
        'entity_type' => 'entity_type',
        'title' => 'title',
        'url' => 'url',
      ),
      'views_base_table' => 1,
    ),
    'translatable' => 0,
    'type' => 'link_field',
  );

  // Exported field_base: 'field_is_a_certificate_provided_'
  $field_bases['field_is_a_certificate_provided_'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_is_a_certificate_provided_',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'no',
        1 => 'yes',
      ),
      'allowed_values_function' => '',
      'views_base_columns' => array(
        'bundle' => 'bundle',
        'entity_type' => 'entity_type',
        'value' => 'value',
      ),
      'views_base_table' => 1,
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_your_name'
  $field_bases['field_your_name'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_your_name',
    'foreign keys' => array(),
    'indexes' => array(
      'family' => array(
        0 => 'family',
      ),
      'given' => array(
        0 => 'given',
      ),
    ),
    'locked' => 0,
    'module' => 'name',
    'settings' => array(
      'allow_family_or_given' => 0,
      'autocomplete_separator' => array(
        'credentials' => ', ',
        'family' => ' -',
        'generational' => ' ',
        'given' => ' -',
        'middle' => ' -',
        'title' => ' ',
      ),
      'autocomplete_source' => array(
        'credentials' => array(),
        'family' => array(),
        'generational' => array(
          'generational' => 0,
        ),
        'given' => array(),
        'middle' => array(),
        'title' => array(
          'title' => 'title',
        ),
      ),
      'components' => array(
        'credentials' => 'credentials',
        'family' => 'family',
        'generational' => 'generational',
        'given' => 'given',
        'middle' => 'middle',
        'title' => 'title',
      ),
      'generational_options' => '-- --
Jr.
Sr.
I
II
III
IV
V
VI
VII
VIII
IX
X',
      'labels' => array(
        'credentials' => 'Credentials',
        'family' => 'Family',
        'generational' => 'Generational',
        'given' => 'Given',
        'middle' => 'Middle name(s)',
        'title' => 'Title',
      ),
      'max_length' => array(
        'credentials' => 255,
        'family' => 63,
        'generational' => 15,
        'given' => 63,
        'middle' => 127,
        'title' => 31,
      ),
      'minimum_components' => array(
        'credentials' => 0,
        'family' => 'family',
        'generational' => 0,
        'given' => 'given',
        'middle' => 0,
        'title' => 0,
      ),
      'sort_options' => array(
        'generational' => 0,
        'title' => 'title',
      ),
      'title_options' => '-- --
Mr.
Mrs.
Miss
Ms.
Dr.
Prof.',
      'views_base_columns' => array(
        'credentials' => 'credentials',
        'family' => 'family',
        'generational' => 'generational',
        'given' => 'given',
      ),
      'views_base_table' => 1,
    ),
    'translatable' => 0,
    'type' => 'name',
  );

  return $field_bases;
}
