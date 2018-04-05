// Modify the program of Exercise 4 with a trackbar slider control from Example
// 2-4 so that the user can dynamically vary the pyramid downsampling reduction
// level by factors of between 2 and 8. You may skip writing this to disk, but
// you should display the results.
#include <opencv2/opencv.hpp>

// Global variables
const int g_minFactor = 2;
const int g_maxFactor = 8;
int g_slider = 2; // slider pos value
cv::Size g_sz;

void onTrackbar(int, void *)
{
    std::cout << g_slider << std::endl;
}

cv::VideoCapture g_cap;

int main(int argc, char const *argv[])
{
    cv::namedWindow("Exercise2_05", cv::WINDOW_AUTOSIZE);
    g_cap.open(0); // open camera

    int tmpw = (int)g_cap.get(cv::CAP_PROP_FRAME_WIDTH);
    int tmph = (int)g_cap.get(cv::CAP_PROP_FRAME_HEIGHT);

    cv::createTrackbar("Factor", "Exercise2_05", &g_slider,
                       g_maxFactor - g_minFactor, onTrackbar);
    g_sz = cv::Size(tmpw / g_slider, tmph / g_slider);

    cv::Mat img_raw, img_pyr;
    for (;;) {
        g_cap >> img_raw;
        cv::pyrDown(img_raw, img_pyr, g_sz);
        cv::imshow("Exercise2_05", img_pyr);

        if (cv::waitKey(10) == 27) break;
    }
    return 0;
}
