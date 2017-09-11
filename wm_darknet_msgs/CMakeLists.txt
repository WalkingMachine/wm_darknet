cmake_minimum_required(VERSION 2.8.3)
project(wm_darknet_msgs)

add_compile_options(-std=c++11)

find_package(catkin REQUIRED COMPONENTS
  actionlib_msgs
  geometry_msgs
  message_generation
  sensor_msgs
  std_msgs
)


add_message_files(
  FILES
  BoundingBox.msg
  BoundingBoxes.msg
)

add_action_files(
  FILES
  CheckForObjects.action
)

generate_messages(
  DEPENDENCIES
  actionlib_msgs
  geometry_msgs
  sensor_msgs
  std_msgs
)

catkin_package(
  CATKIN_DEPENDS
  actionlib_msgs
  geometry_msgs
  sensor_msgs
  message_runtime
  std_msgs
)
