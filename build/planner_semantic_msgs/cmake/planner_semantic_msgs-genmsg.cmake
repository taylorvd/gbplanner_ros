# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "planner_semantic_msgs: 3 messages, 0 services")

set(MSG_I_FLAGS "-Iplanner_semantic_msgs:/home/taylorvd/gbplanner2_ws/src/exploration/gbplanner_ros/planner_semantic_msgs/msg;-Istd_msgs:/opt/ros/noetic/share/std_msgs/cmake/../msg;-Igeometry_msgs:/opt/ros/noetic/share/geometry_msgs/cmake/../msg;-Iactionlib_msgs:/opt/ros/noetic/share/actionlib_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(geneus REQUIRED)
find_package(genlisp REQUIRED)
find_package(gennodejs REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(planner_semantic_msgs_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/home/taylorvd/gbplanner2_ws/src/exploration/gbplanner_ros/planner_semantic_msgs/msg/SemanticClass.msg" NAME_WE)
add_custom_target(_planner_semantic_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "planner_semantic_msgs" "/home/taylorvd/gbplanner2_ws/src/exploration/gbplanner_ros/planner_semantic_msgs/msg/SemanticClass.msg" ""
)

get_filename_component(_filename "/home/taylorvd/gbplanner2_ws/src/exploration/gbplanner_ros/planner_semantic_msgs/msg/SemanticPoint.msg" NAME_WE)
add_custom_target(_planner_semantic_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "planner_semantic_msgs" "/home/taylorvd/gbplanner2_ws/src/exploration/gbplanner_ros/planner_semantic_msgs/msg/SemanticPoint.msg" "std_msgs/String:geometry_msgs/Point32:planner_semantic_msgs/SemanticClass:std_msgs/Header"
)

get_filename_component(_filename "/home/taylorvd/gbplanner2_ws/src/exploration/gbplanner_ros/planner_semantic_msgs/msg/SemanticPolygon.msg" NAME_WE)
add_custom_target(_planner_semantic_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "planner_semantic_msgs" "/home/taylorvd/gbplanner2_ws/src/exploration/gbplanner_ros/planner_semantic_msgs/msg/SemanticPolygon.msg" "std_msgs/Header:std_msgs/String:geometry_msgs/Polygon:planner_semantic_msgs/SemanticClass:geometry_msgs/Point32"
)

#
#  langs = gencpp;geneus;genlisp;gennodejs;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(planner_semantic_msgs
  "/home/taylorvd/gbplanner2_ws/src/exploration/gbplanner_ros/planner_semantic_msgs/msg/SemanticClass.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/planner_semantic_msgs
)
_generate_msg_cpp(planner_semantic_msgs
  "/home/taylorvd/gbplanner2_ws/src/exploration/gbplanner_ros/planner_semantic_msgs/msg/SemanticPoint.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/String.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg;/home/taylorvd/gbplanner2_ws/src/exploration/gbplanner_ros/planner_semantic_msgs/msg/SemanticClass.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/planner_semantic_msgs
)
_generate_msg_cpp(planner_semantic_msgs
  "/home/taylorvd/gbplanner2_ws/src/exploration/gbplanner_ros/planner_semantic_msgs/msg/SemanticPolygon.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/String.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Polygon.msg;/home/taylorvd/gbplanner2_ws/src/exploration/gbplanner_ros/planner_semantic_msgs/msg/SemanticClass.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/planner_semantic_msgs
)

### Generating Services

### Generating Module File
_generate_module_cpp(planner_semantic_msgs
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/planner_semantic_msgs
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(planner_semantic_msgs_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(planner_semantic_msgs_generate_messages planner_semantic_msgs_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/taylorvd/gbplanner2_ws/src/exploration/gbplanner_ros/planner_semantic_msgs/msg/SemanticClass.msg" NAME_WE)
add_dependencies(planner_semantic_msgs_generate_messages_cpp _planner_semantic_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/taylorvd/gbplanner2_ws/src/exploration/gbplanner_ros/planner_semantic_msgs/msg/SemanticPoint.msg" NAME_WE)
add_dependencies(planner_semantic_msgs_generate_messages_cpp _planner_semantic_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/taylorvd/gbplanner2_ws/src/exploration/gbplanner_ros/planner_semantic_msgs/msg/SemanticPolygon.msg" NAME_WE)
add_dependencies(planner_semantic_msgs_generate_messages_cpp _planner_semantic_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(planner_semantic_msgs_gencpp)
add_dependencies(planner_semantic_msgs_gencpp planner_semantic_msgs_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS planner_semantic_msgs_generate_messages_cpp)

### Section generating for lang: geneus
### Generating Messages
_generate_msg_eus(planner_semantic_msgs
  "/home/taylorvd/gbplanner2_ws/src/exploration/gbplanner_ros/planner_semantic_msgs/msg/SemanticClass.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/planner_semantic_msgs
)
_generate_msg_eus(planner_semantic_msgs
  "/home/taylorvd/gbplanner2_ws/src/exploration/gbplanner_ros/planner_semantic_msgs/msg/SemanticPoint.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/String.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg;/home/taylorvd/gbplanner2_ws/src/exploration/gbplanner_ros/planner_semantic_msgs/msg/SemanticClass.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/planner_semantic_msgs
)
_generate_msg_eus(planner_semantic_msgs
  "/home/taylorvd/gbplanner2_ws/src/exploration/gbplanner_ros/planner_semantic_msgs/msg/SemanticPolygon.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/String.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Polygon.msg;/home/taylorvd/gbplanner2_ws/src/exploration/gbplanner_ros/planner_semantic_msgs/msg/SemanticClass.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/planner_semantic_msgs
)

### Generating Services

### Generating Module File
_generate_module_eus(planner_semantic_msgs
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/planner_semantic_msgs
  "${ALL_GEN_OUTPUT_FILES_eus}"
)

add_custom_target(planner_semantic_msgs_generate_messages_eus
  DEPENDS ${ALL_GEN_OUTPUT_FILES_eus}
)
add_dependencies(planner_semantic_msgs_generate_messages planner_semantic_msgs_generate_messages_eus)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/taylorvd/gbplanner2_ws/src/exploration/gbplanner_ros/planner_semantic_msgs/msg/SemanticClass.msg" NAME_WE)
add_dependencies(planner_semantic_msgs_generate_messages_eus _planner_semantic_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/taylorvd/gbplanner2_ws/src/exploration/gbplanner_ros/planner_semantic_msgs/msg/SemanticPoint.msg" NAME_WE)
add_dependencies(planner_semantic_msgs_generate_messages_eus _planner_semantic_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/taylorvd/gbplanner2_ws/src/exploration/gbplanner_ros/planner_semantic_msgs/msg/SemanticPolygon.msg" NAME_WE)
add_dependencies(planner_semantic_msgs_generate_messages_eus _planner_semantic_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(planner_semantic_msgs_geneus)
add_dependencies(planner_semantic_msgs_geneus planner_semantic_msgs_generate_messages_eus)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS planner_semantic_msgs_generate_messages_eus)

### Section generating for lang: genlisp
### Generating Messages
_generate_msg_lisp(planner_semantic_msgs
  "/home/taylorvd/gbplanner2_ws/src/exploration/gbplanner_ros/planner_semantic_msgs/msg/SemanticClass.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/planner_semantic_msgs
)
_generate_msg_lisp(planner_semantic_msgs
  "/home/taylorvd/gbplanner2_ws/src/exploration/gbplanner_ros/planner_semantic_msgs/msg/SemanticPoint.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/String.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg;/home/taylorvd/gbplanner2_ws/src/exploration/gbplanner_ros/planner_semantic_msgs/msg/SemanticClass.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/planner_semantic_msgs
)
_generate_msg_lisp(planner_semantic_msgs
  "/home/taylorvd/gbplanner2_ws/src/exploration/gbplanner_ros/planner_semantic_msgs/msg/SemanticPolygon.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/String.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Polygon.msg;/home/taylorvd/gbplanner2_ws/src/exploration/gbplanner_ros/planner_semantic_msgs/msg/SemanticClass.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/planner_semantic_msgs
)

### Generating Services

### Generating Module File
_generate_module_lisp(planner_semantic_msgs
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/planner_semantic_msgs
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(planner_semantic_msgs_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(planner_semantic_msgs_generate_messages planner_semantic_msgs_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/taylorvd/gbplanner2_ws/src/exploration/gbplanner_ros/planner_semantic_msgs/msg/SemanticClass.msg" NAME_WE)
add_dependencies(planner_semantic_msgs_generate_messages_lisp _planner_semantic_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/taylorvd/gbplanner2_ws/src/exploration/gbplanner_ros/planner_semantic_msgs/msg/SemanticPoint.msg" NAME_WE)
add_dependencies(planner_semantic_msgs_generate_messages_lisp _planner_semantic_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/taylorvd/gbplanner2_ws/src/exploration/gbplanner_ros/planner_semantic_msgs/msg/SemanticPolygon.msg" NAME_WE)
add_dependencies(planner_semantic_msgs_generate_messages_lisp _planner_semantic_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(planner_semantic_msgs_genlisp)
add_dependencies(planner_semantic_msgs_genlisp planner_semantic_msgs_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS planner_semantic_msgs_generate_messages_lisp)

### Section generating for lang: gennodejs
### Generating Messages
_generate_msg_nodejs(planner_semantic_msgs
  "/home/taylorvd/gbplanner2_ws/src/exploration/gbplanner_ros/planner_semantic_msgs/msg/SemanticClass.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/planner_semantic_msgs
)
_generate_msg_nodejs(planner_semantic_msgs
  "/home/taylorvd/gbplanner2_ws/src/exploration/gbplanner_ros/planner_semantic_msgs/msg/SemanticPoint.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/String.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg;/home/taylorvd/gbplanner2_ws/src/exploration/gbplanner_ros/planner_semantic_msgs/msg/SemanticClass.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/planner_semantic_msgs
)
_generate_msg_nodejs(planner_semantic_msgs
  "/home/taylorvd/gbplanner2_ws/src/exploration/gbplanner_ros/planner_semantic_msgs/msg/SemanticPolygon.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/String.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Polygon.msg;/home/taylorvd/gbplanner2_ws/src/exploration/gbplanner_ros/planner_semantic_msgs/msg/SemanticClass.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/planner_semantic_msgs
)

### Generating Services

### Generating Module File
_generate_module_nodejs(planner_semantic_msgs
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/planner_semantic_msgs
  "${ALL_GEN_OUTPUT_FILES_nodejs}"
)

add_custom_target(planner_semantic_msgs_generate_messages_nodejs
  DEPENDS ${ALL_GEN_OUTPUT_FILES_nodejs}
)
add_dependencies(planner_semantic_msgs_generate_messages planner_semantic_msgs_generate_messages_nodejs)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/taylorvd/gbplanner2_ws/src/exploration/gbplanner_ros/planner_semantic_msgs/msg/SemanticClass.msg" NAME_WE)
add_dependencies(planner_semantic_msgs_generate_messages_nodejs _planner_semantic_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/taylorvd/gbplanner2_ws/src/exploration/gbplanner_ros/planner_semantic_msgs/msg/SemanticPoint.msg" NAME_WE)
add_dependencies(planner_semantic_msgs_generate_messages_nodejs _planner_semantic_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/taylorvd/gbplanner2_ws/src/exploration/gbplanner_ros/planner_semantic_msgs/msg/SemanticPolygon.msg" NAME_WE)
add_dependencies(planner_semantic_msgs_generate_messages_nodejs _planner_semantic_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(planner_semantic_msgs_gennodejs)
add_dependencies(planner_semantic_msgs_gennodejs planner_semantic_msgs_generate_messages_nodejs)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS planner_semantic_msgs_generate_messages_nodejs)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(planner_semantic_msgs
  "/home/taylorvd/gbplanner2_ws/src/exploration/gbplanner_ros/planner_semantic_msgs/msg/SemanticClass.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/planner_semantic_msgs
)
_generate_msg_py(planner_semantic_msgs
  "/home/taylorvd/gbplanner2_ws/src/exploration/gbplanner_ros/planner_semantic_msgs/msg/SemanticPoint.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/String.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg;/home/taylorvd/gbplanner2_ws/src/exploration/gbplanner_ros/planner_semantic_msgs/msg/SemanticClass.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/planner_semantic_msgs
)
_generate_msg_py(planner_semantic_msgs
  "/home/taylorvd/gbplanner2_ws/src/exploration/gbplanner_ros/planner_semantic_msgs/msg/SemanticPolygon.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/String.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Polygon.msg;/home/taylorvd/gbplanner2_ws/src/exploration/gbplanner_ros/planner_semantic_msgs/msg/SemanticClass.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point32.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/planner_semantic_msgs
)

### Generating Services

### Generating Module File
_generate_module_py(planner_semantic_msgs
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/planner_semantic_msgs
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(planner_semantic_msgs_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(planner_semantic_msgs_generate_messages planner_semantic_msgs_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/taylorvd/gbplanner2_ws/src/exploration/gbplanner_ros/planner_semantic_msgs/msg/SemanticClass.msg" NAME_WE)
add_dependencies(planner_semantic_msgs_generate_messages_py _planner_semantic_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/taylorvd/gbplanner2_ws/src/exploration/gbplanner_ros/planner_semantic_msgs/msg/SemanticPoint.msg" NAME_WE)
add_dependencies(planner_semantic_msgs_generate_messages_py _planner_semantic_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/taylorvd/gbplanner2_ws/src/exploration/gbplanner_ros/planner_semantic_msgs/msg/SemanticPolygon.msg" NAME_WE)
add_dependencies(planner_semantic_msgs_generate_messages_py _planner_semantic_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(planner_semantic_msgs_genpy)
add_dependencies(planner_semantic_msgs_genpy planner_semantic_msgs_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS planner_semantic_msgs_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/planner_semantic_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/planner_semantic_msgs
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_cpp)
  add_dependencies(planner_semantic_msgs_generate_messages_cpp std_msgs_generate_messages_cpp)
endif()
if(TARGET geometry_msgs_generate_messages_cpp)
  add_dependencies(planner_semantic_msgs_generate_messages_cpp geometry_msgs_generate_messages_cpp)
endif()
if(TARGET actionlib_msgs_generate_messages_cpp)
  add_dependencies(planner_semantic_msgs_generate_messages_cpp actionlib_msgs_generate_messages_cpp)
endif()

if(geneus_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/planner_semantic_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/planner_semantic_msgs
    DESTINATION ${geneus_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_eus)
  add_dependencies(planner_semantic_msgs_generate_messages_eus std_msgs_generate_messages_eus)
endif()
if(TARGET geometry_msgs_generate_messages_eus)
  add_dependencies(planner_semantic_msgs_generate_messages_eus geometry_msgs_generate_messages_eus)
endif()
if(TARGET actionlib_msgs_generate_messages_eus)
  add_dependencies(planner_semantic_msgs_generate_messages_eus actionlib_msgs_generate_messages_eus)
endif()

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/planner_semantic_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/planner_semantic_msgs
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_lisp)
  add_dependencies(planner_semantic_msgs_generate_messages_lisp std_msgs_generate_messages_lisp)
endif()
if(TARGET geometry_msgs_generate_messages_lisp)
  add_dependencies(planner_semantic_msgs_generate_messages_lisp geometry_msgs_generate_messages_lisp)
endif()
if(TARGET actionlib_msgs_generate_messages_lisp)
  add_dependencies(planner_semantic_msgs_generate_messages_lisp actionlib_msgs_generate_messages_lisp)
endif()

if(gennodejs_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/planner_semantic_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/planner_semantic_msgs
    DESTINATION ${gennodejs_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_nodejs)
  add_dependencies(planner_semantic_msgs_generate_messages_nodejs std_msgs_generate_messages_nodejs)
endif()
if(TARGET geometry_msgs_generate_messages_nodejs)
  add_dependencies(planner_semantic_msgs_generate_messages_nodejs geometry_msgs_generate_messages_nodejs)
endif()
if(TARGET actionlib_msgs_generate_messages_nodejs)
  add_dependencies(planner_semantic_msgs_generate_messages_nodejs actionlib_msgs_generate_messages_nodejs)
endif()

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/planner_semantic_msgs)
  install(CODE "execute_process(COMMAND \"/usr/bin/python3\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/planner_semantic_msgs\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/planner_semantic_msgs
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_py)
  add_dependencies(planner_semantic_msgs_generate_messages_py std_msgs_generate_messages_py)
endif()
if(TARGET geometry_msgs_generate_messages_py)
  add_dependencies(planner_semantic_msgs_generate_messages_py geometry_msgs_generate_messages_py)
endif()
if(TARGET actionlib_msgs_generate_messages_py)
  add_dependencies(planner_semantic_msgs_generate_messages_py actionlib_msgs_generate_messages_py)
endif()
