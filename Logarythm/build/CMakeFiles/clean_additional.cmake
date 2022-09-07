# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/example_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/example_autogen.dir/ParseCache.txt"
  "example_autogen"
  )
endif()
