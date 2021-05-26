<?php

/**
 * Implements hook_drush_command().
 */
function drush_qa_drush_command() {
  $commands['sleep'] = [
    'description' => 'Sleep for the specified interval in seconds. ',
    'aliases' => ['slp'],
    'arguments' => [
      'seconds' => 'Seconds',
    ],
    'examples' => [
      'drush sleep' => 'Sleep for 60 seconds (default value).',
      'drush sleep 10' => 'Sleep for 10 seconds.',
    ],
  ];

  return $commands;
}

/**
 * Drush "sleep" command implementation.
 *
 * @param int $seconds
 */
function drush_drush_qa_sleep($seconds = 60) {
  sleep($seconds);

  drush_print(dt('Wake up, Neo... You slept for @seconds seconds.',
    ['@seconds' => $seconds]));
}
