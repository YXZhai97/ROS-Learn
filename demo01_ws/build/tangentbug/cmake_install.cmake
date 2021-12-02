# Install script for directory: /home/yixing/Desktop/Github/ROS-Learn/demo01_ws/src/tangentbug

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/yixing/Desktop/Github/ROS-Learn/demo01_ws/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/tbug/action" TYPE FILE FILES "/home/yixing/Desktop/Github/ROS-Learn/demo01_ws/src/tangentbug/action/goalStatus.action")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/tbug/msg" TYPE FILE FILES
    "/home/yixing/Desktop/Github/ROS-Learn/demo01_ws/devel/share/tbug/msg/goalStatusAction.msg"
    "/home/yixing/Desktop/Github/ROS-Learn/demo01_ws/devel/share/tbug/msg/goalStatusActionGoal.msg"
    "/home/yixing/Desktop/Github/ROS-Learn/demo01_ws/devel/share/tbug/msg/goalStatusActionResult.msg"
    "/home/yixing/Desktop/Github/ROS-Learn/demo01_ws/devel/share/tbug/msg/goalStatusActionFeedback.msg"
    "/home/yixing/Desktop/Github/ROS-Learn/demo01_ws/devel/share/tbug/msg/goalStatusGoal.msg"
    "/home/yixing/Desktop/Github/ROS-Learn/demo01_ws/devel/share/tbug/msg/goalStatusResult.msg"
    "/home/yixing/Desktop/Github/ROS-Learn/demo01_ws/devel/share/tbug/msg/goalStatusFeedback.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/tbug/cmake" TYPE FILE FILES "/home/yixing/Desktop/Github/ROS-Learn/demo01_ws/build/tangentbug/catkin_generated/installspace/tbug-msg-paths.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/yixing/Desktop/Github/ROS-Learn/demo01_ws/devel/include/tbug")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/yixing/Desktop/Github/ROS-Learn/demo01_ws/devel/share/roseus/ros/tbug")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/yixing/Desktop/Github/ROS-Learn/demo01_ws/devel/share/common-lisp/ros/tbug")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/home/yixing/Desktop/Github/ROS-Learn/demo01_ws/devel/share/gennodejs/ros/tbug")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/usr/bin/python3" -m compileall "/home/yixing/Desktop/Github/ROS-Learn/demo01_ws/devel/lib/python3/dist-packages/tbug")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3/dist-packages" TYPE DIRECTORY FILES "/home/yixing/Desktop/Github/ROS-Learn/demo01_ws/devel/lib/python3/dist-packages/tbug")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/yixing/Desktop/Github/ROS-Learn/demo01_ws/build/tangentbug/catkin_generated/installspace/tbug.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/tbug/cmake" TYPE FILE FILES "/home/yixing/Desktop/Github/ROS-Learn/demo01_ws/build/tangentbug/catkin_generated/installspace/tbug-msg-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/tbug/cmake" TYPE FILE FILES
    "/home/yixing/Desktop/Github/ROS-Learn/demo01_ws/build/tangentbug/catkin_generated/installspace/tbugConfig.cmake"
    "/home/yixing/Desktop/Github/ROS-Learn/demo01_ws/build/tangentbug/catkin_generated/installspace/tbugConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/tbug" TYPE FILE FILES "/home/yixing/Desktop/Github/ROS-Learn/demo01_ws/src/tangentbug/package.xml")
endif()

