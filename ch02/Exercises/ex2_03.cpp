// Use the capture and store code in Example 2-11 together with the PyrDown()
// code of Example 2-6 to create a program that reads from a camera and stores
// downsampled color images to disk.
#include <opencv2/opencv.hpp>
#include <string>

int main(int argc, char const *argv[])
{

    cv::VideoCapture cap(0);
    cv::Mat frame, img_pyr;
    cv::namedWindow("Exercise2_03", cv::WINDOW_AUTOSIZE);
    cv::namedWindow("Exercise2_03_pyrDown", cv::WINDOW_AUTOSIZE);

    int cnt = 0;
    for (;;) {
        if (!cap.isOpened()) break;
        cap >> frame;
        cv::imshow("Exercise2_03", frame);

        cv::pyrDown(frame, img_pyr);
        cv::imshow("Exercise2_03_pyrDown", img_pyr);

        char c = cv::waitKey(10);
        if (c == 's') {
            cnt += 1;
            cv::imwrite(std::string("pyrDownImg-") + std::to_string(cnt) +
                            ".jpg",
                        img_pyr);
        }
        if (c == 27) break;
    }

    cap.release();

    return 0;
}
