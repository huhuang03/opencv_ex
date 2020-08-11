# copy the image to build.

message("hello in sample")
message(${PROJECT_SOURCE_DIR})
include_directories(${PROJECT_SOURCE_DIR}/include)
add_executable(use_color_histogram use_color_histogram.cc ${PROJECT_SOURCE_DIR}/src/color_histogram.cc)
target_link_libraries(use_color_histogram ${OpenCV_LIBS})

set(IMAGES imgs/waves.jpg)
FILE(COPY ${IMAGES} DESTINATION .)
FILE(COPY ${IMAGES} DESTINATION Debug)
FILE(COPY ${IMAGES} DESTINATION Release)