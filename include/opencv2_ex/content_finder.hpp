#ifndef _H_CONTENT_FINDER
#define _H_CONTENT_FILDER

#include <opencv2/core.hpp>

/**
 * Hello york, do yu real know how this works??
 * And this is from opencv_cook_book charpter 4.5.3
 * Maybe we can check some time later..
 */
class ContentFinder {
    private:
    float hranges[2];
    const float* ranges[3];
    int channels[3];
    float threshold;
    cv::Mat histogram;

    public:
    ContentFinder();
    void setHistogram(const cv::Mat &h);
    void setThreShold(float threashold);
    cv::Mat find(const cv::Mat &img);
    cv::Mat find(const cv::Mat &img, float minVal, float maxVal, int *channels);
};

#endif