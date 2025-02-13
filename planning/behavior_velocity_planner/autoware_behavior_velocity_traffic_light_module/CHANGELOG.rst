^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
Changelog for package autoware_behavior_velocity_traffic_light_module
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

0.38.0 (2024-11-08)
-------------------
* unify package.xml version to 0.37.0
* test(traffic_light): write test for utils (`#9046 <https://github.com/youtalk/autoware.universe/issues/9046>`_)
  * refactor: separate utils file
  * refactor: utils function output
  * test: write test for utils
  * chore: add doxygen
  ---------
* fix(behavior_velocity_traffic_light): make dilemma_zone_plotter.py executable (`#8684 <https://github.com/youtalk/autoware.universe/issues/8684>`_)
* feat(traffic_light): add dilemma_zone_plotter.py (`#8638 <https://github.com/youtalk/autoware.universe/issues/8638>`_)
  * feat(traffic_light): add dilemma_zone_plotter.py
  * fix typo
  * fix typo
  ---------
* fix(behavior_velocity_planner): fix cppcheck warnings of virtualCallInConstructor (`#8376 <https://github.com/youtalk/autoware.universe/issues/8376>`_)
  Co-authored-by: Ryuta Kambe <ryuta.kambe@tier4.jp>
* fix(autoware_behavior_velocity_traffic_light_module): fix uninitMemberVar (`#8317 <https://github.com/youtalk/autoware.universe/issues/8317>`_)
  fix:funinitMemberVar
* feat: add `autoware\_` prefix to `lanelet2_extension` (`#7640 <https://github.com/youtalk/autoware.universe/issues/7640>`_)
* refactor(universe_utils/motion_utils)!: add autoware namespace (`#7594 <https://github.com/youtalk/autoware.universe/issues/7594>`_)
* refactor(motion_utils)!: add autoware prefix and include dir (`#7539 <https://github.com/youtalk/autoware.universe/issues/7539>`_)
  refactor(motion_utils): add autoware prefix and include dir
* feat(autoware_universe_utils)!: rename from tier4_autoware_utils (`#7538 <https://github.com/youtalk/autoware.universe/issues/7538>`_)
  Co-authored-by: kosuke55 <kosuke.tnp@gmail.com>
* chore(behavior_velocity_planner): move packages (`#7526 <https://github.com/youtalk/autoware.universe/issues/7526>`_)
* Contributors: Fumiya Watanabe, Kosuke Takeuchi, Satoshi OTA, Takayuki Murooka, Yutaka Kondo, kobayu858, taisa1

0.26.0 (2024-04-03)
-------------------
