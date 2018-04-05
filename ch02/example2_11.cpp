// Example 2-11. A complete program to read in a color video and write out the
// log-polartransformed video
#include <opencv2/opencv.hpp>
#include <iostream>

int main(int argc, char const *argv[])
{
    cv::namedWindow("Example2_11", cv::WINDOW_AUTOSIZE);
    cv::namedWindow("Log_Polar", cv::WINDOW_AUTOSIZE);

    cv::VideoCapture cap(argv[1]);

    double fps = cap.get(cv::CAP_PROP_FPS);
    cv::Size size((int)cap.get(cv::CAP_PROP_FRAME_WIDTH),
                  (int)cap.get(cv::CAP_PROP_FRAME_HEIGHT));

    cv::VideoWriter writer;
    writer.open(argv[2], CV_FOURCC('M', 'J', 'P', 'G'), fps, size);

    cv::Mat logpolar_frame, bgr_frame;
    for (;;) {
        cap >> bgr_frame;
        if (bgr_frame.empty()) break;

        cv::imshow("Example2_11", bgr_frame);

        cv::logPolar(bgr_frame,      // input frame
                     logpolar_frame, // output
                     cv::Point2f(    // Centerpoint for log-polar transformation
                         bgr_frame.cols / 2, // x
                         bgr_frame.rows / 2  // y
                         ),
                     40,                    // Magnitude(scale parameters)
                     cv::WARP_FILL_OUTLIERS // Fill outliers with zero
        );

        cv::imshow("Log_Polar", logpolar_frame);
        writer << logpolar_frame;

        char c = cv::waitKey(10);
        if (c == 27) break; // Allow the user to break out(Esc)
    }
    cap.release();

    return 0;
}
