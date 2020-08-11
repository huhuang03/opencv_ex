#include "opencv2_ex/opencv2_ex.hpp"
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>

using namespace std;

int main() {
    cv::Mat img = cv::imread("waves.jpg");
    if (img.empty()) {
        cout << "can't open image." << endl;
    }

    ColorHistogram ch = ColorHistogram();
    ch.setSize(8);
    auto rst = ch.process(img);
    // the calcHist I still don't know the result.
    cout << "dims?: " << rst.dims << endl;
    cout << "rows: " << rst.rows << endl;
    cout << "cols: " << rst.cols << endl;
    cout << "first?: " << rst.at<int>(0, 0) << endl;
    return 0;
}
