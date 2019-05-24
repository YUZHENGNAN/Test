#include <iostream>
#include <opencv2/opencv.hpp>
using namespace std;
using namespace cv;

int main(int argc, char* argv[])
{
	cout<<"hello world"<<endl;
	Mat m = imread("../opencv-logo.png");
	imshow("test", m);
	waitKey(0);

	enum Test{
		T1,
		T2,
	};

	vector<int> test(T2);
	cout<<T2<<endl;
	cout<<test.size()<<endl;
	

	return 0;
}