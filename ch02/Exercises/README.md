# Chapter 2 Introduction to OpenCV Exercises

>Download and install OpenCV if you have not already done so. Systematically go through the directory structure. Note in particular the docs directory, where you can load index.htm, which links to the main documentation of the library. Further explore the main areas of the library. The core module contains the basic data structures and algorithms, imgproc contains the image processing and vision algorithms, ml includes algorithms for machine learning and clustering, and highgui contains the I/O functions. Check out the .../samples/cpp directory, where many useful examples are stored.

## 1.
>Using the install and build instructions in this book or at http://opencv.org, build the library in both the debug and the release versions. This may take some time, but you will need the resulting library and dll files. Make sure you set the cmake file to build the samples .../opencv/samples/ directory.


## 2.
>Go to where you built the .../opencv/samples/ directory (we build in .../trunk/ eclipse_build/bin) and look for lkdemo.cpp (this is an example motion-tracking program). Attach a camera to your system and run the code. With the display window selected, type r to initialize tracking. You can add points by clicking on


## 3.
>Use the capture and store code in Example 2-11 together with the PyrDown() code of Example 2-6 to create a program that reads from a camera and stores downsampled color images to disk.

[ex2_03.cpp](ex2_03.cpp)


## 4.
>Modify the code in Exercise 3 and combine it with the window display code in Example 2-2 to display the frames as they are processed.

前面的练习3已经实现了。

## 5.
>Modify the program of Exercise 4 with a trackbar slider control from Example 2-4 so that the user can dynamically vary the pyramid downsampling reduction level by factors of between 2 and 8. You may skip writing this to disk, but you should display the results.

[ex2_05.cpp](ex2_05.cpp)
