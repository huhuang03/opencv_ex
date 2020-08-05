#ifndef _H_COLOR_HISTOGRAM
#define _H_COLOR_HISTOGRAM

#include <opencv2/core.hpp>

/**
 * 三个通道的图像，分通道计算直方图
 */
class ColorHistogram {
    private:
    int histSize[3];
    
    public:
    /**
     * 设置直方图方块数
     */
    void setSize(int s1, int s2, int s3);
    
    cv::Mat process(cv::Mat &img);
};


#endif