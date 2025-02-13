^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
Changelog for package predicted_path_checker
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

0.38.0 (2024-11-08)
-------------------
* unify package.xml version to 0.37.0
* refactor(component_interface_specs): prefix package and namespace with autoware (`#9094 <https://github.com/youtalk/autoware.universe/issues/9094>`_)
* refactor(autoware_interpolation): prefix package and namespace with autoware (`#8088 <https://github.com/youtalk/autoware.universe/issues/8088>`_)
  Co-authored-by: kosuke55 <kosuke.tnp@gmail.com>
* fix(predicted_path_checker): fix constParameterReference  (`#8038 <https://github.com/youtalk/autoware.universe/issues/8038>`_)
  fix:constParameterReference
* refactor(universe_utils/motion_utils)!: add autoware namespace (`#7594 <https://github.com/youtalk/autoware.universe/issues/7594>`_)
* refactor(motion_utils)!: add autoware prefix and include dir (`#7539 <https://github.com/youtalk/autoware.universe/issues/7539>`_)
  refactor(motion_utils): add autoware prefix and include dir
* feat(autoware_universe_utils)!: rename from tier4_autoware_utils (`#7538 <https://github.com/youtalk/autoware.universe/issues/7538>`_)
  Co-authored-by: kosuke55 <kosuke.tnp@gmail.com>
* refactor(vehicle_info_utils)!: prefix package and namespace with autoware (`#7353 <https://github.com/youtalk/autoware.universe/issues/7353>`_)
  * chore(autoware_vehicle_info_utils): rename header
  * chore(bpp-common): vehicle info
  * chore(path_optimizer): vehicle info
  * chore(velocity_smoother): vehicle info
  * chore(bvp-common): vehicle info
  * chore(static_centerline_generator): vehicle info
  * chore(obstacle_cruise_planner): vehicle info
  * chore(obstacle_velocity_limiter): vehicle info
  * chore(mission_planner): vehicle info
  * chore(obstacle_stop_planner): vehicle info
  * chore(planning_validator): vehicle info
  * chore(surround_obstacle_checker): vehicle info
  * chore(goal_planner): vehicle info
  * chore(start_planner): vehicle info
  * chore(control_performance_analysis): vehicle info
  * chore(lane_departure_checker): vehicle info
  * chore(predicted_path_checker): vehicle info
  * chore(vehicle_cmd_gate): vehicle info
  * chore(obstacle_collision_checker): vehicle info
  * chore(operation_mode_transition_manager): vehicle info
  * chore(mpc): vehicle info
  * chore(control): vehicle info
  * chore(common): vehicle info
  * chore(perception): vehicle info
  * chore(evaluator): vehicle info
  * chore(freespace): vehicle info
  * chore(planning): vehicle info
  * chore(vehicle): vehicle info
  * chore(simulator): vehicle info
  * chore(launch): vehicle info
  * chore(system): vehicle info
  * chore(sensing): vehicle info
  * fix(autoware_joy_controller): remove unused deps
  ---------
* feat!: replace autoware_auto_msgs with autoware_msgs for control modules (`#7240 <https://github.com/youtalk/autoware.universe/issues/7240>`_)
  Co-authored-by: Cynthia Liu <cynthia.liu@autocore.ai>
  Co-authored-by: NorahXiong <norah.xiong@autocore.ai>
  Co-authored-by: beginningfan <beginning.fan@autocore.ai>
* Contributors: Esteve Fernandez, Kosuke Takeuchi, Ryohsuke Mitsudome, Satoshi OTA, Takayuki Murooka, Yutaka Kondo, kobayu858

0.26.0 (2024-04-03)
-------------------
* fix(predicted_path_checker): check if trajectory size (`#6730 <https://github.com/youtalk/autoware.universe/issues/6730>`_)
  check trajectory size
  Co-authored-by: beyza <bnk@leodrive.ai>
* refactor(motion_utils): change directory name of tmp_conversion (`#5908 <https://github.com/youtalk/autoware.universe/issues/5908>`_)
  * change .hpp name
  * change .cpp name
  * correct the #inlcude and #ifndef
  * change the CMakeLists.txt
  * correct the dependencies referring to tmp_conversion
  * style(pre-commit): autofix
  * change all the tmp_conversion to conversion in all the autoware.universe
  * style(pre-commit): autofix
  ---------
  Co-authored-by: pre-commit-ci[bot] <66853113+pre-commit-ci[bot]@users.noreply.github.com>
* feat(predicted_path_checker): check predicted trajectory to avoid collisions planning can not handle (`#2528 <https://github.com/youtalk/autoware.universe/issues/2528>`_)
  * feat(predicted_path_checker): check predicted trajectory to avoid collisions planning can not handle (`#2528 <https://github.com/youtalk/autoware.universe/issues/2528>`_)
  * Added pkg to control.launch.py
  ---------
* Contributors: Berkay Karaman, Zhe Shen, beyzanurkaya
