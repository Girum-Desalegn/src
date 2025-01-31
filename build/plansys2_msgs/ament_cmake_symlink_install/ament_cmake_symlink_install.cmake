# generated from
# ament_cmake_core/cmake/symlink_install/ament_cmake_symlink_install.cmake.in

# create empty symlink install manifest before starting install step
file(WRITE "${CMAKE_CURRENT_BINARY_DIR}/symlink_install_manifest.txt")

#
# Reimplement CMake install(DIRECTORY) command to use symlinks instead of
# copying resources.
#
# :param cmake_current_source_dir: The CMAKE_CURRENT_SOURCE_DIR when install
#   was invoked
# :type cmake_current_source_dir: string
# :param ARGN: the same arguments as the CMake install command.
# :type ARGN: various
#
function(ament_cmake_symlink_install_directory cmake_current_source_dir)
  cmake_parse_arguments(ARG "OPTIONAL" "DESTINATION" "DIRECTORY;PATTERN;PATTERN_EXCLUDE" ${ARGN})
  if(ARG_UNPARSED_ARGUMENTS)
    message(FATAL_ERROR "ament_cmake_symlink_install_directory() called with "
      "unused/unsupported arguments: ${ARG_UNPARSED_ARGUMENTS}")
  endif()

  # make destination absolute path and ensure that it exists
  if(NOT IS_ABSOLUTE "${ARG_DESTINATION}")
    set(ARG_DESTINATION "/root/ros2_ws/src/install/plansys2_msgs/${ARG_DESTINATION}")
  endif()
  if(NOT EXISTS "${ARG_DESTINATION}")
    file(MAKE_DIRECTORY "${ARG_DESTINATION}")
  endif()

  # default pattern to include
  if(NOT ARG_PATTERN)
    set(ARG_PATTERN "*")
  endif()

  # iterate over directories
  foreach(dir ${ARG_DIRECTORY})
    # make dir an absolute path
    if(NOT IS_ABSOLUTE "${dir}")
      set(dir "${cmake_current_source_dir}/${dir}")
    endif()

    if(EXISTS "${dir}")
      # if directory has no trailing slash
      # append folder name to destination
      set(destination "${ARG_DESTINATION}")
      string(LENGTH "${dir}" length)
      math(EXPR offset "${length} - 1")
      string(SUBSTRING "${dir}" ${offset} 1 dir_last_char)
      if(NOT dir_last_char STREQUAL "/")
        get_filename_component(destination_name "${dir}" NAME)
        set(destination "${destination}/${destination_name}")
      else()
        # remove trailing slash
        string(SUBSTRING "${dir}" 0 ${offset} dir)
      endif()

      # glob recursive files
      set(relative_files "")
      foreach(pattern ${ARG_PATTERN})
        file(
          GLOB_RECURSE
          include_files
          RELATIVE "${dir}"
          "${dir}/${pattern}"
        )
        if(NOT include_files STREQUAL "")
          list(APPEND relative_files ${include_files})
        endif()
      endforeach()
      foreach(pattern ${ARG_PATTERN_EXCLUDE})
        file(
          GLOB_RECURSE
          exclude_files
          RELATIVE "${dir}"
          "${dir}/${pattern}"
        )
        if(NOT exclude_files STREQUAL "")
          list(REMOVE_ITEM relative_files ${exclude_files})
        endif()
      endforeach()
      list(SORT relative_files)

      foreach(relative_file ${relative_files})
        set(absolute_file "${dir}/${relative_file}")
        # determine link name for file including destination path
        set(symlink "${destination}/${relative_file}")

        # ensure that destination exists
        get_filename_component(symlink_dir "${symlink}" PATH)
        if(NOT EXISTS "${symlink_dir}")
          file(MAKE_DIRECTORY "${symlink_dir}")
        endif()

        _ament_cmake_symlink_install_create_symlink("${absolute_file}" "${symlink}")
      endforeach()
    else()
      if(NOT ARG_OPTIONAL)
        message(FATAL_ERROR
          "ament_cmake_symlink_install_directory() can't find '${dir}'")
      endif()
    endif()
  endforeach()
endfunction()

#
# Reimplement CMake install(FILES) command to use symlinks instead of copying
# resources.
#
# :param cmake_current_source_dir: The CMAKE_CURRENT_SOURCE_DIR when install
#   was invoked
# :type cmake_current_source_dir: string
# :param ARGN: the same arguments as the CMake install command.
# :type ARGN: various
#
function(ament_cmake_symlink_install_files cmake_current_source_dir)
  cmake_parse_arguments(ARG "OPTIONAL" "DESTINATION;RENAME" "FILES" ${ARGN})
  if(ARG_UNPARSED_ARGUMENTS)
    message(FATAL_ERROR "ament_cmake_symlink_install_files() called with "
      "unused/unsupported arguments: ${ARG_UNPARSED_ARGUMENTS}")
  endif()

  # make destination an absolute path and ensure that it exists
  if(NOT IS_ABSOLUTE "${ARG_DESTINATION}")
    set(ARG_DESTINATION "/root/ros2_ws/src/install/plansys2_msgs/${ARG_DESTINATION}")
  endif()
  if(NOT EXISTS "${ARG_DESTINATION}")
    file(MAKE_DIRECTORY "${ARG_DESTINATION}")
  endif()

  if(ARG_RENAME)
    list(LENGTH ARG_FILES file_count)
    if(NOT file_count EQUAL 1)
    message(FATAL_ERROR "ament_cmake_symlink_install_files() called with "
      "RENAME argument but not with a single file")
    endif()
  endif()

  # iterate over files
  foreach(file ${ARG_FILES})
    # make file an absolute path
    if(NOT IS_ABSOLUTE "${file}")
      set(file "${cmake_current_source_dir}/${file}")
    endif()

    if(EXISTS "${file}")
      # determine link name for file including destination path
      get_filename_component(filename "${file}" NAME)
      if(NOT ARG_RENAME)
        set(symlink "${ARG_DESTINATION}/${filename}")
      else()
        set(symlink "${ARG_DESTINATION}/${ARG_RENAME}")
      endif()
      _ament_cmake_symlink_install_create_symlink("${file}" "${symlink}")
    else()
      if(NOT ARG_OPTIONAL)
        message(FATAL_ERROR
          "ament_cmake_symlink_install_files() can't find '${file}'")
      endif()
    endif()
  endforeach()
endfunction()

#
# Reimplement CMake install(PROGRAMS) command to use symlinks instead of copying
# resources.
#
# :param cmake_current_source_dir: The CMAKE_CURRENT_SOURCE_DIR when install
#   was invoked
# :type cmake_current_source_dir: string
# :param ARGN: the same arguments as the CMake install command.
# :type ARGN: various
#
function(ament_cmake_symlink_install_programs cmake_current_source_dir)
  cmake_parse_arguments(ARG "OPTIONAL" "DESTINATION" "PROGRAMS" ${ARGN})
  if(ARG_UNPARSED_ARGUMENTS)
    message(FATAL_ERROR "ament_cmake_symlink_install_programs() called with "
      "unused/unsupported arguments: ${ARG_UNPARSED_ARGUMENTS}")
  endif()

  # make destination an absolute path and ensure that it exists
  if(NOT IS_ABSOLUTE "${ARG_DESTINATION}")
    set(ARG_DESTINATION "/root/ros2_ws/src/install/plansys2_msgs/${ARG_DESTINATION}")
  endif()
  if(NOT EXISTS "${ARG_DESTINATION}")
    file(MAKE_DIRECTORY "${ARG_DESTINATION}")
  endif()

  # iterate over programs
  foreach(file ${ARG_PROGRAMS})
    # make file an absolute path
    if(NOT IS_ABSOLUTE "${file}")
      set(file "${cmake_current_source_dir}/${file}")
    endif()

    if(EXISTS "${file}")
      # determine link name for file including destination path
      get_filename_component(filename "${file}" NAME)
      set(symlink "${ARG_DESTINATION}/${filename}")
      _ament_cmake_symlink_install_create_symlink("${file}" "${symlink}")
    else()
      if(NOT ARG_OPTIONAL)
        message(FATAL_ERROR
          "ament_cmake_symlink_install_programs() can't find '${file}'")
      endif()
    endif()
  endforeach()
endfunction()

#
# Reimplement CMake install(TARGETS) command to use symlinks instead of copying
# resources.
#
# :param TARGET_FILES: the absolute files, replacing the name of targets passed
#   in as TARGETS
# :type TARGET_FILES: list of files
# :param ARGN: the same arguments as the CMake install command except that
#   keywords identifying the kind of type and the DESTINATION keyword must be
#   joined with an underscore, e.g. ARCHIVE_DESTINATION.
# :type ARGN: various
#
function(ament_cmake_symlink_install_targets)
  cmake_parse_arguments(ARG "OPTIONAL" "ARCHIVE_DESTINATION;DESTINATION;LIBRARY_DESTINATION;RUNTIME_DESTINATION"
    "TARGETS;TARGET_FILES" ${ARGN})
  if(ARG_UNPARSED_ARGUMENTS)
    message(FATAL_ERROR "ament_cmake_symlink_install_targets() called with "
      "unused/unsupported arguments: ${ARG_UNPARSED_ARGUMENTS}")
  endif()

  # iterate over target files
  foreach(file ${ARG_TARGET_FILES})
    if(NOT IS_ABSOLUTE "${file}")
      message(FATAL_ERROR "ament_cmake_symlink_install_targets() target file "
        "'${file}' must be an absolute path")
    endif()

    # determine destination of file based on extension
    set(destination "")
    get_filename_component(fileext "${file}" EXT)
    if(fileext STREQUAL ".a" OR fileext STREQUAL ".lib")
      set(destination "${ARG_ARCHIVE_DESTINATION}")
    elseif(fileext STREQUAL ".dylib" OR fileext MATCHES "\\.so(\\.[0-9]+)?(\\.[0-9]+)?(\\.[0-9]+)?$")
      set(destination "${ARG_LIBRARY_DESTINATION}")
    elseif(fileext STREQUAL "" OR fileext STREQUAL ".dll" OR fileext STREQUAL ".exe")
      set(destination "${ARG_RUNTIME_DESTINATION}")
    endif()
    if(destination STREQUAL "")
      set(destination "${ARG_DESTINATION}")
    endif()

    # make destination an absolute path and ensure that it exists
    if(NOT IS_ABSOLUTE "${destination}")
      set(destination "/root/ros2_ws/src/install/plansys2_msgs/${destination}")
    endif()
    if(NOT EXISTS "${destination}")
      file(MAKE_DIRECTORY "${destination}")
    endif()

    if(EXISTS "${file}")
      # determine link name for file including destination path
      get_filename_component(filename "${file}" NAME)
      set(symlink "${destination}/${filename}")
      _ament_cmake_symlink_install_create_symlink("${file}" "${symlink}")
    else()
      if(NOT ARG_OPTIONAL)
        message(FATAL_ERROR
          "ament_cmake_symlink_install_targets() can't find '${file}'")
      endif()
    endif()
  endforeach()
endfunction()

function(_ament_cmake_symlink_install_create_symlink absolute_file symlink)
  # register symlink for being removed during install step
  file(APPEND "${CMAKE_CURRENT_BINARY_DIR}/symlink_install_manifest.txt"
    "${symlink}\n")

  # avoid any work if correct symlink is already in place
  if(EXISTS "${symlink}" AND IS_SYMLINK "${symlink}")
    get_filename_component(destination "${symlink}" REALPATH)
    get_filename_component(real_absolute_file "${absolute_file}" REALPATH)
    if(destination STREQUAL real_absolute_file)
      message(STATUS "Up-to-date symlink: ${symlink}")
      return()
    endif()
  endif()

  message(STATUS "Symlinking: ${symlink}")
  if(EXISTS "${symlink}" OR IS_SYMLINK "${symlink}")
    file(REMOVE "${symlink}")
  endif()

  execute_process(
    COMMAND "/usr/bin/cmake" "-E" "create_symlink"
      "${absolute_file}"
      "${symlink}"
  )
  # the CMake command does not provide a return code so check manually
  if(NOT EXISTS "${symlink}" OR NOT IS_SYMLINK "${symlink}")
    get_filename_component(destination "${symlink}" REALPATH)
    message(FATAL_ERROR
      "Could not create symlink '${symlink}' pointing to '${absolute_file}'")
  endif()
endfunction()

# end of template

message(STATUS "Execute custom install script")

# begin of custom install code

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/ament_cmake_index/share/ament_index/resource_index/rosidl_interfaces/plansys2_msgs" "DESTINATION" "share/ament_index/resource_index/rosidl_interfaces")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/ament_cmake_index/share/ament_index/resource_index/rosidl_interfaces/plansys2_msgs" "DESTINATION" "share/ament_index/resource_index/rosidl_interfaces")

# install(DIRECTORY "/root/ros2_ws/src/build/plansys2_msgs/rosidl_generator_c/plansys2_msgs/" "DESTINATION" "include/plansys2_msgs" "PATTERN" "*.h")
ament_cmake_symlink_install_directory("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" DIRECTORY "/root/ros2_ws/src/build/plansys2_msgs/rosidl_generator_c/plansys2_msgs/" "DESTINATION" "include/plansys2_msgs" "PATTERN" "*.h")

# install(FILES "/opt/ros/foxy/lib/python3.8/site-packages/ament_package/template/environment_hook/library_path.sh" "DESTINATION" "share/plansys2_msgs/environment")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/opt/ros/foxy/lib/python3.8/site-packages/ament_package/template/environment_hook/library_path.sh" "DESTINATION" "share/plansys2_msgs/environment")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/ament_cmake_environment_hooks/library_path.dsv" "DESTINATION" "share/plansys2_msgs/environment")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/ament_cmake_environment_hooks/library_path.dsv" "DESTINATION" "share/plansys2_msgs/environment")

# install(DIRECTORY "/root/ros2_ws/src/build/plansys2_msgs/rosidl_typesupport_fastrtps_c/plansys2_msgs/" "DESTINATION" "include/plansys2_msgs" "PATTERN_EXCLUDE" "*.cpp")
ament_cmake_symlink_install_directory("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" DIRECTORY "/root/ros2_ws/src/build/plansys2_msgs/rosidl_typesupport_fastrtps_c/plansys2_msgs/" "DESTINATION" "include/plansys2_msgs" "PATTERN_EXCLUDE" "*.cpp")

# install("TARGETS" "plansys2_msgs__rosidl_typesupport_fastrtps_c" "ARCHIVE_DESTINATION" "lib" "LIBRARY_DESTINATION" "lib" "RUNTIME_DESTINATION" "bin")
include("/root/ros2_ws/src/build/plansys2_msgs/ament_cmake_symlink_install_targets_0_${CMAKE_INSTALL_CONFIG_NAME}.cmake")

# install(DIRECTORY "/root/ros2_ws/src/build/plansys2_msgs/rosidl_typesupport_fastrtps_cpp/plansys2_msgs/" "DESTINATION" "include/plansys2_msgs" "PATTERN_EXCLUDE" "*.cpp")
ament_cmake_symlink_install_directory("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" DIRECTORY "/root/ros2_ws/src/build/plansys2_msgs/rosidl_typesupport_fastrtps_cpp/plansys2_msgs/" "DESTINATION" "include/plansys2_msgs" "PATTERN_EXCLUDE" "*.cpp")

# install("TARGETS" "plansys2_msgs__rosidl_typesupport_fastrtps_cpp" "ARCHIVE_DESTINATION" "lib" "LIBRARY_DESTINATION" "lib" "RUNTIME_DESTINATION" "bin")
include("/root/ros2_ws/src/build/plansys2_msgs/ament_cmake_symlink_install_targets_1_${CMAKE_INSTALL_CONFIG_NAME}.cmake")

# install(DIRECTORY "/root/ros2_ws/src/build/plansys2_msgs/rosidl_typesupport_introspection_c/plansys2_msgs/" "DESTINATION" "include/plansys2_msgs" "PATTERN" "*.h")
ament_cmake_symlink_install_directory("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" DIRECTORY "/root/ros2_ws/src/build/plansys2_msgs/rosidl_typesupport_introspection_c/plansys2_msgs/" "DESTINATION" "include/plansys2_msgs" "PATTERN" "*.h")

# install(DIRECTORY "/root/ros2_ws/src/build/plansys2_msgs/rosidl_generator_cpp/plansys2_msgs/" "DESTINATION" "include/plansys2_msgs" "PATTERN" "*.hpp")
ament_cmake_symlink_install_directory("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" DIRECTORY "/root/ros2_ws/src/build/plansys2_msgs/rosidl_generator_cpp/plansys2_msgs/" "DESTINATION" "include/plansys2_msgs" "PATTERN" "*.hpp")

# install(DIRECTORY "/root/ros2_ws/src/build/plansys2_msgs/rosidl_typesupport_introspection_cpp/plansys2_msgs/" "DESTINATION" "include/plansys2_msgs" "PATTERN" "*.hpp")
ament_cmake_symlink_install_directory("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" DIRECTORY "/root/ros2_ws/src/build/plansys2_msgs/rosidl_typesupport_introspection_cpp/plansys2_msgs/" "DESTINATION" "include/plansys2_msgs" "PATTERN" "*.hpp")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/ament_cmake_environment_hooks/pythonpath.sh" "DESTINATION" "share/plansys2_msgs/environment")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/ament_cmake_environment_hooks/pythonpath.sh" "DESTINATION" "share/plansys2_msgs/environment")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/ament_cmake_environment_hooks/pythonpath.dsv" "DESTINATION" "share/plansys2_msgs/environment")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/ament_cmake_environment_hooks/pythonpath.dsv" "DESTINATION" "share/plansys2_msgs/environment")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_generator_py/plansys2_msgs/__init__.py" "DESTINATION" "lib/python3.8/site-packages/plansys2_msgs")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_generator_py/plansys2_msgs/__init__.py" "DESTINATION" "lib/python3.8/site-packages/plansys2_msgs")

# install(DIRECTORY "/root/ros2_ws/src/build/plansys2_msgs/rosidl_generator_py/plansys2_msgs/msg/" "DESTINATION" "lib/python3.8/site-packages/plansys2_msgs/msg" "PATTERN" "*.py")
ament_cmake_symlink_install_directory("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" DIRECTORY "/root/ros2_ws/src/build/plansys2_msgs/rosidl_generator_py/plansys2_msgs/msg/" "DESTINATION" "lib/python3.8/site-packages/plansys2_msgs/msg" "PATTERN" "*.py")

# install(DIRECTORY "/root/ros2_ws/src/build/plansys2_msgs/rosidl_generator_py/plansys2_msgs/srv/" "DESTINATION" "lib/python3.8/site-packages/plansys2_msgs/srv" "PATTERN" "*.py")
ament_cmake_symlink_install_directory("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" DIRECTORY "/root/ros2_ws/src/build/plansys2_msgs/rosidl_generator_py/plansys2_msgs/srv/" "DESTINATION" "lib/python3.8/site-packages/plansys2_msgs/srv" "PATTERN" "*.py")

# install(DIRECTORY "/root/ros2_ws/src/build/plansys2_msgs/rosidl_generator_py/plansys2_msgs/action/" "DESTINATION" "lib/python3.8/site-packages/plansys2_msgs/action" "PATTERN" "*.py")
ament_cmake_symlink_install_directory("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" DIRECTORY "/root/ros2_ws/src/build/plansys2_msgs/rosidl_generator_py/plansys2_msgs/action/" "DESTINATION" "lib/python3.8/site-packages/plansys2_msgs/action" "PATTERN" "*.py")

# install("TARGETS" "plansys2_msgs__rosidl_typesupport_fastrtps_c__pyext" "DESTINATION" "lib/python3.8/site-packages/plansys2_msgs")
include("/root/ros2_ws/src/build/plansys2_msgs/ament_cmake_symlink_install_targets_2_${CMAKE_INSTALL_CONFIG_NAME}.cmake")

# install("TARGETS" "plansys2_msgs__rosidl_typesupport_introspection_c__pyext" "DESTINATION" "lib/python3.8/site-packages/plansys2_msgs")
include("/root/ros2_ws/src/build/plansys2_msgs/ament_cmake_symlink_install_targets_3_${CMAKE_INSTALL_CONFIG_NAME}.cmake")

# install("TARGETS" "plansys2_msgs__rosidl_typesupport_c__pyext" "DESTINATION" "lib/python3.8/site-packages/plansys2_msgs")
include("/root/ros2_ws/src/build/plansys2_msgs/ament_cmake_symlink_install_targets_4_${CMAKE_INSTALL_CONFIG_NAME}.cmake")

# install("TARGETS" "plansys2_msgs__python" "ARCHIVE_DESTINATION" "lib" "LIBRARY_DESTINATION" "lib" "RUNTIME_DESTINATION" "bin")
include("/root/ros2_ws/src/build/plansys2_msgs/ament_cmake_symlink_install_targets_5_${CMAKE_INSTALL_CONFIG_NAME}.cmake")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_adapter/plansys2_msgs/msg/Action.idl" "DESTINATION" "share/plansys2_msgs/msg")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_adapter/plansys2_msgs/msg/Action.idl" "DESTINATION" "share/plansys2_msgs/msg")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_adapter/plansys2_msgs/msg/ActionExecution.idl" "DESTINATION" "share/plansys2_msgs/msg")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_adapter/plansys2_msgs/msg/ActionExecution.idl" "DESTINATION" "share/plansys2_msgs/msg")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_adapter/plansys2_msgs/msg/ActionExecutionInfo.idl" "DESTINATION" "share/plansys2_msgs/msg")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_adapter/plansys2_msgs/msg/ActionExecutionInfo.idl" "DESTINATION" "share/plansys2_msgs/msg")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_adapter/plansys2_msgs/msg/ActionPerformerStatus.idl" "DESTINATION" "share/plansys2_msgs/msg")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_adapter/plansys2_msgs/msg/ActionPerformerStatus.idl" "DESTINATION" "share/plansys2_msgs/msg")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_adapter/plansys2_msgs/msg/DurativeAction.idl" "DESTINATION" "share/plansys2_msgs/msg")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_adapter/plansys2_msgs/msg/DurativeAction.idl" "DESTINATION" "share/plansys2_msgs/msg")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_adapter/plansys2_msgs/msg/Knowledge.idl" "DESTINATION" "share/plansys2_msgs/msg")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_adapter/plansys2_msgs/msg/Knowledge.idl" "DESTINATION" "share/plansys2_msgs/msg")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_adapter/plansys2_msgs/msg/Node.idl" "DESTINATION" "share/plansys2_msgs/msg")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_adapter/plansys2_msgs/msg/Node.idl" "DESTINATION" "share/plansys2_msgs/msg")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_adapter/plansys2_msgs/msg/Param.idl" "DESTINATION" "share/plansys2_msgs/msg")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_adapter/plansys2_msgs/msg/Param.idl" "DESTINATION" "share/plansys2_msgs/msg")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_adapter/plansys2_msgs/msg/Plan.idl" "DESTINATION" "share/plansys2_msgs/msg")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_adapter/plansys2_msgs/msg/Plan.idl" "DESTINATION" "share/plansys2_msgs/msg")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_adapter/plansys2_msgs/msg/PlanItem.idl" "DESTINATION" "share/plansys2_msgs/msg")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_adapter/plansys2_msgs/msg/PlanItem.idl" "DESTINATION" "share/plansys2_msgs/msg")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_adapter/plansys2_msgs/msg/Tree.idl" "DESTINATION" "share/plansys2_msgs/msg")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_adapter/plansys2_msgs/msg/Tree.idl" "DESTINATION" "share/plansys2_msgs/msg")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_adapter/plansys2_msgs/srv/AddProblem.idl" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_adapter/plansys2_msgs/srv/AddProblem.idl" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_adapter/plansys2_msgs/srv/AddProblemGoal.idl" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_adapter/plansys2_msgs/srv/AddProblemGoal.idl" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_adapter/plansys2_msgs/srv/AffectNode.idl" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_adapter/plansys2_msgs/srv/AffectNode.idl" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_adapter/plansys2_msgs/srv/AffectParam.idl" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_adapter/plansys2_msgs/srv/AffectParam.idl" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_adapter/plansys2_msgs/srv/ExistNode.idl" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_adapter/plansys2_msgs/srv/ExistNode.idl" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_adapter/plansys2_msgs/srv/GetDomain.idl" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_adapter/plansys2_msgs/srv/GetDomain.idl" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_adapter/plansys2_msgs/srv/GetDomainActions.idl" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_adapter/plansys2_msgs/srv/GetDomainActions.idl" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_adapter/plansys2_msgs/srv/GetDomainActionDetails.idl" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_adapter/plansys2_msgs/srv/GetDomainActionDetails.idl" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_adapter/plansys2_msgs/srv/GetDomainDurativeActionDetails.idl" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_adapter/plansys2_msgs/srv/GetDomainDurativeActionDetails.idl" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_adapter/plansys2_msgs/srv/GetDomainTypes.idl" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_adapter/plansys2_msgs/srv/GetDomainTypes.idl" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_adapter/plansys2_msgs/srv/GetNodeDetails.idl" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_adapter/plansys2_msgs/srv/GetNodeDetails.idl" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_adapter/plansys2_msgs/srv/GetPlan.idl" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_adapter/plansys2_msgs/srv/GetPlan.idl" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_adapter/plansys2_msgs/srv/GetOrderedSubGoals.idl" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_adapter/plansys2_msgs/srv/GetOrderedSubGoals.idl" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_adapter/plansys2_msgs/srv/GetProblem.idl" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_adapter/plansys2_msgs/srv/GetProblem.idl" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_adapter/plansys2_msgs/srv/GetProblemGoal.idl" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_adapter/plansys2_msgs/srv/GetProblemGoal.idl" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_adapter/plansys2_msgs/srv/GetProblemInstances.idl" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_adapter/plansys2_msgs/srv/GetProblemInstances.idl" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_adapter/plansys2_msgs/srv/GetProblemInstanceDetails.idl" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_adapter/plansys2_msgs/srv/GetProblemInstanceDetails.idl" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_adapter/plansys2_msgs/srv/GetStates.idl" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_adapter/plansys2_msgs/srv/GetStates.idl" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_adapter/plansys2_msgs/srv/IsProblemGoalSatisfied.idl" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_adapter/plansys2_msgs/srv/IsProblemGoalSatisfied.idl" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_adapter/plansys2_msgs/srv/RemoveProblemGoal.idl" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_adapter/plansys2_msgs/srv/RemoveProblemGoal.idl" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_adapter/plansys2_msgs/srv/ClearProblemKnowledge.idl" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_adapter/plansys2_msgs/srv/ClearProblemKnowledge.idl" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_adapter/plansys2_msgs/action/ExecutePlan.idl" "DESTINATION" "share/plansys2_msgs/action")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_adapter/plansys2_msgs/action/ExecutePlan.idl" "DESTINATION" "share/plansys2_msgs/action")

# install(FILES "/root/ros2_ws/src/ros2_planning_system/plansys2_msgs/msg/Action.msg" "DESTINATION" "share/plansys2_msgs/msg")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/ros2_planning_system/plansys2_msgs/msg/Action.msg" "DESTINATION" "share/plansys2_msgs/msg")

# install(FILES "/root/ros2_ws/src/ros2_planning_system/plansys2_msgs/msg/ActionExecution.msg" "DESTINATION" "share/plansys2_msgs/msg")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/ros2_planning_system/plansys2_msgs/msg/ActionExecution.msg" "DESTINATION" "share/plansys2_msgs/msg")

# install(FILES "/root/ros2_ws/src/ros2_planning_system/plansys2_msgs/msg/ActionExecutionInfo.msg" "DESTINATION" "share/plansys2_msgs/msg")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/ros2_planning_system/plansys2_msgs/msg/ActionExecutionInfo.msg" "DESTINATION" "share/plansys2_msgs/msg")

# install(FILES "/root/ros2_ws/src/ros2_planning_system/plansys2_msgs/msg/ActionPerformerStatus.msg" "DESTINATION" "share/plansys2_msgs/msg")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/ros2_planning_system/plansys2_msgs/msg/ActionPerformerStatus.msg" "DESTINATION" "share/plansys2_msgs/msg")

# install(FILES "/root/ros2_ws/src/ros2_planning_system/plansys2_msgs/msg/DurativeAction.msg" "DESTINATION" "share/plansys2_msgs/msg")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/ros2_planning_system/plansys2_msgs/msg/DurativeAction.msg" "DESTINATION" "share/plansys2_msgs/msg")

# install(FILES "/root/ros2_ws/src/ros2_planning_system/plansys2_msgs/msg/Knowledge.msg" "DESTINATION" "share/plansys2_msgs/msg")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/ros2_planning_system/plansys2_msgs/msg/Knowledge.msg" "DESTINATION" "share/plansys2_msgs/msg")

# install(FILES "/root/ros2_ws/src/ros2_planning_system/plansys2_msgs/msg/Node.msg" "DESTINATION" "share/plansys2_msgs/msg")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/ros2_planning_system/plansys2_msgs/msg/Node.msg" "DESTINATION" "share/plansys2_msgs/msg")

# install(FILES "/root/ros2_ws/src/ros2_planning_system/plansys2_msgs/msg/Param.msg" "DESTINATION" "share/plansys2_msgs/msg")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/ros2_planning_system/plansys2_msgs/msg/Param.msg" "DESTINATION" "share/plansys2_msgs/msg")

# install(FILES "/root/ros2_ws/src/ros2_planning_system/plansys2_msgs/msg/Plan.msg" "DESTINATION" "share/plansys2_msgs/msg")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/ros2_planning_system/plansys2_msgs/msg/Plan.msg" "DESTINATION" "share/plansys2_msgs/msg")

# install(FILES "/root/ros2_ws/src/ros2_planning_system/plansys2_msgs/msg/PlanItem.msg" "DESTINATION" "share/plansys2_msgs/msg")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/ros2_planning_system/plansys2_msgs/msg/PlanItem.msg" "DESTINATION" "share/plansys2_msgs/msg")

# install(FILES "/root/ros2_ws/src/ros2_planning_system/plansys2_msgs/msg/Tree.msg" "DESTINATION" "share/plansys2_msgs/msg")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/ros2_planning_system/plansys2_msgs/msg/Tree.msg" "DESTINATION" "share/plansys2_msgs/msg")

# install(FILES "/root/ros2_ws/src/ros2_planning_system/plansys2_msgs/srv/AddProblem.srv" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/ros2_planning_system/plansys2_msgs/srv/AddProblem.srv" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/AddProblem_Request.msg" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/AddProblem_Request.msg" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/AddProblem_Response.msg" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/AddProblem_Response.msg" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/ros2_planning_system/plansys2_msgs/srv/AddProblemGoal.srv" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/ros2_planning_system/plansys2_msgs/srv/AddProblemGoal.srv" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/AddProblemGoal_Request.msg" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/AddProblemGoal_Request.msg" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/AddProblemGoal_Response.msg" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/AddProblemGoal_Response.msg" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/ros2_planning_system/plansys2_msgs/srv/AffectNode.srv" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/ros2_planning_system/plansys2_msgs/srv/AffectNode.srv" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/AffectNode_Request.msg" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/AffectNode_Request.msg" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/AffectNode_Response.msg" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/AffectNode_Response.msg" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/ros2_planning_system/plansys2_msgs/srv/AffectParam.srv" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/ros2_planning_system/plansys2_msgs/srv/AffectParam.srv" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/AffectParam_Request.msg" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/AffectParam_Request.msg" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/AffectParam_Response.msg" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/AffectParam_Response.msg" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/ros2_planning_system/plansys2_msgs/srv/ExistNode.srv" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/ros2_planning_system/plansys2_msgs/srv/ExistNode.srv" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/ExistNode_Request.msg" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/ExistNode_Request.msg" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/ExistNode_Response.msg" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/ExistNode_Response.msg" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/ros2_planning_system/plansys2_msgs/srv/GetDomain.srv" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/ros2_planning_system/plansys2_msgs/srv/GetDomain.srv" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/GetDomain_Request.msg" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/GetDomain_Request.msg" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/GetDomain_Response.msg" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/GetDomain_Response.msg" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/ros2_planning_system/plansys2_msgs/srv/GetDomainActions.srv" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/ros2_planning_system/plansys2_msgs/srv/GetDomainActions.srv" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/GetDomainActions_Request.msg" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/GetDomainActions_Request.msg" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/GetDomainActions_Response.msg" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/GetDomainActions_Response.msg" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/ros2_planning_system/plansys2_msgs/srv/GetDomainActionDetails.srv" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/ros2_planning_system/plansys2_msgs/srv/GetDomainActionDetails.srv" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/GetDomainActionDetails_Request.msg" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/GetDomainActionDetails_Request.msg" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/GetDomainActionDetails_Response.msg" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/GetDomainActionDetails_Response.msg" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/ros2_planning_system/plansys2_msgs/srv/GetDomainDurativeActionDetails.srv" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/ros2_planning_system/plansys2_msgs/srv/GetDomainDurativeActionDetails.srv" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/GetDomainDurativeActionDetails_Request.msg" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/GetDomainDurativeActionDetails_Request.msg" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/GetDomainDurativeActionDetails_Response.msg" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/GetDomainDurativeActionDetails_Response.msg" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/ros2_planning_system/plansys2_msgs/srv/GetDomainTypes.srv" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/ros2_planning_system/plansys2_msgs/srv/GetDomainTypes.srv" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/GetDomainTypes_Request.msg" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/GetDomainTypes_Request.msg" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/GetDomainTypes_Response.msg" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/GetDomainTypes_Response.msg" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/ros2_planning_system/plansys2_msgs/srv/GetNodeDetails.srv" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/ros2_planning_system/plansys2_msgs/srv/GetNodeDetails.srv" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/GetNodeDetails_Request.msg" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/GetNodeDetails_Request.msg" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/GetNodeDetails_Response.msg" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/GetNodeDetails_Response.msg" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/ros2_planning_system/plansys2_msgs/srv/GetPlan.srv" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/ros2_planning_system/plansys2_msgs/srv/GetPlan.srv" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/GetPlan_Request.msg" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/GetPlan_Request.msg" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/GetPlan_Response.msg" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/GetPlan_Response.msg" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/ros2_planning_system/plansys2_msgs/srv/GetOrderedSubGoals.srv" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/ros2_planning_system/plansys2_msgs/srv/GetOrderedSubGoals.srv" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/GetOrderedSubGoals_Request.msg" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/GetOrderedSubGoals_Request.msg" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/GetOrderedSubGoals_Response.msg" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/GetOrderedSubGoals_Response.msg" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/ros2_planning_system/plansys2_msgs/srv/GetProblem.srv" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/ros2_planning_system/plansys2_msgs/srv/GetProblem.srv" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/GetProblem_Request.msg" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/GetProblem_Request.msg" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/GetProblem_Response.msg" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/GetProblem_Response.msg" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/ros2_planning_system/plansys2_msgs/srv/GetProblemGoal.srv" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/ros2_planning_system/plansys2_msgs/srv/GetProblemGoal.srv" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/GetProblemGoal_Request.msg" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/GetProblemGoal_Request.msg" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/GetProblemGoal_Response.msg" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/GetProblemGoal_Response.msg" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/ros2_planning_system/plansys2_msgs/srv/GetProblemInstances.srv" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/ros2_planning_system/plansys2_msgs/srv/GetProblemInstances.srv" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/GetProblemInstances_Request.msg" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/GetProblemInstances_Request.msg" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/GetProblemInstances_Response.msg" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/GetProblemInstances_Response.msg" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/ros2_planning_system/plansys2_msgs/srv/GetProblemInstanceDetails.srv" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/ros2_planning_system/plansys2_msgs/srv/GetProblemInstanceDetails.srv" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/GetProblemInstanceDetails_Request.msg" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/GetProblemInstanceDetails_Request.msg" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/GetProblemInstanceDetails_Response.msg" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/GetProblemInstanceDetails_Response.msg" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/ros2_planning_system/plansys2_msgs/srv/GetStates.srv" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/ros2_planning_system/plansys2_msgs/srv/GetStates.srv" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/GetStates_Request.msg" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/GetStates_Request.msg" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/GetStates_Response.msg" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/GetStates_Response.msg" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/ros2_planning_system/plansys2_msgs/srv/IsProblemGoalSatisfied.srv" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/ros2_planning_system/plansys2_msgs/srv/IsProblemGoalSatisfied.srv" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/IsProblemGoalSatisfied_Request.msg" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/IsProblemGoalSatisfied_Request.msg" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/IsProblemGoalSatisfied_Response.msg" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/IsProblemGoalSatisfied_Response.msg" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/ros2_planning_system/plansys2_msgs/srv/RemoveProblemGoal.srv" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/ros2_planning_system/plansys2_msgs/srv/RemoveProblemGoal.srv" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/RemoveProblemGoal_Request.msg" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/RemoveProblemGoal_Request.msg" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/RemoveProblemGoal_Response.msg" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/RemoveProblemGoal_Response.msg" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/ros2_planning_system/plansys2_msgs/srv/ClearProblemKnowledge.srv" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/ros2_planning_system/plansys2_msgs/srv/ClearProblemKnowledge.srv" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/ClearProblemKnowledge_Request.msg" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/ClearProblemKnowledge_Request.msg" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/ClearProblemKnowledge_Response.msg" "DESTINATION" "share/plansys2_msgs/srv")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/srv/ClearProblemKnowledge_Response.msg" "DESTINATION" "share/plansys2_msgs/srv")

# install(FILES "/root/ros2_ws/src/ros2_planning_system/plansys2_msgs/action/ExecutePlan.action" "DESTINATION" "share/plansys2_msgs/action")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/ros2_planning_system/plansys2_msgs/action/ExecutePlan.action" "DESTINATION" "share/plansys2_msgs/action")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/plansys2_msgs" "DESTINATION" "share/ament_index/resource_index/package_run_dependencies")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/plansys2_msgs" "DESTINATION" "share/ament_index/resource_index/package_run_dependencies")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/plansys2_msgs" "DESTINATION" "share/ament_index/resource_index/parent_prefix_path")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/plansys2_msgs" "DESTINATION" "share/ament_index/resource_index/parent_prefix_path")

# install(FILES "/opt/ros/foxy/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh" "DESTINATION" "share/plansys2_msgs/environment")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/opt/ros/foxy/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh" "DESTINATION" "share/plansys2_msgs/environment")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/ament_cmake_environment_hooks/ament_prefix_path.dsv" "DESTINATION" "share/plansys2_msgs/environment")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/ament_cmake_environment_hooks/ament_prefix_path.dsv" "DESTINATION" "share/plansys2_msgs/environment")

# install(FILES "/opt/ros/foxy/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh" "DESTINATION" "share/plansys2_msgs/environment")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/opt/ros/foxy/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh" "DESTINATION" "share/plansys2_msgs/environment")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/ament_cmake_environment_hooks/path.dsv" "DESTINATION" "share/plansys2_msgs/environment")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/ament_cmake_environment_hooks/path.dsv" "DESTINATION" "share/plansys2_msgs/environment")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/ament_cmake_environment_hooks/local_setup.bash" "DESTINATION" "share/plansys2_msgs")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/ament_cmake_environment_hooks/local_setup.bash" "DESTINATION" "share/plansys2_msgs")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/ament_cmake_environment_hooks/local_setup.sh" "DESTINATION" "share/plansys2_msgs")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/ament_cmake_environment_hooks/local_setup.sh" "DESTINATION" "share/plansys2_msgs")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/ament_cmake_environment_hooks/local_setup.zsh" "DESTINATION" "share/plansys2_msgs")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/ament_cmake_environment_hooks/local_setup.zsh" "DESTINATION" "share/plansys2_msgs")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/ament_cmake_environment_hooks/local_setup.dsv" "DESTINATION" "share/plansys2_msgs")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/ament_cmake_environment_hooks/local_setup.dsv" "DESTINATION" "share/plansys2_msgs")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/ament_cmake_environment_hooks/package.dsv" "DESTINATION" "share/plansys2_msgs")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/ament_cmake_environment_hooks/package.dsv" "DESTINATION" "share/plansys2_msgs")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/ament_cmake_index/share/ament_index/resource_index/packages/plansys2_msgs" "DESTINATION" "share/ament_index/resource_index/packages")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/ament_cmake_index/share/ament_index/resource_index/packages/plansys2_msgs" "DESTINATION" "share/ament_index/resource_index/packages")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/rosidl_cmake-extras.cmake" "DESTINATION" "share/plansys2_msgs/cmake")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/rosidl_cmake-extras.cmake" "DESTINATION" "share/plansys2_msgs/cmake")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/ament_cmake_export_dependencies/ament_cmake_export_dependencies-extras.cmake" "DESTINATION" "share/plansys2_msgs/cmake")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/ament_cmake_export_dependencies/ament_cmake_export_dependencies-extras.cmake" "DESTINATION" "share/plansys2_msgs/cmake")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/ament_cmake_export_libraries/ament_cmake_export_libraries-extras.cmake" "DESTINATION" "share/plansys2_msgs/cmake")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/ament_cmake_export_libraries/ament_cmake_export_libraries-extras.cmake" "DESTINATION" "share/plansys2_msgs/cmake")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/ament_cmake_export_targets/ament_cmake_export_targets-extras.cmake" "DESTINATION" "share/plansys2_msgs/cmake")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/ament_cmake_export_targets/ament_cmake_export_targets-extras.cmake" "DESTINATION" "share/plansys2_msgs/cmake")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/ament_cmake_export_include_directories/ament_cmake_export_include_directories-extras.cmake" "DESTINATION" "share/plansys2_msgs/cmake")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/ament_cmake_export_include_directories/ament_cmake_export_include_directories-extras.cmake" "DESTINATION" "share/plansys2_msgs/cmake")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/rosidl_cmake_export_typesupport_libraries-extras.cmake" "DESTINATION" "share/plansys2_msgs/cmake")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/rosidl_cmake_export_typesupport_libraries-extras.cmake" "DESTINATION" "share/plansys2_msgs/cmake")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/rosidl_cmake_export_typesupport_targets-extras.cmake" "DESTINATION" "share/plansys2_msgs/cmake")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/rosidl_cmake/rosidl_cmake_export_typesupport_targets-extras.cmake" "DESTINATION" "share/plansys2_msgs/cmake")

# install(FILES "/root/ros2_ws/src/build/plansys2_msgs/ament_cmake_core/plansys2_msgsConfig.cmake" "/root/ros2_ws/src/build/plansys2_msgs/ament_cmake_core/plansys2_msgsConfig-version.cmake" "DESTINATION" "share/plansys2_msgs/cmake")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/build/plansys2_msgs/ament_cmake_core/plansys2_msgsConfig.cmake" "/root/ros2_ws/src/build/plansys2_msgs/ament_cmake_core/plansys2_msgsConfig-version.cmake" "DESTINATION" "share/plansys2_msgs/cmake")

# install(FILES "/root/ros2_ws/src/ros2_planning_system/plansys2_msgs/package.xml" "DESTINATION" "share/plansys2_msgs")
ament_cmake_symlink_install_files("/root/ros2_ws/src/ros2_planning_system/plansys2_msgs" FILES "/root/ros2_ws/src/ros2_planning_system/plansys2_msgs/package.xml" "DESTINATION" "share/plansys2_msgs")
