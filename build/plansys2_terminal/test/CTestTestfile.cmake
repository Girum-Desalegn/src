# CMake generated Testfile for 
# Source directory: /root/ros2_ws/src/ros2_planning_system/plansys2_terminal/test
# Build directory: /root/ros2_ws/src/build/plansys2_terminal/test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(terminal_test "/usr/bin/python3" "-u" "/opt/ros/foxy/share/ament_cmake_test/cmake/run_test.py" "/root/ros2_ws/src/build/plansys2_terminal/test_results/plansys2_terminal/terminal_test.gtest.xml" "--package-name" "plansys2_terminal" "--output-file" "/root/ros2_ws/src/build/plansys2_terminal/ament_cmake_gtest/terminal_test.txt" "--command" "/root/ros2_ws/src/build/plansys2_terminal/test/terminal_test" "--gtest_output=xml:/root/ros2_ws/src/build/plansys2_terminal/test_results/plansys2_terminal/terminal_test.gtest.xml")
set_tests_properties(terminal_test PROPERTIES  LABELS "gtest" REQUIRED_FILES "/root/ros2_ws/src/build/plansys2_terminal/test/terminal_test" TIMEOUT "60" WORKING_DIRECTORY "/root/ros2_ws/src/build/plansys2_terminal/test" _BACKTRACE_TRIPLES "/opt/ros/foxy/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/ros/foxy/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/foxy/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/root/ros2_ws/src/ros2_planning_system/plansys2_terminal/test/CMakeLists.txt;1;ament_add_gtest;/root/ros2_ws/src/ros2_planning_system/plansys2_terminal/test/CMakeLists.txt;0;")
subdirs("../gtest")
