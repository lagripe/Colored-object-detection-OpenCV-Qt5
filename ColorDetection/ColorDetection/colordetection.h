#ifndef COLORDETECTION_H
#define COLORDETECTION_H

#include <QtWidgets/QMainWindow>
#include "ui_colordetection.h"

class ColorDetection : public QMainWindow
{

	Q_OBJECT

public :
	ColorDetection(QWidget *parent = 0);
	Ui::ColorDetectionClass ui;
	~ColorDetection();

private slots:
	void updateTabs();
	void RMinSlider();
	void RMaxSlider();
	void GMinSlider();
	void GMaxSlider();
	void BMinSlider();
	void BMaxSlider();
	void _AddColor();
	void _Detection();
	void _DetectionCC();
	void _StopDetection();
	void CheckDetOP();
	void ResetColors();
	void UpdateDistance();
	void UpdateDThickness();
	

};


#endif // COLORDETECTION_H
