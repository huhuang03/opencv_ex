cmake_minimum_required(VERSION 3.12)
project(opencv_ex)


# ugly but for now work.
set(OpenCV_DIR "D:\\Program Files\\opencv\\build")
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

add_subdirectory("include")
add_subdirectory("src")
