// Example 2-5. Loading and then smoothing an image before it is displayed on
// the screen
#include <opencv2/opencv.hpp>

void example2_5(const cv::Mat &image)
{
    // Create some windows to show the input
    // and output images in.

    cv::namedWindow("Example2_5-in", cv::WINDOW_AUTOSIZE);
    cv::namedWindow("Example2_5-out", cv::WINDOW_AUTOSIZE);

    // Create a window to show out input image
    cv::imshow("Example2_5-in", image);

    cv::Mat out;

    // Do the smoothing
    // (Note: Could use GaussianBlur(), blur(), medianBlur() or
    // bilateralFilter().)
    cv::GaussianBlur(image, out, cv::Size(5, 5), 3, 3);
    cv::GaussianBlur(out, out, cv::Size(5, 5), 3, 3);

    // Show the smoothed image
    cv::imshow("Example2_5-out", out);

    // Wait for the user to hit a key, windows will self destruct.
    cv::waitKey(0);
}

int main(int argc, char const *argv[])
{
    cv::Mat img = cv::imread(argv[1], -1);
    example2_5(img);
    return 0;
}
