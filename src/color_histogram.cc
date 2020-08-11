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
    float range[2] = {rangeMin, rangeMax};
    const float *ranges[3] = {range, range, range};
    // https://docs.opencv.org/3.4/d8/dbc/tutorial_histogram_calculation.html
    // dims: The number of parameters you want to collect data of. In our example, dims = 1 because we are only counting the intensity values of each pixel (in a greyscale image).
    // What if you want to count two features? In this case your resulting histogram would be a 3D plot (in which x and y would be binx and biny for each feature and z would be the number of counts for each combination of (binx,biny). The same would apply for more features (of course it gets trickier).
    cv::calcHist(&img, 1, channels, cv::Mat(), hist, 3, histSize, ranges);
    return hist;
}

void ColorHistogram::show() {
    for (int i = 0; i < 3; i++) {
        // how to normalize??
        cv::Mat::zeros(255, histSize[i], CV_8UC3);
    }
}