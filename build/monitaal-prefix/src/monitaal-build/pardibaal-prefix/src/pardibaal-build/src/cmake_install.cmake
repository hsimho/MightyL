# Install script for directory: /home/hsimho/MightyL/build/monitaal-prefix/src/monitaal-build/pardibaal-prefix/src/pardibaal/src

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/hsimho/MightyL/build/monitaal-prefix/src/monitaal-build/external")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
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

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/home/hsimho/MightyL/build/monitaal-prefix/src/monitaal-build/pardibaal-prefix/src/pardibaal-build/lib/libpardibaal.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/pardibaal" TYPE FILE FILES
    "/home/hsimho/MightyL/build/monitaal-prefix/src/monitaal-build/pardibaal-prefix/src/pardibaal/src/pardibaal/Federation.h"
    "/home/hsimho/MightyL/build/monitaal-prefix/src/monitaal-build/pardibaal-prefix/src/pardibaal/src/pardibaal/DBM.h"
    "/home/hsimho/MightyL/build/monitaal-prefix/src/monitaal-build/pardibaal-prefix/src/pardibaal/src/pardibaal/bounds_table_t.h"
    "/home/hsimho/MightyL/build/monitaal-prefix/src/monitaal-build/pardibaal-prefix/src/pardibaal/src/pardibaal/bound_t.h"
    "/home/hsimho/MightyL/build/monitaal-prefix/src/monitaal-build/pardibaal-prefix/src/pardibaal/src/pardibaal/difference_bound_t.h"
    )
endif()

