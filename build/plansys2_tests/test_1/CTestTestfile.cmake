# CMake generated Testfile for 
# Source directory: /root/ros2_ws/src/ros2_planning_system/plansys2_tests/test_1
# Build directory: /root/ros2_ws/src/build/plansys2_tests/test_1
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_1 "/usr/bin/python3" "-u" "/opt/ros/foxy/share/ament_cmake_test/cmake/run_test.py" "/root/ros2_ws/src/build/plansys2_tests/test_results/plansys2_tests/test_1.gtest.xml" "--package-name" "plansys2_tests" "--output-file" "/root/ros2_ws/src/build/plansys2_tests/ament_cmake_gtest/test_1.txt" "--command" "/root/ros2_ws/src/build/plansys2_tests/test_1/test_1" "--gtest_output=xml:/root/ros2_ws/src/build/plansys2_tests/test_results/plansys2_tests/test_1.gtest.xml")
set_tests_properties(test_1 PROPERTIES  LABELS "gtest" REQUIRED_FILES "/root/ros2_ws/src/build/plansys2_tests/test_1/test_1" TIMEOUT "60" WORKING_DIRECTORY "/root/ros2_ws/src/build/plansys2_tests/test_1" _BACKTRACE_TRIPLES "/opt/ros/foxy/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/ros/foxy/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/foxy/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/root/ros2_ws/src/ros2_planning_system/plansys2_tests/test_1/CMakeLists.txt;5;ament_add_gtest;/root/ros2_ws/src/ros2_planning_system/plansys2_tests/test_1/CMakeLists.txt;0;")
subdirs("../gtest")
