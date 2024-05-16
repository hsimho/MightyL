# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/home/hsimho/MightyL/build/monitaal-prefix/src/monitaal-build/pugixml-prefix/src/pugixml"
  "/home/hsimho/MightyL/build/monitaal-prefix/src/monitaal-build/pugixml-prefix/src/pugixml-build"
  "/home/hsimho/MightyL/build/monitaal-prefix/src/monitaal-build/pugixml-prefix"
  "/home/hsimho/MightyL/build/monitaal-prefix/src/monitaal-build/pugixml-prefix/tmp"
  "/home/hsimho/MightyL/build/monitaal-prefix/src/monitaal-build/pugixml-prefix/src/pugixml-stamp"
  "/home/hsimho/MightyL/build/monitaal-prefix/src/monitaal-build/pugixml-prefix/src"
  "/home/hsimho/MightyL/build/monitaal-prefix/src/monitaal-build/pugixml-prefix/src/pugixml-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/hsimho/MightyL/build/monitaal-prefix/src/monitaal-build/pugixml-prefix/src/pugixml-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/home/hsimho/MightyL/build/monitaal-prefix/src/monitaal-build/pugixml-prefix/src/pugixml-stamp${cfgdir}") # cfgdir has leading slash
endif()
