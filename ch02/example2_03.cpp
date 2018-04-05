#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <string>

using namespace cv;

int main(int argc, char const *argv[])
{
    namedWindow("Example3", cv::WINDOW_AUTOSIZE);
    VideoCapture cap;
    cap.open(std::string(argv[1]));

    Mat frame;
    for (;;) {
        cap >> frame;
        if (frame.empty()) break;
        imshow("Example3", frame);
        if (waitKey(33) >= 0) break;
    }

    return 0;
}
