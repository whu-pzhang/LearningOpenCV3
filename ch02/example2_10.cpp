// Example 2-10. The same object can load videos from a camera or a file
#include <opencv2/opencv.hpp>
#include <iostream>

int main(int argc, char const *argv[])
{
    cv::namedWindow("Example2_10", cv::WINDOW_AUTOSIZE);

    cv::VideoCapture cap;
    if (argc == 1)
        cap.open(0);
    else
        cap.open(argv[1]);

    if (!cap.isOpened()) {
        std::cerr << "Couldn't open capture." << std::endl;
        return -1;
    }

    cv::Mat frame;
    for (;;) {
        cap >> frame;
        if (frame.empty()) break;
        imshow("Example2_10", frame);
        if (cv::waitKey(17) >= 0) break;
    }

    return 0;
}
