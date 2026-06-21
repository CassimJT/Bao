# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/appBao_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/appBao_autogen.dir/ParseCache.txt"
  "appBao_autogen"
  )
endif()
