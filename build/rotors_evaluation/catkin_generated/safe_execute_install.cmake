execute_process(COMMAND "/home/taylorvd/gbplanner2_ws/build/rotors_evaluation/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/taylorvd/gbplanner2_ws/build/rotors_evaluation/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
