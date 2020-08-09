cmake_minimum_required(VERSION 3.12)
project(opencv_ex)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# ugly but for now work.
set(OpenCV_DIR "D:\\Program Files\\opencv\\build")
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

include(src/cmake/GenConfig.cmake)


add_subdirectory("include")
add_subdirectory("src")

# samples
option(BUILD_SAMPLES "option that build the sample or not" TRUE)

if(BUILD_SAMPLES)
    add_subdirectory(samples)
endif()