add_library(opencv_ex color_histogram.cc histogram_1d.cc)

link_libraries(opencv_ex ${OpenCV_LIBS})