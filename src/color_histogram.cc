#include "opencv2_ex/color_histogram.hpp"
#include <opencv2/imgproc.hpp>

void ColorHistogram::setSize(int s1, int s2, int s3) {
    histSize[0] = s1;
    histSize[1] = s2;
    histSize[2] = s3;
}

void ColorHistogram::setSize(int s) {
    this->setSize(s, s,s);
}

cv::Mat ColorHistogram::process(cv::Mat &img) {
    const int channels[3] = {0, 1, 2};
    cv::Mat hist;
    float rangeMin = 0.0;
    float rangeMax = 256.0;
    float range[2] = {rangeMax, rangeMax};
    const float *ranges[3] = {range, range, range};
    cv::calcHist(&img, 1, channels, cv::Mat(), hist, 3, histSize, ranges);
    return hist;
}