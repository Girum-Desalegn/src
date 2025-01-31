# CMake generated Testfile for 
# Source directory: /root/ros2_ws/src/ros2_planning_system/plansys2_planner/test/unit
# Build directory: /root/ros2_ws/src/build/plansys2_planner/test/unit
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(planner_test "/usr/bin/python3" "-u" "/opt/ros/foxy/share/ament_cmake_test/cmake/run_test.py" "/root/ros2_ws/src/build/plansys2_planner/test_results/plansys2_planner/planner_test.gtest.xml" "--package-name" "plansys2_planner" "--output-file" "/root/ros2_ws/src/build/plansys2_planner/ament_cmake_gtest/planner_test.txt" "--command" "/root/ros2_ws/src/build/plansys2_planner/test/unit/planner_test" "--gtest_output=xml:/root/ros2_ws/src/build/plansys2_planner/test_results/plansys2_planner/planner_test.gtest.xml")
set_tests_properties(planner_test PROPERTIES  LABELS "gtest" REQUIRED_FILES "/root/ros2_ws/src/build/plansys2_planner/test/unit/planner_test" TIMEOUT "60" WORKING_DIRECTORY "/root/ros2_ws/src/build/plansys2_planner/test/unit" _BACKTRACE_TRIPLES "/opt/ros/foxy/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/ros/foxy/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/foxy/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/root/ros2_ws/src/ros2_planning_system/plansys2_planner/test/unit/CMakeLists.txt;1;ament_add_gtest;/root/ros2_ws/src/ros2_planning_system/plansys2_planner/test/unit/CMakeLists.txt;0;")
subdirs("../../gtest")
