# generated from catkin/cmake/template/pkg.context.pc.in
CATKIN_PACKAGE_PREFIX = ""
PROJECT_PKG_CONFIG_INCLUDE_DIRS = "${prefix}/include".split(';') if "${prefix}/include" != "" else []
PROJECT_CATKIN_DEPENDS = "roscpp;cv_bridge;tf;message_generation;geometry_msgs;visualization_msgs;kdtree;voxblox_ros;planner_common;planner_msgs;planner_semantic_msgs;adaptive_obb;pcl_ros".replace(';', ' ')
PKG_CONFIG_LIBRARIES_WITH_PREFIX = "-lgbplanner".split(';') if "-lgbplanner" != "" else []
PROJECT_NAME = "gbplanner"
PROJECT_SPACE_DIR = "/home/taylorvd/gbplanner2_ws/install"
PROJECT_VERSION = "0.0.0"
