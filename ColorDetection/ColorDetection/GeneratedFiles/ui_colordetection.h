/********************************************************************************
** Form generated from reading UI file 'colordetection.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLORDETECTION_H
#define UI_COLORDETECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ColorDetectionClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *RealFrame;
    QLabel *DrawingFrame;
    QPushButton *StartDetection;
    QLabel *label;
    QLabel *label_2;
    QPushButton *StopDetection;
    QSlider *DistanceSlider;
    QLabel *label_11;
    QLabel *label_12;
    QSlider *ThicknessSlider;
    QLabel *label_13;
    QLabel *ThicknessValue;
    QWidget *tab_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *OriginalFrame_T;
    QLabel *ThresholdFrame;
    QSlider *RMinSlider;
    QSlider *GMinSlider;
    QSlider *BMinSlider;
    QSlider *RMaxSlider;
    QSlider *GMaxSlider;
    QSlider *BMaxSlider;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QTextEdit *textEdit;
    QLabel *label_10;
    QPushButton *addColor;
    QTextEdit *RValuesText;
    QTextEdit *GValuesText;
    QTextEdit *BValuesText;
    QPushButton *ResetColors;

    void setupUi(QMainWindow *ColorDetectionClass)
    {
        if (ColorDetectionClass->objectName().isEmpty())
            ColorDetectionClass->setObjectName(QStringLiteral("ColorDetectionClass"));
        ColorDetectionClass->resize(1313, 692);
        ColorDetectionClass->setStyleSheet(QLatin1String("QMainWindow::separator {\n"
"    background: yellow;\n"
"    width: 10px; /* when vertical */\n"
"    height: 10px; /* when horizontal */\n"
"}\n"
"\n"
""));
        centralWidget = new QWidget(ColorDetectionClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QLatin1String("QWidget {\n"
"background: #3c3c3c;\n"
"\n"
"}\n"
""));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setStyleSheet(QLatin1String("QTabWidget::pane { /* The tab widget frame */\n"
"border-top: 0px solid #C2C7CB;\n"
"}\n"
"QTabWidget::tab-bar {\n"
"left: 5px; /* move to the right by 5px */\n"
"}\n"
"/* Style the tab using the tab sub-control. Note that it reads QTabBar _not_ QTabWidget */\n"
"QTabBar::tab {\n"
"background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #E1E1E1, stop: 0.4 #DDDDDD, stop: 0.5 #D8D8D8, stop: 1.0 #D3D3D3);\n"
"border: 2px solid #C4C4C3;\n"
"border-bottom-color: #C2C7CB; /* same as the pane color */\n"
"border-top-left-radius: 7px;\n"
"border-top-right-radius: 7px;\n"
"min-width: 15ex;\n"
"padding: 7px;\n"
"}\n"
"QTabBar::tab:selected, QTabBar::tab:hover {\n"
"background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #54ff9f, stop: 0.4 #54ff9f, stop: 0.5 #54ff9f, stop: 1.0 #54ff9f);\n"
"}\n"
"QTabBar::tab:selected {\n"
"border-color: #54ff9f;\n"
"border-bottom-color: #54ff9f; /* same as pane color */\n"
"}\n"
"QTabBar::tab:!selected {\n"
"margin-top: 2px; /* make non-selected tabs look smaller */\n"
""
                        "}"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        RealFrame = new QLabel(tab);
        RealFrame->setObjectName(QStringLiteral("RealFrame"));
        RealFrame->setGeometry(QRect(10, 30, 640, 480));
        RealFrame->setMinimumSize(QSize(640, 480));
        RealFrame->setMaximumSize(QSize(16777215, 271));
        RealFrame->setFrameShape(QFrame::StyledPanel);
        DrawingFrame = new QLabel(tab);
        DrawingFrame->setObjectName(QStringLiteral("DrawingFrame"));
        DrawingFrame->setGeometry(QRect(650, 30, 640, 480));
        DrawingFrame->setMinimumSize(QSize(640, 480));
        DrawingFrame->setMaximumSize(QSize(16777215, 271));
        DrawingFrame->setFrameShape(QFrame::StyledPanel);
        StartDetection = new QPushButton(tab);
        StartDetection->setObjectName(QStringLiteral("StartDetection"));
        StartDetection->setGeometry(QRect(486, 530, 161, 51));
        QFont font;
        font.setFamily(QStringLiteral("Tahoma"));
        font.setPointSize(16);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        StartDetection->setFont(font);
        StartDetection->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 1px solid rgb(84, 255, 159);\n"
"	background-color: rgb(60, 60, 60) ;\n"
"	color: rgb(84, 255, 159);\n"
"	font: 16pt \"Tahoma\";\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color:rgb(84, 255, 159);\n"
"	color:white;\n"
"}"));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(13, 12, 47, 13));
        label->setStyleSheet(QLatin1String("QLabel{\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(650, 10, 67, 16));
        label_2->setStyleSheet(QLatin1String("QLabel{\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        StopDetection = new QPushButton(tab);
        StopDetection->setObjectName(QStringLiteral("StopDetection"));
        StopDetection->setGeometry(QRect(656, 530, 161, 51));
        StopDetection->setFont(font);
        StopDetection->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 1px solid #c32129;\n"
"	background-color: rgb(60, 60, 60) ;\n"
"	color: #c32129;\n"
"	font: 16pt \"Tahoma\";\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color:#c32129;\n"
"	color:white;\n"
"}"));
        DistanceSlider = new QSlider(tab);
        DistanceSlider->setObjectName(QStringLiteral("DistanceSlider"));
        DistanceSlider->setGeometry(QRect(92, 516, 160, 22));
        DistanceSlider->setStyleSheet(QLatin1String("QSlider::groove:horizontal {\n"
"border: 1px solid #999999;\n"
"height: 8px; /* the groove expands to the size of the slider by default. by giving it a height, it has a fixed size */\n"
"background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #B1B1B1, stop:1 #c4c4c4);\n"
"}\n"
"QSlider::handle:horizontal {\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #b4b4b4, stop:1 #8f8f8f);\n"
"border: 1px solid #5c5c5c;\n"
"width: 18px;\n"
"margin: -2px 0; /* handle is placed by default on the contents rect of the groove. Expand outside the groove */\n"
"border-radius: 3px;\n"
"}\n"
"QSlider::add-page:qlineargradient {\n"
"background: lightgrey;\n"
"border-top-right-radius: 9px;\n"
"border-bottom-right-radius: 9px;\n"
"border-top-left-radius: 0px;\n"
"border-bottom-left-radius: 0px;\n"
"}\n"
"QSlider::sub-page:qlineargradient {\n"
"background: #54ff9f;\n"
"border-top-right-radius: 0px;\n"
"border-bottom-right-radius: 0px;\n"
"border-top-left-radius: 9px;\n"
"border-bottom-left-radius: 9px;\n"
"}"));
        DistanceSlider->setMinimum(0);
        DistanceSlider->setMaximum(1000);
        DistanceSlider->setPageStep(1);
        DistanceSlider->setValue(0);
        DistanceSlider->setOrientation(Qt::Horizontal);
        label_11 = new QLabel(tab);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(10, 520, 80, 13));
        label_11->setStyleSheet(QLatin1String("QLabel{\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        label_12 = new QLabel(tab);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(152, 536, 40, 13));
        label_12->setStyleSheet(QLatin1String("QLabel{\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        label_12->setAlignment(Qt::AlignCenter);
        ThicknessSlider = new QSlider(tab);
        ThicknessSlider->setObjectName(QStringLiteral("ThicknessSlider"));
        ThicknessSlider->setGeometry(QRect(92, 556, 160, 22));
        ThicknessSlider->setStyleSheet(QLatin1String("QSlider::groove:horizontal {\n"
"border: 1px solid #999999;\n"
"height: 8px; /* the groove expands to the size of the slider by default. by giving it a height, it has a fixed size */\n"
"background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #B1B1B1, stop:1 #c4c4c4);\n"
"}\n"
"QSlider::handle:horizontal {\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #b4b4b4, stop:1 #8f8f8f);\n"
"border: 1px solid #5c5c5c;\n"
"width: 18px;\n"
"margin: -2px 0; /* handle is placed by default on the contents rect of the groove. Expand outside the groove */\n"
"border-radius: 3px;\n"
"}\n"
"QSlider::add-page:qlineargradient {\n"
"background: lightgrey;\n"
"border-top-right-radius: 9px;\n"
"border-bottom-right-radius: 9px;\n"
"border-top-left-radius: 0px;\n"
"border-bottom-left-radius: 0px;\n"
"}\n"
"QSlider::sub-page:qlineargradient {\n"
"background: #54ff9f;\n"
"border-top-right-radius: 0px;\n"
"border-bottom-right-radius: 0px;\n"
"border-top-left-radius: 9px;\n"
"border-bottom-left-radius: 9px;\n"
"}"));
        ThicknessSlider->setMaximum(1000);
        ThicknessSlider->setPageStep(1);
        ThicknessSlider->setOrientation(Qt::Horizontal);
        label_13 = new QLabel(tab);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(10, 560, 80, 13));
        label_13->setStyleSheet(QLatin1String("QLabel{\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        ThicknessValue = new QLabel(tab);
        ThicknessValue->setObjectName(QStringLiteral("ThicknessValue"));
        ThicknessValue->setGeometry(QRect(152, 574, 40, 13));
        ThicknessValue->setStyleSheet(QLatin1String("QLabel{\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        ThicknessValue->setAlignment(Qt::AlignCenter);
        tabWidget->addTab(tab, QString());
        DrawingFrame->raise();
        StartDetection->raise();
        label->raise();
        label_2->raise();
        RealFrame->raise();
        StopDetection->raise();
        DistanceSlider->raise();
        label_11->raise();
        label_12->raise();
        ThicknessSlider->raise();
        label_13->raise();
        ThicknessValue->raise();
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(650, 10, 47, 13));
        label_3->setStyleSheet(QLatin1String("QLabel{\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(13, 12, 50, 13));
        label_4->setStyleSheet(QLatin1String("QLabel{\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        OriginalFrame_T = new QLabel(tab_2);
        OriginalFrame_T->setObjectName(QStringLiteral("OriginalFrame_T"));
        OriginalFrame_T->setGeometry(QRect(10, 30, 640, 480));
        OriginalFrame_T->setMinimumSize(QSize(640, 480));
        OriginalFrame_T->setFrameShape(QFrame::StyledPanel);
        ThresholdFrame = new QLabel(tab_2);
        ThresholdFrame->setObjectName(QStringLiteral("ThresholdFrame"));
        ThresholdFrame->setGeometry(QRect(650, 30, 640, 480));
        ThresholdFrame->setMinimumSize(QSize(640, 480));
        ThresholdFrame->setFrameShape(QFrame::StyledPanel);
        RMinSlider = new QSlider(tab_2);
        RMinSlider->setObjectName(QStringLiteral("RMinSlider"));
        RMinSlider->setGeometry(QRect(70, 530, 160, 22));
        RMinSlider->setStyleSheet(QLatin1String("QSlider::groove:horizontal {\n"
"border: 1px solid #999999;\n"
"height: 8px; /* the groove expands to the size of the slider by default. by giving it a height, it has a fixed size */\n"
"background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #B1B1B1, stop:1 #c4c4c4);\n"
"}\n"
"QSlider::handle:horizontal {\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #b4b4b4, stop:1 #8f8f8f);\n"
"border: 1px solid #5c5c5c;\n"
"width: 18px;\n"
"margin: -2px 0; /* handle is placed by default on the contents rect of the groove. Expand outside the groove */\n"
"border-radius: 3px;\n"
"}\n"
"\n"
"QSlider::add-page:qlineargradient {\n"
"background:  #54ff9f;\n"
"border-top-right-radius: 9px;\n"
"border-bottom-right-radius: 9px;\n"
"border-top-left-radius: 0px;\n"
"border-bottom-left-radius: 0px;\n"
"}\n"
"\n"
"QSlider::sub-page:qlineargradient {\n"
"background: lightgrey;\n"
"border-top-right-radius: 0px;\n"
"border-bottom-right-radius: 0px;\n"
"border-top-left-radius: 9px;\n"
"border-bottom-left-radius: 9px;\n"
""
                        "}"));
        RMinSlider->setMaximum(180);
        RMinSlider->setOrientation(Qt::Horizontal);
        GMinSlider = new QSlider(tab_2);
        GMinSlider->setObjectName(QStringLiteral("GMinSlider"));
        GMinSlider->setGeometry(QRect(70, 570, 160, 22));
        GMinSlider->setStyleSheet(QLatin1String("QSlider::groove:horizontal {\n"
"border: 1px solid #999999;\n"
"height: 8px; /* the groove expands to the size of the slider by default. by giving it a height, it has a fixed size */\n"
"background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #B1B1B1, stop:1 #c4c4c4);\n"
"}\n"
"QSlider::handle:horizontal {\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #b4b4b4, stop:1 #8f8f8f);\n"
"border: 1px solid #5c5c5c;\n"
"width: 18px;\n"
"margin: -2px 0; /* handle is placed by default on the contents rect of the groove. Expand outside the groove */\n"
"border-radius: 3px;\n"
"}\n"
"\n"
"QSlider::add-page:qlineargradient {\n"
"background:  #54ff9f;\n"
"border-top-right-radius: 9px;\n"
"border-bottom-right-radius: 9px;\n"
"border-top-left-radius: 0px;\n"
"border-bottom-left-radius: 0px;\n"
"}\n"
"\n"
"QSlider::sub-page:qlineargradient {\n"
"background: lightgrey;\n"
"border-top-right-radius: 0px;\n"
"border-bottom-right-radius: 0px;\n"
"border-top-left-radius: 9px;\n"
"border-bottom-left-radius: 9px;\n"
""
                        "}"));
        GMinSlider->setMaximum(255);
        GMinSlider->setOrientation(Qt::Horizontal);
        BMinSlider = new QSlider(tab_2);
        BMinSlider->setObjectName(QStringLiteral("BMinSlider"));
        BMinSlider->setGeometry(QRect(70, 600, 160, 22));
        BMinSlider->setStyleSheet(QLatin1String("QSlider::groove:horizontal {\n"
"border: 1px solid #999999;\n"
"height: 8px; /* the groove expands to the size of the slider by default. by giving it a height, it has a fixed size */\n"
"background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #B1B1B1, stop:1 #c4c4c4);\n"
"}\n"
"QSlider::handle:horizontal {\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #b4b4b4, stop:1 #8f8f8f);\n"
"border: 1px solid #5c5c5c;\n"
"width: 18px;\n"
"margin: -2px 0; /* handle is placed by default on the contents rect of the groove. Expand outside the groove */\n"
"border-radius: 3px;\n"
"}\n"
"\n"
"QSlider::add-page:qlineargradient {\n"
"background:  #54ff9f;\n"
"border-top-right-radius: 9px;\n"
"border-bottom-right-radius: 9px;\n"
"border-top-left-radius: 0px;\n"
"border-bottom-left-radius: 0px;\n"
"}\n"
"\n"
"QSlider::sub-page:qlineargradient {\n"
"background: lightgrey;\n"
"border-top-right-radius: 0px;\n"
"border-bottom-right-radius: 0px;\n"
"border-top-left-radius: 9px;\n"
"border-bottom-left-radius: 9px;\n"
""
                        "}"));
        BMinSlider->setMaximum(255);
        BMinSlider->setOrientation(Qt::Horizontal);
        RMaxSlider = new QSlider(tab_2);
        RMaxSlider->setObjectName(QStringLiteral("RMaxSlider"));
        RMaxSlider->setGeometry(QRect(250, 530, 160, 22));
        RMaxSlider->setStyleSheet(QLatin1String("QSlider::groove:horizontal {\n"
"border: 1px solid #999999;\n"
"height: 8px; /* the groove expands to the size of the slider by default. by giving it a height, it has a fixed size */\n"
"background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #B1B1B1, stop:1 #c4c4c4);\n"
"}\n"
"QSlider::handle:horizontal {\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #b4b4b4, stop:1 #8f8f8f);\n"
"border: 1px solid #5c5c5c;\n"
"width: 18px;\n"
"margin: -2px 0; /* handle is placed by default on the contents rect of the groove. Expand outside the groove */\n"
"border-radius: 3px;\n"
"}\n"
"\n"
"QSlider::add-page:qlineargradient {\n"
"background: lightgrey;\n"
"border-top-right-radius: 9px;\n"
"border-bottom-right-radius: 9px;\n"
"border-top-left-radius: 0px;\n"
"border-bottom-left-radius: 0px;\n"
"}\n"
"QSlider::sub-page:qlineargradient {\n"
"background: #54ff9f;\n"
"border-top-right-radius: 0px;\n"
"border-bottom-right-radius: 0px;\n"
"border-top-left-radius: 9px;\n"
"border-bottom-left-radius: 9px;\n"
"}"));
        RMaxSlider->setMaximum(180);
        RMaxSlider->setValue(180);
        RMaxSlider->setSliderPosition(180);
        RMaxSlider->setOrientation(Qt::Horizontal);
        RMaxSlider->setInvertedAppearance(false);
        RMaxSlider->setInvertedControls(false);
        GMaxSlider = new QSlider(tab_2);
        GMaxSlider->setObjectName(QStringLiteral("GMaxSlider"));
        GMaxSlider->setGeometry(QRect(250, 570, 160, 22));
        GMaxSlider->setStyleSheet(QLatin1String("QSlider::groove:horizontal {\n"
"border: 1px solid #999999;\n"
"height: 8px; /* the groove expands to the size of the slider by default. by giving it a height, it has a fixed size */\n"
"background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #B1B1B1, stop:1 #c4c4c4);\n"
"}\n"
"QSlider::handle:horizontal {\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #b4b4b4, stop:1 #8f8f8f);\n"
"border: 1px solid #5c5c5c;\n"
"width: 18px;\n"
"margin: -2px 0; /* handle is placed by default on the contents rect of the groove. Expand outside the groove */\n"
"border-radius: 3px;\n"
"}\n"
"\n"
"QSlider::add-page:qlineargradient {\n"
"background: lightgrey;\n"
"border-top-right-radius: 9px;\n"
"border-bottom-right-radius: 9px;\n"
"border-top-left-radius: 0px;\n"
"border-bottom-left-radius: 0px;\n"
"}\n"
"QSlider::sub-page:qlineargradient {\n"
"background: #54ff9f;\n"
"border-top-right-radius: 0px;\n"
"border-bottom-right-radius: 0px;\n"
"border-top-left-radius: 9px;\n"
"border-bottom-left-radius: 9px;\n"
"}"));
        GMaxSlider->setMaximum(255);
        GMaxSlider->setValue(255);
        GMaxSlider->setSliderPosition(255);
        GMaxSlider->setOrientation(Qt::Horizontal);
        GMaxSlider->setInvertedAppearance(false);
        GMaxSlider->setInvertedControls(false);
        BMaxSlider = new QSlider(tab_2);
        BMaxSlider->setObjectName(QStringLiteral("BMaxSlider"));
        BMaxSlider->setGeometry(QRect(250, 600, 160, 22));
        BMaxSlider->setStyleSheet(QLatin1String("QSlider::groove:horizontal {\n"
"border: 1px solid #999999;\n"
"height: 8px; /* the groove expands to the size of the slider by default. by giving it a height, it has a fixed size */\n"
"background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #B1B1B1, stop:1 #c4c4c4);\n"
"}\n"
"QSlider::handle:horizontal {\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #b4b4b4, stop:1 #8f8f8f);\n"
"border: 1px solid #5c5c5c;\n"
"width: 18px;\n"
"margin: -2px 0; /* handle is placed by default on the contents rect of the groove. Expand outside the groove */\n"
"border-radius: 3px;\n"
"}\n"
"\n"
"QSlider::add-page:qlineargradient {\n"
"background: lightgrey;\n"
"border-top-right-radius: 9px;\n"
"border-bottom-right-radius: 9px;\n"
"border-top-left-radius: 0px;\n"
"border-bottom-left-radius: 0px;\n"
"}\n"
"QSlider::sub-page:qlineargradient {\n"
"background: #54ff9f;\n"
"border-top-right-radius: 0px;\n"
"border-bottom-right-radius: 0px;\n"
"border-top-left-radius: 9px;\n"
"border-bottom-left-radius: 9px;\n"
"}"));
        BMaxSlider->setMaximum(255);
        BMaxSlider->setValue(255);
        BMaxSlider->setSliderPosition(255);
        BMaxSlider->setOrientation(Qt::Horizontal);
        BMaxSlider->setInvertedAppearance(false);
        BMaxSlider->setInvertedControls(false);
        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(21, 604, 47, 13));
        label_5->setStyleSheet(QLatin1String("QLabel{\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 570, 47, 13));
        label_6->setStyleSheet(QLatin1String("QLabel{\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(22, 534, 47, 13));
        label_7->setStyleSheet(QLatin1String("QLabel{\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(120, 520, 47, 13));
        label_8->setStyleSheet(QLatin1String("QLabel{\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        label_9 = new QLabel(tab_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(300, 516, 47, 20));
        label_9->setStyleSheet(QLatin1String("QLabel{\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        textEdit = new QTextEdit(tab_2);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(1032, 550, 261, 25));
        textEdit->setStyleSheet(QLatin1String("QTextEdit{\n"
"color: rgb(255, 255, 255);\n"
"}"));
        label_10 = new QLabel(tab_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(1030, 530, 71, 16));
        label_10->setStyleSheet(QLatin1String("QLabel{\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        addColor = new QPushButton(tab_2);
        addColor->setObjectName(QStringLiteral("addColor"));
        addColor->setGeometry(QRect(1181, 580, 111, 22));
        addColor->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 1px solid rgb(84, 255, 159);\n"
"	background-color: rgb(60, 60, 60) ;\n"
"	color: rgb(84, 255, 159);\n"
"	font: 9pt \"Tahoma\";\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color:rgb(84, 255, 159);\n"
"	color:white;\n"
"}"));
        RValuesText = new QTextEdit(tab_2);
        RValuesText->setObjectName(QStringLiteral("RValuesText"));
        RValuesText->setGeometry(QRect(420, 528, 101, 25));
        RValuesText->setStyleSheet(QLatin1String("QTextEdit{\n"
"color: rgb(255, 255, 255);\n"
"border-color:white;\n"
"}\n"
""));
        GValuesText = new QTextEdit(tab_2);
        GValuesText->setObjectName(QStringLiteral("GValuesText"));
        GValuesText->setGeometry(QRect(420, 563, 101, 25));
        GValuesText->setStyleSheet(QLatin1String("QTextEdit{\n"
"color: rgb(255, 255, 255);\n"
"border-color:white;\n"
"}\n"
""));
        BValuesText = new QTextEdit(tab_2);
        BValuesText->setObjectName(QStringLiteral("BValuesText"));
        BValuesText->setGeometry(QRect(420, 598, 101, 25));
        BValuesText->setStyleSheet(QLatin1String("QTextEdit{\n"
"color: rgb(255, 255, 255);\n"
"border-color:white;\n"
"}\n"
""));
        ResetColors = new QPushButton(tab_2);
        ResetColors->setObjectName(QStringLiteral("ResetColors"));
        ResetColors->setGeometry(QRect(1033, 580, 130, 22));
        ResetColors->setStyleSheet(QLatin1String("QPushButton {\n"
"   border: 1px solid rgb(84, 255, 159);\n"
"	background-color: rgb(60, 60, 60) ;\n"
"	color: rgb(84, 255, 159);\n"
"	font: 9pt \"Tahoma\";\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color:rgb(84, 255, 159);\n"
"	color:white;\n"
"}"));
        tabWidget->addTab(tab_2, QString());

        verticalLayout->addWidget(tabWidget);

        ColorDetectionClass->setCentralWidget(centralWidget);

        retranslateUi(ColorDetectionClass);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ColorDetectionClass);
    } // setupUi

    void retranslateUi(QMainWindow *ColorDetectionClass)
    {
        ColorDetectionClass->setWindowTitle(QApplication::translate("ColorDetectionClass", "ColorDetection", Q_NULLPTR));
        RealFrame->setText(QString());
        DrawingFrame->setText(QString());
        StartDetection->setText(QApplication::translate("ColorDetectionClass", "DETECT", Q_NULLPTR));
        label->setText(QApplication::translate("ColorDetectionClass", "Original", Q_NULLPTR));
        label_2->setText(QApplication::translate("ColorDetectionClass", "Drawing area", Q_NULLPTR));
        StopDetection->setText(QApplication::translate("ColorDetectionClass", "STOP", Q_NULLPTR));
        label_11->setText(QApplication::translate("ColorDetectionClass", "Draw's Distance", Q_NULLPTR));
        label_12->setText(QApplication::translate("ColorDetectionClass", "0", Q_NULLPTR));
        label_13->setText(QApplication::translate("ColorDetectionClass", "Erase thickness", Q_NULLPTR));
        ThicknessValue->setText(QApplication::translate("ColorDetectionClass", "0", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("ColorDetectionClass", "Detection", Q_NULLPTR));
        label_3->setText(QApplication::translate("ColorDetectionClass", "Threshold", Q_NULLPTR));
        label_4->setText(QApplication::translate("ColorDetectionClass", "Original", Q_NULLPTR));
        OriginalFrame_T->setText(QString());
        ThresholdFrame->setText(QString());
        label_5->setText(QApplication::translate("ColorDetectionClass", "V", Q_NULLPTR));
        label_6->setText(QApplication::translate("ColorDetectionClass", "S", Q_NULLPTR));
        label_7->setText(QApplication::translate("ColorDetectionClass", "H", Q_NULLPTR));
        label_8->setText(QApplication::translate("ColorDetectionClass", "MIN", Q_NULLPTR));
        label_9->setText(QApplication::translate("ColorDetectionClass", "MAX", Q_NULLPTR));
        label_10->setText(QApplication::translate("ColorDetectionClass", "Color name", Q_NULLPTR));
        addColor->setText(QApplication::translate("ColorDetectionClass", "Add", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ResetColors->setToolTip(QApplication::translate("ColorDetectionClass", "this will clear all your current config", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        ResetColors->setText(QApplication::translate("ColorDetectionClass", "Reset", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("ColorDetectionClass", "Training", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ColorDetectionClass: public Ui_ColorDetectionClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLORDETECTION_H
