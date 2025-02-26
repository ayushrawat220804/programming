#include <opencv2/opencv.hpp>
using namespace cv;

int main() {
    Mat img = imread("image.jpg");
    if (img.empty()) {
        printf("Could not read the image\n");
        return 1;
    }
    imshow("Display Image", img);
    waitKey(0);
    return 0;
}
