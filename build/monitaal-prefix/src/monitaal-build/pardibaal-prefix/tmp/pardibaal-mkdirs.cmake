# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/home/hsimho/MightyL/build/monitaal-prefix/src/monitaal-build/pardibaal-prefix/src/pardibaal"
  "/home/hsimho/MightyL/build/monitaal-prefix/src/monitaal-build/pardibaal-prefix/src/pardibaal-build"
  "/home/hsimho/MightyL/build/monitaal-prefix/src/monitaal-build/pardibaal-prefix"
  "/home/hsimho/MightyL/build/monitaal-prefix/src/monitaal-build/pardibaal-prefix/tmp"
  "/home/hsimho/MightyL/build/monitaal-prefix/src/monitaal-build/pardibaal-prefix/src/pardibaal-stamp"
  "/home/hsimho/MightyL/build/monitaal-prefix/src/monitaal-build/pardibaal-prefix/src"
  "/home/hsimho/MightyL/build/monitaal-prefix/src/monitaal-build/pardibaal-prefix/src/pardibaal-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/hsimho/MightyL/build/monitaal-prefix/src/monitaal-build/pardibaal-prefix/src/pardibaal-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/home/hsimho/MightyL/build/monitaal-prefix/src/monitaal-build/pardibaal-prefix/src/pardibaal-stamp${cfgdir}") # cfgdir has leading slash
endif()
