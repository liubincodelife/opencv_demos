cmake_minimum_required(VERSION 2.8)

project( OpenCV_Demos )

set( CMAKE_BUILD_TYPE release )
set( CMAKE_CXX_FLAGS "-std=c++11 -O3" )

find_package( OpenCV REQUIRED )

include_directories( ${OpenCV_INCLUDE_DIRS} )

aux_source_directory(. DIR_SRCS)

add_executable( OpenCV_Demo ${DIR_SRCS})
target_link_libraries( OpenCV_Demo ${OpenCV_LIBS} )