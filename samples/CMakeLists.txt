# copy the image to build.

message("hello in sample")
include_directories(${CMAKE_SOURCE_DIR}/include)
add_executable(user_color_histogram.cc ${CMAKE_SOURCE_DIR}/src/color_histogram.cc)

set(IMAGES imgs/waves.jpg)
FILE(COPY ${IMAGES} DESTINATION .)
FILE(COPY ${IMAGES} DESTINATION Debug)
FILE(COPY ${IMAGES} DESTINATION Release)