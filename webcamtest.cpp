#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main(){
    
    int rtnKey = 0;

    VideoCapture cap(0);
    if(cap.isOpened())
        cout << "\n========== Camera is ON ========== \n" << endl;
    else
        cout << "\n Wrong Access to camera ! \n" << endl;
    Mat img;

    while(true)
    {
        cap.read(img);
        imshow("Image", img);
        rtnKey = waitKey(1);
        
        if(rtnKey == 27)
            return 0;
    }
    return 0;
}

//Source:
//https://fwanggu-lee.tistory.com/10
//https://velog.io/@parkjbdev/Xcode-OpenCV-%EC%84%A4%EC%B9%98-%EB%B0%8F-%EC%84%B8%ED%8C%85
