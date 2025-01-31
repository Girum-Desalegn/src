# CMake generated Testfile for 
# Source directory: /root/ros2_ws/src/ros2_planning_system/plansys2_tests/test_3
# Build directory: /root/ros2_ws/src/build/plansys2_tests/test_3
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_3 "/usr/bin/python3" "-u" "/opt/ros/foxy/share/ament_cmake_test/cmake/run_test.py" "/root/ros2_ws/src/build/plansys2_tests/test_results/plansys2_tests/test_3.gtest.xml" "--package-name" "plansys2_tests" "--output-file" "/root/ros2_ws/src/build/plansys2_tests/ament_cmake_gtest/test_3.txt" "--command" "/root/ros2_ws/src/build/plansys2_tests/test_3/test_3" "--gtest_output=xml:/root/ros2_ws/src/build/plansys2_tests/test_results/plansys2_tests/test_3.gtest.xml")
set_tests_properties(test_3 PROPERTIES  LABELS "gtest" REQUIRED_FILES "/root/ros2_ws/src/build/plansys2_tests/test_3/test_3" TIMEOUT "300" WORKING_DIRECTORY "/root/ros2_ws/src/build/plansys2_tests/test_3" _BACKTRACE_TRIPLES "/opt/ros/foxy/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/ros/foxy/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/foxy/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/root/ros2_ws/src/ros2_planning_system/plansys2_tests/test_3/CMakeLists.txt;5;ament_add_gtest;/root/ros2_ws/src/ros2_planning_system/plansys2_tests/test_3/CMakeLists.txt;0;")
