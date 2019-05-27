#include <iostream>
#include <opencv2/opencv.hpp>
using namespace std;
using namespace cv;

int main(int argc, char* argv[])
{
	cout<<"hello world"<<endl;
	Mat m = imread(argv[1]);
	imshow("test", m);
	waitKey(0);

	return 0;
}
