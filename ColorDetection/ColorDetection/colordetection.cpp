#include "colordetection.h"
#include <cstdio>
#include <QLabel>
#include <QFrame>
#include <QTimer>
#include <QVector>
#include <QMessageBox>
#include <iostream>
#include <opencv2\imgproc.hpp>
#include <opencv2\core.hpp>
#include <opencv2\imgcodecs.hpp>
#include <opencv2\highgui.hpp>
#include <QDebug>
#include <QTextStream>




using namespace cv;
using namespace std;


VideoCapture cap;
int R_MIN = 0;
int R_MAX = 180;
int G_MIN = 0;
int G_MAX = 255;
int B_MIN = 0;
int B_MAX = 255;
bool DetectOP = false;

void ThresholdHSV(Mat ORG, Mat &Threshhold, Scalar Max, Scalar Min){
	//waitKey(0);
	//cout << Min.val[0];
	for (int i = 0; i < Threshhold.rows; i++){
		for (int j = 0; j < Threshhold.cols; j++){
			//waitKey(0);
			//cout << "Max" << Max.val[0] << "  Min " << Min.val[0] << "Pixel0" << (int)Threshhold.at<Vec3b>(i, j)[0];
			if ((int)ORG.at<Vec3b>(i, j)[0] <= Max.val[0] && (int)ORG.at<Vec3b>(i, j)[0] >= Min.val[0] && (int)ORG.at<Vec3b>(i, j)[1] <= Max.val[1] && (int)ORG.at<Vec3b>(i, j)[1] >= Min.val[1] && (int)ORG.at<Vec3b>(i, j)[2] <= Max.val[2] && (int)ORG.at<Vec3b>(i, j)[2] >= Min.val[2])
			{
				Threshhold.at<Vec3b>(i, j)[0] = 255;
				Threshhold.at<Vec3b>(i, j)[1] = 255;
				Threshhold.at<Vec3b>(i, j)[2] = 255;
			}
			else{
				Threshhold.at<Vec3b>(i, j)[0] = 0;
				Threshhold.at<Vec3b>(i, j)[1] = 0;
				Threshhold.at<Vec3b>(i, j)[2] = 0;
			}



		}

	}
}
void erosion(Mat src, int length)
{
	if (length % 2 == 0)
		return;

	Mat _temp; src.copyTo(_temp);

	for (int i = 0; i < _temp.rows; i+=4){

		for (int j = 0; j < _temp.cols; j+=4){
			if (i < (length - 1) / 2 || i >(_temp.rows - 1 - ((length - 1) / 2)) || j < (length - 1) / 2 || j >(_temp.cols - 1 - ((length - 1) / 2))){// CHECK CONDITION AGAIN
				src.at<Vec3b>(i, j)[0] = _temp.at<Vec3b>(i, j)[0];
				src.at<Vec3b>(i, j)[1] = _temp.at<Vec3b>(i, j)[1];
				src.at<Vec3b>(i, j)[2] = _temp.at<Vec3b>(i, j)[2];
			}
			else{

				if ((int)src.at<Vec3b>(i, j)[0] == 0)
					continue;
				//----------------- LAST CHANGED LOG
				Vec3b myPoint = src.at<Vec3b>(i, j);
				//----------------	LAST CHANGED LOG
				// DO Erosion
				// X,Y ???
				Rect Boundries = Rect(j - ((length - 1) / 2), i - ((length - 1) / 2), length, length);
				Mat _subImg = _temp(Boundries);
				int cpt = 0;
				bool found = false;
				for (int _i = 0; _i < length; _i++){
					found = false;
					for (int _j = 0; _j < length; _j++){
						Vec3b _myPoint = _subImg.at<Vec3b>(_i, _j);
						if (myPoint == _myPoint)
							continue;
						if ((int)_subImg.at<Vec3b>(_i, _j)[0] == 0){ src.at<Vec3b>(i, j)[0] = 0; src.at<Vec3b>(i, j)[1] = 0; src.at<Vec3b>(i, j)[2] = 0; found = true; break; }
						else cpt++;
					}
					if (found)
						break;
				}
				if (cpt == length*length -1 && !found)
				{
					src.at<Vec3b>(i, j)[0] = 255; src.at<Vec3b>(i, j)[1] = 255; src.at<Vec3b>(i, j)[2] = 255;
				}




			}
		}
	}


}

void Morph_Del(Mat src, int length)
{
	if (length % 2 == 0)
		return;

	Mat _temp; src.copyTo(_temp);

	for (int i = 0; i < _temp.rows; i+=4){

		for (int j = 0; j < _temp.cols; j+=4){
			if (i < (length - 1) / 2 || i >(_temp.rows - 1 - ((length - 1) / 2)) || j < (length - 1) / 2 || j >(_temp.cols - 1 - ((length - 1) / 2))){// CHECK CONDITION AGAIN
				src.at<Vec3b>(i, j)[0] = _temp.at<Vec3b>(i, j)[0];
				src.at<Vec3b>(i, j)[1] = _temp.at<Vec3b>(i, j)[1];
				src.at<Vec3b>(i, j)[2] = _temp.at<Vec3b>(i, j)[2];
			}
			else{
				//----------------- LAST CHANGED LOG
				Vec3b myPoint = src.at<Vec3b>(i, j);
				//----------------	LAST CHANGED LOG
				if ((int)src.at<Vec3b>(i, j)[0] == 255)
					continue;
				// DO Erosion
				// X,Y ???
				Rect Boundries = Rect(j - ((length - 1) / 2), i - ((length - 1) / 2), length, length);
				Mat _subImg = _temp(Boundries);
				int cpt = 0;
				bool found = false;
				for (int _i = 0; _i < length; _i++){
					found = false;
					for (int _j = 0; _j < length; _j++){
						Vec3b _myPoint = _subImg.at<Vec3b>(_i, _j);
						if (myPoint == _myPoint)
							continue;
						if ((int)_subImg.at<Vec3b>(_i, _j)[0] == 255){ src.at<Vec3b>(i, j)[0] = 255; src.at<Vec3b>(i, j)[1] = 255; src.at<Vec3b>(i, j)[2] = 255; found = true; break; }
						else cpt++;
					}
					if (found)
						break;
				}
				if (cpt == length*length-1 && !found)
				{
					src.at<Vec3b>(i, j)[0] = 0; src.at<Vec3b>(i, j)[1] = 0; src.at<Vec3b>(i, j)[2] = 0;
				}




			}
		}
	}


}

bool getCountour(Mat Threshold, int &MinColPixel, int &MaxColPixel, int &MinRowPixel, int &MaxRowPixel){
	bool firstEntrance = true;
	for (int i = 0; i < Threshold.cols; i++){
		for (int j = 0; j< Threshold.rows; j++){
			if ((int)Threshold.at<Vec3b>(j, i)[0] == 255 && (int)Threshold.at<Vec3b>(j, i)[1] == 255 && (int)Threshold.at<Vec3b>(j, i)[2] == 255)
			{
				
				if (firstEntrance){
					MinColPixel = i;
					MinRowPixel = j;
					firstEntrance = false;
				}
				if (MinRowPixel > j)
					MinRowPixel = j;
				MaxColPixel = i;
				if (MaxRowPixel < j)
					MaxRowPixel = j;


			}

		}
	}
	return !firstEntrance;
}


QString myData[3];
int NbColor = 0;
QTimer *timerCC;
QTimer *timer1;
QMessageBox::StandardButton  replay;
Mat Marker;
Mat Eraser;

ColorDetection::ColorDetection(QWidget *parent)
	: QMainWindow(parent)
{

	ui.setupUi(this);
	if (!cap.open(0))
		return;
	
	
	timer1 = new QTimer(this);

	timerCC = new QTimer(this);

	connect(timer1, SIGNAL(timeout()), this, SLOT(updateTabs()));
	connect(ui.RMinSlider, SIGNAL(valueChanged(int)), this, SLOT(RMinSlider()));
	connect(ui.RMaxSlider, SIGNAL(valueChanged(int)), this, SLOT(RMaxSlider()));
	connect(ui.GMinSlider, SIGNAL(valueChanged(int)), this, SLOT(GMinSlider()));
	connect(ui.GMaxSlider, SIGNAL(valueChanged(int)), this, SLOT(GMaxSlider()));
	connect(ui.BMinSlider, SIGNAL(valueChanged(int)), this, SLOT(BMinSlider()));
	connect(ui.BMaxSlider, SIGNAL(valueChanged(int)), this, SLOT(BMaxSlider()));
	connect(ui.addColor, SIGNAL(clicked(bool)), this, SLOT(_AddColor()));
	connect(ui.StartDetection, SIGNAL(clicked(bool)), this, SLOT(_Detection()));
	connect(timerCC, SIGNAL(timeout()), this, SLOT(_DetectionCC()));
	connect(ui.StopDetection, SIGNAL(clicked(bool)), this, SLOT(_StopDetection()));
	connect(ui.tabWidget, SIGNAL(currentChanged(int)), this, SLOT(CheckDetOP()));
	connect(ui.ResetColors, SIGNAL(clicked(bool)), this, SLOT(ResetColors()));
	connect(ui.DistanceSlider, SIGNAL(valueChanged(int)), this, SLOT(UpdateDistance()));
	connect(ui.ThicknessSlider, SIGNAL(valueChanged(int)), this, SLOT(UpdateDThickness()));



	Marker = imread("marker.png",-1);
	Eraser = imread("Eraser.png", -1);



	timer1->start(60);


}

void ColorDetection::RMinSlider(){ R_MIN = ui.RMinSlider->value();  ui.RValuesText->setText(QString("[" + QString::number(R_MIN) + " , " + QString::number(R_MAX) + "]")); }
void ColorDetection::RMaxSlider(){ R_MAX = ui.RMaxSlider->value();  ui.RValuesText->setText(QString("[" + QString::number(R_MIN) + " , " + QString::number(R_MAX) + "]")); }
void ColorDetection::GMinSlider(){ G_MIN = ui.GMinSlider->value();  ui.GValuesText->setText(QString("[" + QString::number(G_MIN) + " , " + QString::number(G_MAX) + "]")); }
void ColorDetection::GMaxSlider(){ G_MAX = ui.GMaxSlider->value();  ui.GValuesText->setText(QString("[" + QString::number(G_MIN) + " , " + QString::number(G_MAX) + "]")); }
void ColorDetection::BMinSlider(){ B_MIN = ui.BMinSlider->value();  ui.BValuesText->setText(QString("[" + QString::number(B_MIN) + " , " + QString::number(B_MAX) + "]")); }
void ColorDetection::BMaxSlider(){ B_MAX = ui.BMaxSlider->value();  ui.BValuesText->setText(QString("[" + QString::number(B_MIN) + " , " + QString::number(B_MAX) + "]")); }



void ColorDetection::ResetColors(){
	myData[0] = QString("");
	myData[1] = QString("");
	myData[2] = QString("");
	NbColor = 0;
	replay = QMessageBox::information(this, "Information", "All Colors have been cleared", QMessageBox::Ok);

}

void ColorDetection::UpdateDistance(){
	ui.label_12->setText(QString::number(ui.DistanceSlider->value()));
}
void ColorDetection::UpdateDThickness(){
	ui.ThicknessValue->setText(QString::number(ui.ThicknessSlider->value()));
}
void ColorDetection::_AddColor(){
	if (NbColor > 2){
		replay = QMessageBox::warning(this, "Warning", "You have reached the maximum colors!", QMessageBox::Ok);

		return;
	}
	if (!ui.textEdit->toPlainText().isEmpty()){
		if (NbColor < 2){
			//----Maximum 3 color -- Color to be detected
			myData[NbColor] = ui.textEdit->toPlainText() + "#" + QString::number(R_MIN) + "#" + QString::number(G_MIN) + "#" + QString::number(B_MIN) + "#" + QString::number(R_MAX) + "#" + QString::number(G_MAX) + "#" + QString::number(B_MAX);
			NbColor++;
			replay = QMessageBox::information(this, "Information", "Color " + ui.textEdit->toPlainText() + " has been added!", QMessageBox::Ok);

		}
		else{
			//Clearing Color
			myData[NbColor] = QString("ClearingColor#") + QString::number(R_MIN) + "#" + QString::number(G_MIN) + "#" + QString::number(B_MIN) + "#" + QString::number(R_MAX) + "#" + QString::number(G_MAX) + "#" + QString::number(B_MAX);
			NbColor++;
			replay = QMessageBox::information(this, "Information", "Clearing color has been added!", QMessageBox::Ok);

		}
	}
}

void ColorDetection::_Detection(){
	if (NbColor < 1){
		replay = QMessageBox::critical(this, "No Colors", "no colors can be detected, Please add some in the TRAINING Section!", QMessageBox::Ok);
		return;
	}
	if (DetectOP){
		replay = QMessageBox::critical(this, "Conflict", "another detection operation already ON", QMessageBox::Ok);
		return;
	}
	DetectOP = true;

	timer1->stop();
	timerCC->start(60);
	
}
void ColorDetection::_StopDetection(){
	if (DetectOP)
	{
		timerCC->stop();
		DetectOP = false;
		timer1->start(100);
	}


}
void ColorDetection::CheckDetOP(){
	if (DetectOP)
	{
		if (ui.tabWidget->currentIndex() == 1){
			replay = QMessageBox::critical(this, "Conflict", "another detection operation already ON", QMessageBox::Ok);
			ui.tabWidget->setCurrentIndex(0);
			return;
		}
	}


}

Mat Draw;
bool _first = false;
list<Point> _temp;
void ColorDetection::_DetectionCC(){
	Mat Detected;
	Mat img;
	Mat RGB;
	cap >> img;
	cvtColor(img, RGB, COLOR_BGR2HSV);
	
	int _ObjectCordinates[3][4];
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 4; j++){

			if (j == 0)
				_ObjectCordinates[i][0] = img.rows;
			if (j == 1)
				_ObjectCordinates[i][1] = img.cols;
			if (j >=2)
				_ObjectCordinates[i][j] = 0;

		}
	}
	


	bool DiscoveredColors0 = false;
	bool DiscoveredColors1 = false;
	bool DiscoveredColors2 = false;
	



	//initial _ObjectCordinates in the center of the image using cap dimensions

	if (!myData[0].isEmpty()){
		QStringList Info = myData[0].split('#');
		
		Mat threshold;
		
		img.copyTo(threshold);
		ThresholdHSV(RGB, threshold, Scalar(Info[4].toInt(), Info[5].toInt(), Info[6].toInt()), Scalar(Info[1].toInt(), Info[2].toInt(), Info[3].toInt()));
		//inRange(RGB, Scalar(Info[1].toInt(), Info[2].toInt(), Info[3].toInt()), Scalar(Info[4].toInt(), Info[5].toInt(), Info[6].toInt()), threshold);
		//erosion(threshold, 5);
		//Morph_Del(threshold, 5);
		erode(threshold, threshold, getStructuringElement(MORPH_CROSS, Size(5, 5), Point(-1, -1)));
		dilate(threshold, threshold, getStructuringElement(MORPH_CROSS, Size(5, 5), Point(-1, -1)));
		//  MinColPixel, MaxColPixel, MinRowPixel, MaxRowPixel
		DiscoveredColors0 = getCountour(threshold, _ObjectCordinates[0][1], _ObjectCordinates[0][3], _ObjectCordinates[0][0], _ObjectCordinates[0][2]);
	}

	if (!myData[1].isEmpty()){

		QStringList Info = myData[1].split('#');
		Mat threshold;
		img.copyTo(threshold);
		

		ThresholdHSV(RGB, threshold, Scalar(Info[4].toInt(), Info[5].toInt(), Info[6].toInt()), Scalar(Info[1].toInt(), Info[2].toInt(), Info[3].toInt()));
		//erosion(threshold, 5);
		//Morph_Del(threshold, 5);
		//inRange(RGB, Scalar(Info[1].toInt(), Info[2].toInt(), Info[3].toInt()), Scalar(Info[4].toInt(), Info[5].toInt(), Info[6].toInt()), threshold);
		erode(threshold, threshold,getStructuringElement(MORPH_CROSS,Size(5,5),Point(-1,-1)));
		dilate(threshold, threshold, getStructuringElement(MORPH_CROSS, Size(5, 5), Point(-1, -1)));
		
		//  MinColPixel, MaxColPixel, MinRowPixel, MaxRowPixel
		DiscoveredColors1= getCountour(threshold, _ObjectCordinates[1][1], _ObjectCordinates[1][3], _ObjectCordinates[1][0], _ObjectCordinates[1][2]);

	}

	if (!myData[2].isEmpty()){
		QStringList Info = myData[2].split('#');
		Mat threshold;
		img.copyTo(threshold);
		ThresholdHSV(RGB, threshold, Scalar(Info[4].toInt(), Info[5].toInt(), Info[6].toInt()), Scalar(Info[1].toInt(), Info[2].toInt(), Info[3].toInt()));
		//inRange(RGB, Scalar(Info[1].toInt(), Info[2].toInt(), Info[3].toInt()), Scalar(Info[4].toInt(), Info[5].toInt(), Info[6].toInt()), threshold);
		//erosion(threshold, 5);
		//Morph_Del(threshold, 5);
		erode(threshold, threshold, getStructuringElement(MORPH_CROSS, Size(5, 5), Point(-1, -1)));
		dilate(threshold, threshold, getStructuringElement(MORPH_CROSS, Size(5, 5), Point(-1, -1)));
		//  MinColPixel, MaxColPixel, MinRowPixel, MaxRowPixel
		DiscoveredColors2 = getCountour(threshold, _ObjectCordinates[2][1], _ObjectCordinates[2][3], _ObjectCordinates[2][0], _ObjectCordinates[2][2]);
	}




	
	// ----------------- getting Objects ------------------
	img.copyTo(Detected);
	if (DiscoveredColors0){
		Rect Object = Rect(_ObjectCordinates[0][1], _ObjectCordinates[0][0], _ObjectCordinates[0][3] - _ObjectCordinates[0][1], _ObjectCordinates[0][2] - _ObjectCordinates[0][0]);
		rectangle(Detected, Object, Scalar(255, 0, 128), 2, 8, 0);
		putText(Detected, myData[0].split('#')[0].toStdString() + " Detected", Point(_ObjectCordinates[0][1], _ObjectCordinates[0][0] - 10), QT_FONT_NORMAL, 0.4, CV_RGB(255, 0, 128), 0.5);


	}

	if (DiscoveredColors1){
		Rect Object = Rect(_ObjectCordinates[1][1], _ObjectCordinates[1][0], _ObjectCordinates[1][3] - _ObjectCordinates[1][1], _ObjectCordinates[1][2] - _ObjectCordinates[1][0]);
		rectangle(Detected, Object, Scalar(0, 255, 0), 2, 8, 0);
		putText(Detected, myData[1].split('#')[0].toStdString() + " Detected", Point(_ObjectCordinates[1][1], _ObjectCordinates[1][0] - 10), QT_FONT_NORMAL, 0.4, CV_RGB(0, 255, 0), 0.5);
	}
	if (DiscoveredColors2){
		Rect Object = Rect(_ObjectCordinates[2][1], _ObjectCordinates[2][0], _ObjectCordinates[2][3] - _ObjectCordinates[2][1], _ObjectCordinates[2][2] - _ObjectCordinates[2][0]);
		rectangle(Detected, Object, Scalar(0, 255, 255), 2, 8, 0);
		putText(Detected, myData[2].split('#')[0].toStdString() + " Detected", Point(_ObjectCordinates[2][1], _ObjectCordinates[2][0] - 10), QT_FONT_NORMAL, 0.4, CV_RGB(0, 255, 255), 0.5);
	}
	
	


	//Drawing Detected Objects Rectangles
	
	QImage qOriginalImage((uchar*)Detected.data, Detected.cols, Detected.rows, Detected.step, QImage::Format_RGB888);
	ui.RealFrame->setPixmap(QPixmap::fromImage(qOriginalImage.rgbSwapped()));

	//------------- Drawing -----------------------
	if (!_first){
	Draw = Mat(img.rows, img.cols, CV_8UC3);
	Draw.setTo(Scalar(50, 50, 50));
	_first = true;
	}

	//Calculate Distance
	if (DiscoveredColors0 && DiscoveredColors1)
	if (cv::sqrt(cv::abs(Point(_ObjectCordinates[1][1] + (_ObjectCordinates[1][3] - _ObjectCordinates[1][1]) / 2, _ObjectCordinates[1][0] + (_ObjectCordinates[1][2] - _ObjectCordinates[1][0]) / 2).x - Point(_ObjectCordinates[0][1] + (_ObjectCordinates[0][3] - _ObjectCordinates[0][1]) / 2, _ObjectCordinates[0][0] + (_ObjectCordinates[0][2] - _ObjectCordinates[0][0]) / 2).x)*cv::abs(Point(_ObjectCordinates[1][1] + (_ObjectCordinates[1][3] - _ObjectCordinates[1][1]) / 2, _ObjectCordinates[1][0] + (_ObjectCordinates[1][2] - _ObjectCordinates[1][0]) / 2).x - Point(_ObjectCordinates[0][1] + (_ObjectCordinates[0][3] - _ObjectCordinates[0][1]) / 2, _ObjectCordinates[0][0] + (_ObjectCordinates[0][2] - _ObjectCordinates[0][0]) / 2).x) + cv::abs(Point(_ObjectCordinates[0][1] + (_ObjectCordinates[0][3] - _ObjectCordinates[0][1]) / 2, _ObjectCordinates[0][0] + (_ObjectCordinates[0][2] - _ObjectCordinates[0][0]) / 2).y - Point(_ObjectCordinates[1][1] + (_ObjectCordinates[1][3] - _ObjectCordinates[1][1]) / 2, _ObjectCordinates[1][0] + (_ObjectCordinates[1][2] - _ObjectCordinates[1][0]) / 2).x)*cv::abs(Point(_ObjectCordinates[0][1] + (_ObjectCordinates[0][3] - _ObjectCordinates[0][1]) / 2, _ObjectCordinates[0][0] + (_ObjectCordinates[0][2] - _ObjectCordinates[0][0]) / 2).y - Point(_ObjectCordinates[1][1] + (_ObjectCordinates[1][3] - _ObjectCordinates[1][1]) / 2, _ObjectCordinates[1][0] + (_ObjectCordinates[1][2] - _ObjectCordinates[1][0]) / 2).y)*cv::abs(Point(_ObjectCordinates[0][1] + (_ObjectCordinates[0][3] - _ObjectCordinates[0][1]) / 2, _ObjectCordinates[0][0] + (_ObjectCordinates[0][2] - _ObjectCordinates[0][0]) / 2).y - Point(_ObjectCordinates[1][1] + (_ObjectCordinates[1][3] - _ObjectCordinates[1][1]) / 2, _ObjectCordinates[1][0] + (_ObjectCordinates[1][2] - _ObjectCordinates[1][0]) / 2).y))<=ui.DistanceSlider->value()){

		int RawMin, ColMin, RawMax, ColMax;
		if (_ObjectCordinates[0][0] > _ObjectCordinates[1][0])
			RawMin = _ObjectCordinates[1][0];
		else
			RawMin = _ObjectCordinates[0][0];

		if (_ObjectCordinates[0][1] > _ObjectCordinates[1][1])
			ColMin = _ObjectCordinates[1][1];
		else
			ColMin = _ObjectCordinates[0][1];

		if (_ObjectCordinates[0][2] > _ObjectCordinates[1][2])
			RawMax = _ObjectCordinates[0][2];
		else
			RawMax = _ObjectCordinates[1][2];

		if (_ObjectCordinates[0][3] > _ObjectCordinates[1][3])
			ColMax = _ObjectCordinates[0][3];
		else
			ColMax = _ObjectCordinates[1][3];
		// Drawing points
		//putText(Draw, ".", Point(ColMin + (ColMax - ColMin) / 2, RawMin + (RawMax - RawMin) / 2), FONT_HERSHEY_PLAIN, 2, CV_RGB(226, 0, 26), 2);
		
		if (_temp.size() < 2){
			_temp.push_front(Point(ColMin + (ColMax - ColMin) / 2, RawMin + (RawMax - RawMin) / 2));
		}
		else
		{
			Point back = _temp.back();
			Point front = _temp.front();
			cv::line(Draw, front, back, Scalar(26, 0, 226), 2, LINE_AA);
			_temp.pop_back();
			
		}
		
	}
	Mat MarkerDraw;
	Draw.copyTo(MarkerDraw);
	//Cleaning Drawing Area
	if (DiscoveredColors2){
		putText(Draw, ".", Point(_ObjectCordinates[2][1] + (_ObjectCordinates[2][3] - _ObjectCordinates[2][1]) / 2, _ObjectCordinates[2][0] + (_ObjectCordinates[2][2] - _ObjectCordinates[2][0]) / 2), QT_FONT_NORMAL, 0.4, CV_RGB(50, 50, 50), (double)ui.ThicknessSlider->value());
		if (MarkerDraw.rows - (MarkerDraw.rows - (_ObjectCordinates[2][0] + (_ObjectCordinates[2][2] - _ObjectCordinates[2][0]) / 2)) > Eraser.rows && MarkerDraw.cols - (_ObjectCordinates[2][1] + (_ObjectCordinates[2][3] - _ObjectCordinates[2][1]) / 2) > Eraser.cols){
			int k = 0;
			for (int i = Eraser.rows - 1; i >= 0; i--){
				for (int j = 0; j < Eraser.cols; j++){
					if (Eraser.at<Vec4b>(i, j)[3] == 255){
						MarkerDraw.at<Vec3b>((_ObjectCordinates[2][0] + (_ObjectCordinates[2][2] - _ObjectCordinates[2][0]) / 2) - (Eraser.rows - i - 1), (_ObjectCordinates[2][1] + (_ObjectCordinates[2][3] - _ObjectCordinates[2][1]) / 2) + j)[0] = Eraser.at<Vec4b>(i, j)[0];
						MarkerDraw.at<Vec3b>((_ObjectCordinates[2][0] + (_ObjectCordinates[2][2] - _ObjectCordinates[2][0]) / 2) - (Eraser.rows - i - 1), (_ObjectCordinates[2][1] + (_ObjectCordinates[2][3] - _ObjectCordinates[2][1]) / 2) + j)[1] = Eraser.at<Vec4b>(i, j)[1];
						MarkerDraw.at<Vec3b>((_ObjectCordinates[2][0] + (_ObjectCordinates[2][2] - _ObjectCordinates[2][0]) / 2)-(Eraser.rows - i - 1), (_ObjectCordinates[2][1] + (_ObjectCordinates[2][3] - _ObjectCordinates[2][1]) / 2) + j)[2] = Eraser.at<Vec4b>(i, j)[2];


					}
					k++;
				}
			}

		}
	}


	
	
	
	if (_temp.size() != 0){
		Point lastP = _temp.front();
		if (MarkerDraw.rows - (MarkerDraw.rows - lastP.y) > Marker.rows && MarkerDraw.cols -  lastP.x > Marker.cols){
			int k = 0;
			for (int i = Marker.rows-1; i >= 0; i--){
				for (int j = 0; j < Marker.cols; j++){
					if (Marker.at<Vec4b>(i, j)[3] ==255){
						MarkerDraw.at<Vec3b>(lastP.y -(Marker.rows-i-1), lastP.x + j)[0] = Marker.at<Vec4b>(i, j)[0];
						MarkerDraw.at<Vec3b>(lastP.y - (Marker.rows - i - 1), lastP.x + j)[1] = Marker.at<Vec4b>(i, j)[1];
						MarkerDraw.at<Vec3b>(lastP.y - (Marker.rows - i - 1), lastP.x + j)[2] = Marker.at<Vec4b>(i, j)[2];
						

					}
					k++;
				}
			}

		}


	}

	QImage qDraw((uchar*)MarkerDraw.data, MarkerDraw.cols, MarkerDraw.rows, MarkerDraw.step, QImage::Format_RGB888);
	ui.DrawingFrame->setPixmap(QPixmap::fromImage(qDraw.rgbSwapped()));
	
	

}


ColorDetection::~ColorDetection()
{
}


void ColorDetection::updateTabs(){
	Mat img;
	cap >> img;
	Mat threshold;
	Mat RGB;
	img.copyTo(threshold);
	cvtColor(img, RGB, COLOR_BGR2HSV);

	//cv::resize(img, img, Size(200, 200));
	QImage qOriginalImage((uchar*)img.data, img.cols, img.rows, img.step, QImage::Format_RGB888);
	if (ui.tabWidget->currentIndex() == 0){

		ui.RealFrame->setPixmap(QPixmap::fromImage(qOriginalImage.rgbSwapped()));
		ui.OriginalFrame_T->clear();


	}
	else{
		ui.OriginalFrame_T->setPixmap(QPixmap::fromImage(qOriginalImage.rgbSwapped()));
		ui.RealFrame->clear();
		ThresholdHSV(RGB, threshold, Scalar(R_MAX, G_MAX, B_MAX), Scalar(R_MIN, G_MIN, B_MIN));
		//cv::inRange(RGB, Scalar(R_MIN, G_MIN, B_MIN), Scalar(R_MAX, G_MAX, B_MAX), threshold);
		//erosion(threshold, 5);
		//Morph_Del(threshold, 5);
		erode(threshold, threshold, getStructuringElement(MORPH_CROSS, Size(5, 5), Point(-1, -1)));
		dilate(threshold, threshold, getStructuringElement(MORPH_CROSS, Size(5, 5), Point(-1, -1)));
		//Threshold
		QImage qThresh((uchar*)threshold.data, threshold.cols, threshold.rows, threshold.step, QImage::Format_RGB888);
		ui.ThresholdFrame->setPixmap(QPixmap::fromImage(qThresh));



	}



}



