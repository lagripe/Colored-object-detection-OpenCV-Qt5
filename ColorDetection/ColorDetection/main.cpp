#include "colordetection.h"
#include <QtWidgets/QApplication>

#include <QLabel>
#include <QFrame>
#include <QTimer>

#include <iostream>
#include <opencv2\imgproc.hpp>
#include <opencv2\core.hpp>
#include <opencv2\imgcodecs.hpp>
#include <opencv2\highgui.hpp>

using namespace cv;
using namespace std;


int main(int argc, char *argv[])
{
	

	QApplication a(argc, argv);
	ColorDetection w;
	//w.showMaximized();
	w.show();
	return a.exec();
}
