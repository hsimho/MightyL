# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/home/hsimho/MightyL/build/monitaal-prefix/src/monitaal"
  "/home/hsimho/MightyL/build/monitaal-prefix/src/monitaal-build"
  "/home/hsimho/MightyL/build/monitaal-prefix"
  "/home/hsimho/MightyL/build/monitaal-prefix/tmp"
  "/home/hsimho/MightyL/build/monitaal-prefix/src/monitaal-stamp"
  "/home/hsimho/MightyL/build/monitaal-prefix/src"
  "/home/hsimho/MightyL/build/monitaal-prefix/src/monitaal-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/hsimho/MightyL/build/monitaal-prefix/src/monitaal-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/home/hsimho/MightyL/build/monitaal-prefix/src/monitaal-stamp${cfgdir}") # cfgdir has leading slash
endif()
