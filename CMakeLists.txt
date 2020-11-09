cmake_minimum_required(VERSION 3.8)

project(demo)

# 是否使用自己的 MI 库
option (USE_MI
       "Use provided MI implementation" OFF)

configure_file (
  "${PROJECT_SOURCE_DIR}/config.h.in"
  "${PROJECT_BINARY_DIR}/config.h"
  )
      
      
if(USE_MI)
  message("ON")
else()
  message("OFF")
endif()

aux_source_directory(. DIR_SRCS)
       
add_executable(demo ifdef.cpp)