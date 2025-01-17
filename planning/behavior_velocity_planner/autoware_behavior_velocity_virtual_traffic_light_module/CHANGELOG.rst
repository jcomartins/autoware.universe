^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
Changelog for package autoware_behavior_velocity_virtual_traffic_light_module
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

0.38.0 (2024-11-08)
-------------------
* unify package.xml version to 0.37.0
* test(virtual_traffic_light): add unit tests for utils (`#9107 <https://github.com/youtalk/autoware.universe/issues/9107>`_)
* chore(virtual_traffic_light): add soblin to maintainer (`#9147 <https://github.com/youtalk/autoware.universe/issues/9147>`_)
* refactor(virtual_traffic_light): move to utils for unit test (`#9106 <https://github.com/youtalk/autoware.universe/issues/9106>`_)
* fix(autoware_behavior_velocity_virtual_traffic_light_module): fix unusedFunction (`#8670 <https://github.com/youtalk/autoware.universe/issues/8670>`_)
  fix:unusedFunction
* fix(behavior_velocity_planner): fix cppcheck warnings of virtualCallInConstructor (`#8376 <https://github.com/youtalk/autoware.universe/issues/8376>`_)
  Co-authored-by: Ryuta Kambe <ryuta.kambe@tier4.jp>
* fix(autoware_behavior_velocity_virtual_traffic_light_module): fix unusedStructMember (`#8394 <https://github.com/youtalk/autoware.universe/issues/8394>`_)
  fix:unusedStructMember
* fix(behavior_path_planner, behavior_velocity_planner): fix redefinition errors (`#7688 <https://github.com/youtalk/autoware.universe/issues/7688>`_)
* feat: add `autoware\_` prefix to `lanelet2_extension` (`#7640 <https://github.com/youtalk/autoware.universe/issues/7640>`_)
* fix(autoware_behavior_velocity_planner_common): remove lane_id check from arc_lane_util (`#7710 <https://github.com/youtalk/autoware.universe/issues/7710>`_)
  * fix(arc_lane_util): remove lane_id check from arc_lane_util
  * modify test_arc_lane_util.cpp
  ---------
* refactor(universe_utils/motion_utils)!: add autoware namespace (`#7594 <https://github.com/youtalk/autoware.universe/issues/7594>`_)
* refactor(motion_utils)!: add autoware prefix and include dir (`#7539 <https://github.com/youtalk/autoware.universe/issues/7539>`_)
  refactor(motion_utils): add autoware prefix and include dir
* feat(autoware_universe_utils)!: rename from tier4_autoware_utils (`#7538 <https://github.com/youtalk/autoware.universe/issues/7538>`_)
  Co-authored-by: kosuke55 <kosuke.tnp@gmail.com>
* chore(behavior_velocity_planner): move packages (`#7526 <https://github.com/youtalk/autoware.universe/issues/7526>`_)
* Contributors: Fumiya Watanabe, Kosuke Takeuchi, Ryuta Kambe, Takayuki Murooka, Yukinari Hisaki, Yutaka Kondo, kobayu858, taisa1

0.26.0 (2024-04-03)
-------------------
