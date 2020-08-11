#ifndef _H_COLOR_HISTOGRAM
#define _H_COLOR_HISTOGRAM

#include <opencv2/core.hpp>

/**
 * 三个通道的图像，分通道计算直方图
 * This class wrap the cv2::calcHist method
 * And this class assume that we are handling the 3 channles img. and the depth is uint8??
 */
class ColorHistogram {
    private:
    /**
     * 
     */
    int histSize[3];
    
    public:

    /**
     * 设置直方图方块数
     */
    void setSize(int s1, int s2, int s3);

    /**
     * same as setSize(size, size, size);
     */
    void setSize(int size);
    
    cv::Mat process(cv::Mat &img);

    void show();
};


#endif