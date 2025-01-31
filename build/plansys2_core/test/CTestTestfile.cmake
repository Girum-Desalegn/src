# CMake generated Testfile for 
# Source directory: /root/ros2_ws/src/ros2_planning_system/plansys2_core/test
# Build directory: /root/ros2_ws/src/build/plansys2_core/test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(utils_test "/usr/bin/python3" "-u" "/opt/ros/foxy/share/ament_cmake_test/cmake/run_test.py" "/root/ros2_ws/src/build/plansys2_core/test_results/plansys2_core/utils_test.gtest.xml" "--package-name" "plansys2_core" "--output-file" "/root/ros2_ws/src/build/plansys2_core/ament_cmake_gtest/utils_test.txt" "--command" "/root/ros2_ws/src/build/plansys2_core/test/utils_test" "--gtest_output=xml:/root/ros2_ws/src/build/plansys2_core/test_results/plansys2_core/utils_test.gtest.xml")
set_tests_properties(utils_test PROPERTIES  LABELS "gtest" REQUIRED_FILES "/root/ros2_ws/src/build/plansys2_core/test/utils_test" TIMEOUT "60" WORKING_DIRECTORY "/root/ros2_ws/src/build/plansys2_core/test" _BACKTRACE_TRIPLES "/opt/ros/foxy/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/ros/foxy/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/foxy/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/root/ros2_ws/src/ros2_planning_system/plansys2_core/test/CMakeLists.txt;1;ament_add_gtest;/root/ros2_ws/src/ros2_planning_system/plansys2_core/test/CMakeLists.txt;0;")
subdirs("../gtest")
