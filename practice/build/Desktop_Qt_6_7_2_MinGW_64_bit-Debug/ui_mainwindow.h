/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *GOTOMAINWINDOW;
    QPushButton *QuitButton;
    QPushButton *InitialButton;
    QLabel *firstdisplay;
    QLabel *condition;
    QLabel *date;
    QLabel *humidity;
    QLabel *currentlocation;
    QLabel *currenttemperature;
    QLabel *currentcondition;
    QLabel *currentwind;
    QLabel *labeltemperature3;
    QLabel *labeltime3;
    QLabel *labelCondition3;
    QLabel *labeltemperature4;
    QLabel *labeltime4;
    QLabel *labelCondition4;
    QLabel *labeltime2;
    QLabel *labeltime1;
    QLabel *labeltemperature2;
    QLabel *labeltemperature1;
    QLabel *labelCondition1;
    QLabel *labelCondition2;
    QLabel *labeltemperature5;
    QLabel *labelCondition5;
    QLabel *labeltime5;
    QLabel *labeltemperature6;
    QLabel *labeltime6;
    QLabel *labelCondition6;
    QLabel *labeltemperature7;
    QLabel *labeltime7;
    QLabel *labelCondition7;
    QLabel *currentpressure;
    QLabel *currentweathericon;
    QPushButton *pushButtonday1;
    QPushButton *pushButtonday2;
    QPushButton *pushButtonday3;
    QPushButton *pushButtonday4;
    QMenuBar *menubar;
    QMenu *menuweather_app;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(807, 593);
        QPalette palette;
        QBrush brush(QColor(135, 206, 235, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        MainWindow->setPalette(palette);
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        MainWindow->setFont(font);
        MainWindow->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        MainWindow->setStyleSheet(QString::fromUtf8("QWidget {\n"
"   qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(0, 0, 0, 255), stop:0.05 rgba(14, 8, 73, 255), stop:0.36 rgba(28, 17, 145, 255), stop:0.6 rgba(126, 14, 81, 255), stop:0.75 rgba(234, 11, 11, 255), stop:0.79 rgba(244, 70, 5, 255), stop:0.86 rgba(255, 136, 0, 255), stop:0.935 rgba(239, 236, 55, 255))\n"
"}\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        GOTOMAINWINDOW = new QPushButton(centralwidget);
        GOTOMAINWINDOW->setObjectName("GOTOMAINWINDOW");
        GOTOMAINWINDOW->setGeometry(QRect(260, 370, 211, 31));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(GOTOMAINWINDOW->sizePolicy().hasHeightForWidth());
        GOTOMAINWINDOW->setSizePolicy(sizePolicy);
        GOTOMAINWINDOW->setStyleSheet(QString::fromUtf8("background-color: rgba(126, 255, 236, 0.2); /* Correct usage with transparency */\n"
"color: black; /* Text color */\n"
""));
        QuitButton = new QPushButton(centralwidget);
        QuitButton->setObjectName("QuitButton");
        QuitButton->setGeometry(QRect(700, 550, 101, 29));
        InitialButton = new QPushButton(centralwidget);
        InitialButton->setObjectName("InitialButton");
        InitialButton->setGeometry(QRect(0, 550, 86, 29));
        firstdisplay = new QLabel(centralwidget);
        firstdisplay->setObjectName("firstdisplay");
        firstdisplay->setGeometry(QRect(0, 130, 481, 101));
        firstdisplay->setStyleSheet(QString::fromUtf8("#firstdisplay {\n"
"\n"
"	             \n"
"	color:rgb(255, 255, 255);\n"
"	\n"
"font-size:70px;\n"
"}\n"
""));
        condition = new QLabel(centralwidget);
        condition->setObjectName("condition");
        condition->setGeometry(QRect(0, 220, 391, 61));
        condition->setStyleSheet(QString::fromUtf8("#condition {\n"
"    color:rgb(255, 255, 255);\n"
"    font-family: Arial, sans-serif;  /* Changes the font type */\n"
"    font-size: 35px;                 /* Sets the font size */\n"
"    font-weight: bold;               /* Makes the text bold */\n"
"}\n"
""));
        date = new QLabel(centralwidget);
        date->setObjectName("date");
        date->setGeometry(QRect(0, 270, 321, 61));
        date->setStyleSheet(QString::fromUtf8("#date{\n"
"	color: white;\n"
"font-size: 20px;\n"
"\n"
"}"));
        humidity = new QLabel(centralwidget);
        humidity->setObjectName("humidity");
        humidity->setGeometry(QRect(0, 320, 151, 61));
        humidity->setStyleSheet(QString::fromUtf8("#humidity{\n"
"	color:white;\n"
"	font-size: 20px;\n"
"}\n"
""));
        currentlocation = new QLabel(centralwidget);
        currentlocation->setObjectName("currentlocation");
        currentlocation->setGeometry(QRect(0, 10, 281, 41));
        currentlocation->setCursor(QCursor(Qt::CursorShape::ForbiddenCursor));
        currentlocation->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font-size: 32px;\n"
""));
        currenttemperature = new QLabel(centralwidget);
        currenttemperature->setObjectName("currenttemperature");
        currenttemperature->setGeometry(QRect(0, 50, 181, 91));
        currenttemperature->setCursor(QCursor(Qt::CursorShape::ForbiddenCursor));
        currenttemperature->setStyleSheet(QString::fromUtf8("#currenttemperature{\n"
"color:rgb(255, 255, 255);\n"
"font-size:60px;\n"
"}"));
        currentcondition = new QLabel(centralwidget);
        currentcondition->setObjectName("currentcondition");
        currentcondition->setGeometry(QRect(200, 110, 171, 41));
        currentcondition->setCursor(QCursor(Qt::CursorShape::ForbiddenCursor));
        currentcondition->setStyleSheet(QString::fromUtf8("#currentcondition{\n"
"color:rgb(255, 255, 255);\n"
"font-size:22px;\n"
"}"));
        currentwind = new QLabel(centralwidget);
        currentwind->setObjectName("currentwind");
        currentwind->setGeometry(QRect(200, 140, 121, 41));
        currentwind->setCursor(QCursor(Qt::CursorShape::ForbiddenCursor));
        currentwind->setStyleSheet(QString::fromUtf8("#currentwind{\n"
"color:rgb(255, 255, 255);\n"
"font-size:20px;\n"
"}"));
        labeltemperature3 = new QLabel(centralwidget);
        labeltemperature3->setObjectName("labeltemperature3");
        labeltemperature3->setGeometry(QRect(590, 40, 51, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setBold(true);
        labeltemperature3->setFont(font1);
        labeltemperature3->setCursor(QCursor(Qt::CursorShape::ForbiddenCursor));
        labeltemperature3->setStyleSheet(QString::fromUtf8("#labeltemperature3\n"
"{\n"
"color:rgb(255, 255, 255);\n"
"font-size:25px;\n"
"}"));
        labeltime3 = new QLabel(centralwidget);
        labeltime3->setObjectName("labeltime3");
        labeltime3->setGeometry(QRect(590, 70, 63, 21));
        labeltime3->setFont(font1);
        labeltime3->setCursor(QCursor(Qt::CursorShape::ForbiddenCursor));
        labeltime3->setStyleSheet(QString::fromUtf8("#labeltime3\n"
"{\n"
"color:rgb(255, 255, 255);\n"
"font-size:20px;\n"
"}"));
        labelCondition3 = new QLabel(centralwidget);
        labelCondition3->setObjectName("labelCondition3");
        labelCondition3->setGeometry(QRect(590, 100, 101, 20));
        labelCondition3->setFont(font1);
        labelCondition3->setCursor(QCursor(Qt::CursorShape::ForbiddenCursor));
        labelCondition3->setStyleSheet(QString::fromUtf8("#labelCondition3\n"
"{\n"
"color:rgb(255, 255, 255);\n"
"font-size:13px;\n"
"}"));
        labeltemperature4 = new QLabel(centralwidget);
        labeltemperature4->setObjectName("labeltemperature4");
        labeltemperature4->setGeometry(QRect(690, 40, 71, 31));
        labeltemperature4->setFont(font1);
        labeltemperature4->setCursor(QCursor(Qt::CursorShape::ForbiddenCursor));
        labeltemperature4->setStyleSheet(QString::fromUtf8("#labeltemperature4\n"
"{\n"
"color:rgb(255, 255, 255);\n"
"font-size:25px;\n"
"}"));
        labeltime4 = new QLabel(centralwidget);
        labeltime4->setObjectName("labeltime4");
        labeltime4->setGeometry(QRect(690, 70, 71, 21));
        labeltime4->setFont(font1);
        labeltime4->setCursor(QCursor(Qt::CursorShape::ForbiddenCursor));
        labeltime4->setStyleSheet(QString::fromUtf8("#labeltime4\n"
"{\n"
"color:rgb(255, 255, 255);\n"
"font-size:20px;\n"
"}"));
        labelCondition4 = new QLabel(centralwidget);
        labelCondition4->setObjectName("labelCondition4");
        labelCondition4->setGeometry(QRect(690, 100, 111, 20));
        labelCondition4->setFont(font1);
        labelCondition4->setCursor(QCursor(Qt::CursorShape::ForbiddenCursor));
        labelCondition4->setStyleSheet(QString::fromUtf8("#labelcondition4\n"
"{\n"
"color:rgb(255, 255, 255);\n"
"font-size:12px;\n"
"}"));
        labeltime2 = new QLabel(centralwidget);
        labeltime2->setObjectName("labeltime2");
        labeltime2->setGeometry(QRect(470, 70, 61, 21));
        labeltime2->setFont(font1);
        labeltime2->setCursor(QCursor(Qt::CursorShape::ForbiddenCursor));
        labeltime2->setStyleSheet(QString::fromUtf8("#labeltime2{\n"
"color:rgb(255, 255, 255);\n"
"font-size:20px;\n"
"}"));
        labeltime1 = new QLabel(centralwidget);
        labeltime1->setObjectName("labeltime1");
        labeltime1->setGeometry(QRect(360, 70, 48, 27));
        labeltime1->setFont(font1);
        labeltime1->setCursor(QCursor(Qt::CursorShape::ForbiddenCursor));
        labeltime1->setStyleSheet(QString::fromUtf8("#labeltime1{\n"
"color:rgb(255, 255, 255);\n"
"font-size:20px;\n"
"}"));
        labeltemperature2 = new QLabel(centralwidget);
        labeltemperature2->setObjectName("labeltemperature2");
        labeltemperature2->setGeometry(QRect(470, 40, 51, 31));
        labeltemperature2->setFont(font1);
        labeltemperature2->setCursor(QCursor(Qt::CursorShape::ForbiddenCursor));
        labeltemperature2->setStyleSheet(QString::fromUtf8("#labeltemperature2\n"
"{\n"
"color:rgb(255, 255, 255);\n"
"font-size:25px;\n"
"}"));
        labeltemperature1 = new QLabel(centralwidget);
        labeltemperature1->setObjectName("labeltemperature1");
        labeltemperature1->setGeometry(QRect(360, 40, 51, 33));
        labeltemperature1->setFont(font1);
        labeltemperature1->setCursor(QCursor(Qt::CursorShape::ForbiddenCursor));
        labeltemperature1->setStyleSheet(QString::fromUtf8("#labeltemperature1{\n"
"color:rgb(255, 255, 255);\n"
"font-size:25px;\n"
"}"));
        labelCondition1 = new QLabel(centralwidget);
        labelCondition1->setObjectName("labelCondition1");
        labelCondition1->setGeometry(QRect(360, 100, 102, 20));
        labelCondition1->setFont(font1);
        labelCondition1->setCursor(QCursor(Qt::CursorShape::ForbiddenCursor));
        labelCondition1->setStyleSheet(QString::fromUtf8("#labelcondition1{\n"
"color:rgb(255, 255, 255);\n"
"font-size:10px;\n"
"text-align:left;\n"
"}"));
        labelCondition2 = new QLabel(centralwidget);
        labelCondition2->setObjectName("labelCondition2");
        labelCondition2->setGeometry(QRect(470, 100, 111, 20));
        labelCondition2->setFont(font1);
        labelCondition2->setCursor(QCursor(Qt::CursorShape::ForbiddenCursor));
        labelCondition2->setStyleSheet(QString::fromUtf8("#labelcondition2\n"
"{\n"
"color:rgb(255, 255, 255);\n"
"font-size:10px;\n"
"}"));
        labeltemperature5 = new QLabel(centralwidget);
        labeltemperature5->setObjectName("labeltemperature5");
        labeltemperature5->setGeometry(QRect(360, 130, 61, 21));
        labeltemperature5->setFont(font1);
        labeltemperature5->setCursor(QCursor(Qt::CursorShape::ForbiddenCursor));
        labeltemperature5->setStyleSheet(QString::fromUtf8("#labeltemperature5{\n"
"color:rgb(255, 255, 255);\n"
"font-size:25px;\n"
"}"));
        labelCondition5 = new QLabel(centralwidget);
        labelCondition5->setObjectName("labelCondition5");
        labelCondition5->setGeometry(QRect(360, 180, 101, 31));
        labelCondition5->setFont(font1);
        labelCondition5->setCursor(QCursor(Qt::CursorShape::ForbiddenCursor));
        labelCondition5->setStyleSheet(QString::fromUtf8("#labelcondition5{\n"
"color:rgb(255, 255, 255);\n"
"font-size:10px;\n"
"text-align:left;\n"
"}"));
        labeltime5 = new QLabel(centralwidget);
        labeltime5->setObjectName("labeltime5");
        labeltime5->setGeometry(QRect(360, 160, 71, 20));
        labeltime5->setFont(font1);
        labeltime5->setCursor(QCursor(Qt::CursorShape::ForbiddenCursor));
        labeltime5->setStyleSheet(QString::fromUtf8("#labeltime5{\n"
"color:rgb(255, 255, 255);\n"
"font-size:20px;\n"
"}"));
        labeltemperature6 = new QLabel(centralwidget);
        labeltemperature6->setObjectName("labeltemperature6");
        labeltemperature6->setGeometry(QRect(470, 130, 63, 21));
        labeltemperature6->setFont(font1);
        labeltemperature6->setCursor(QCursor(Qt::CursorShape::ForbiddenCursor));
        labeltemperature6->setStyleSheet(QString::fromUtf8("#labeltemperature6\n"
"{\n"
"color:rgb(255, 255, 255);\n"
"font-size:25px;\n"
"}"));
        labeltime6 = new QLabel(centralwidget);
        labeltime6->setObjectName("labeltime6");
        labeltime6->setGeometry(QRect(470, 149, 63, 41));
        labeltime6->setFont(font1);
        labeltime6->setCursor(QCursor(Qt::CursorShape::ForbiddenCursor));
        labeltime6->setStyleSheet(QString::fromUtf8("#labeltime6{\n"
"color:rgb(255, 255, 255);\n"
"font-size:20px;\n"
"}"));
        labelCondition6 = new QLabel(centralwidget);
        labelCondition6->setObjectName("labelCondition6");
        labelCondition6->setGeometry(QRect(470, 179, 111, 31));
        labelCondition6->setFont(font1);
        labelCondition6->setCursor(QCursor(Qt::CursorShape::ForbiddenCursor));
        labeltemperature7 = new QLabel(centralwidget);
        labeltemperature7->setObjectName("labeltemperature7");
        labeltemperature7->setGeometry(QRect(630, 120, 63, 41));
        labeltemperature7->setFont(font1);
        labeltemperature7->setCursor(QCursor(Qt::CursorShape::ForbiddenCursor));
        labeltemperature7->setStyleSheet(QString::fromUtf8("#labeltemperature7\n"
"{\n"
"color:rgb(255, 255, 255);\n"
"font-size:25px;\n"
"}"));
        labeltime7 = new QLabel(centralwidget);
        labeltime7->setObjectName("labeltime7");
        labeltime7->setGeometry(QRect(630, 160, 63, 20));
        labeltime7->setFont(font1);
        labeltime7->setCursor(QCursor(Qt::CursorShape::ForbiddenCursor));
        labeltime7->setStyleSheet(QString::fromUtf8("#labeltime7{\n"
"color:rgb(255, 255, 255);\n"
"font-size:20px;\n"
"}"));
        labelCondition7 = new QLabel(centralwidget);
        labelCondition7->setObjectName("labelCondition7");
        labelCondition7->setGeometry(QRect(630, 180, 111, 31));
        labelCondition7->setFont(font1);
        labelCondition7->setCursor(QCursor(Qt::CursorShape::ForbiddenCursor));
        currentpressure = new QLabel(centralwidget);
        currentpressure->setObjectName("currentpressure");
        currentpressure->setGeometry(QRect(0, 150, 211, 41));
        currentpressure->setCursor(QCursor(Qt::CursorShape::ForbiddenCursor));
        currentpressure->setStyleSheet(QString::fromUtf8("#currentpressure{\n"
"color:rgb(255, 255, 255);\n"
"font-size:20px;\n"
"}"));
        currentweathericon = new QLabel(centralwidget);
        currentweathericon->setObjectName("currentweathericon");
        currentweathericon->setGeometry(QRect(180, 40, 91, 81));
        currentweathericon->setCursor(QCursor(Qt::CursorShape::ForbiddenCursor));
        currentweathericon->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/weather images/sunnyday.png")));
        pushButtonday1 = new QPushButton(centralwidget);
        pushButtonday1->setObjectName("pushButtonday1");
        pushButtonday1->setGeometry(QRect(0, 390, 191, 111));
        pushButtonday1->setFont(font1);
        pushButtonday1->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButtonday1->setStyleSheet(QString::fromUtf8("#pushButtonday1{\n"
"background-color: rgba(255, 255, 255, 0.2);\n"
"border: 0.01px solid #2980b9;  /* Button border style */\n"
"    border-radius: 20px;        /* Set the radius for rounded corners */\n"
"    color: white;               /* Text color */\n"
"     \n"
"font-size:20px;\n"
"}\n"
"#pushButtonday1:hover {\n"
"    background-color: rgba(173, 216, 230, 0.9);  /* Slightly more opaque on hover */\n"
"}"));
        pushButtonday2 = new QPushButton(centralwidget);
        pushButtonday2->setObjectName("pushButtonday2");
        pushButtonday2->setGeometry(QRect(210, 390, 181, 111));
        pushButtonday2->setFont(font1);
        pushButtonday2->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButtonday2->setStyleSheet(QString::fromUtf8("#pushButtonday2{\n"
"background-color: rgba(255, 255, 255, 0.2);\n"
"border: 0.01px solid #2980b9;  /* Button border style */\n"
"    border-radius: 20px;        /* Set the radius for rounded corners */\n"
"    color: white;               /* Text color */\n"
"     \n"
"font-size:20px;\n"
"}\n"
"#pushButtonday2:hover {\n"
"    background-color: rgba(173, 216, 230, 0.7);  /* Slightly more opaque on hover */\n"
"}"));
        pushButtonday3 = new QPushButton(centralwidget);
        pushButtonday3->setObjectName("pushButtonday3");
        pushButtonday3->setGeometry(QRect(410, 390, 181, 111));
        pushButtonday3->setFont(font1);
        pushButtonday3->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButtonday3->setStyleSheet(QString::fromUtf8("#pushButtonday3{\n"
"background-color: rgba(255, 255, 255, 0.2);\n"
"border: 0.01px solid #2980b9;  /* Button border style */\n"
"    border-radius: 20px;        /* Set the radius for rounded corners */\n"
"    color: white;               /* Text color */\n"
"     \n"
"font-size:20px;\n"
"}\n"
"#pushButtonday3:hover {\n"
"    background-color: rgba(173, 216, 230, 0.7);  /* Slightly more opaque on hover */\n"
"}"));
        pushButtonday4 = new QPushButton(centralwidget);
        pushButtonday4->setObjectName("pushButtonday4");
        pushButtonday4->setGeometry(QRect(610, 390, 191, 111));
        pushButtonday4->setFont(font1);
        pushButtonday4->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButtonday4->setStyleSheet(QString::fromUtf8("#pushButtonday4{\n"
"background-color: rgba(255, 255, 255, 0.2);\n"
"border: 0.01px solid #2980b9;  /* Button border style */\n"
"    border-radius: 20px;        /* Set the radius for rounded corners */\n"
"    color: white;               /* Text color */\n"
"     \n"
"font-size:20px;\n"
"}\n"
"#pushButtonday4:hover {\n"
"    background-color: rgba(173, 216, 230, 0.7);  /* Slightly more opaque on hover */\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 807, 25));
        menuweather_app = new QMenu(menubar);
        menuweather_app->setObjectName("menuweather_app");
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuweather_app->menuAction());
        menubar->addAction(menu->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        GOTOMAINWINDOW->setText(QCoreApplication::translate("MainWindow", "CLICK TO GET WEATHER INFO", nullptr));
        QuitButton->setText(QCoreApplication::translate("MainWindow", "CLICK TO QUIT", nullptr));
        InitialButton->setText(QCoreApplication::translate("MainWindow", "project info", nullptr));
        firstdisplay->setText(QCoreApplication::translate("MainWindow", "KATHMANDU", nullptr));
        condition->setText(QCoreApplication::translate("MainWindow", "OVERCAST CLOUDS", nullptr));
        date->setText(QCoreApplication::translate("MainWindow", "THRUSDAY 09 SEPTEMBER", nullptr));
        humidity->setText(QCoreApplication::translate("MainWindow", "HUMIDITY: 90%", nullptr));
        currentlocation->setText(QCoreApplication::translate("MainWindow", "surkhet", nullptr));
        currenttemperature->setText(QCoreApplication::translate("MainWindow", "22", nullptr));
        currentcondition->setText(QCoreApplication::translate("MainWindow", "overcast clouds", nullptr));
        currentwind->setText(QCoreApplication::translate("MainWindow", "2 km/hr", nullptr));
        labeltemperature3->setText(QCoreApplication::translate("MainWindow", "25", nullptr));
        labeltime3->setText(QCoreApplication::translate("MainWindow", "22:45", nullptr));
        labelCondition3->setText(QCoreApplication::translate("MainWindow", "overcast clouds", nullptr));
        labeltemperature4->setText(QCoreApplication::translate("MainWindow", "26", nullptr));
        labeltime4->setText(QCoreApplication::translate("MainWindow", "22:45", nullptr));
        labelCondition4->setText(QCoreApplication::translate("MainWindow", "overacast clouds", nullptr));
        labeltime2->setText(QCoreApplication::translate("MainWindow", "22:45", nullptr));
        labeltime1->setText(QCoreApplication::translate("MainWindow", "23:45", nullptr));
        labeltemperature2->setText(QCoreApplication::translate("MainWindow", "22", nullptr));
        labeltemperature1->setText(QCoreApplication::translate("MainWindow", "21", nullptr));
        labelCondition1->setText(QCoreApplication::translate("MainWindow", "overcast clouds", nullptr));
        labelCondition2->setText(QCoreApplication::translate("MainWindow", "overcast clouds", nullptr));
        labeltemperature5->setText(QCoreApplication::translate("MainWindow", "25", nullptr));
        labelCondition5->setText(QCoreApplication::translate("MainWindow", "overcast clouds", nullptr));
        labeltime5->setText(QCoreApplication::translate("MainWindow", "23:45", nullptr));
        labeltemperature6->setText(QCoreApplication::translate("MainWindow", "26", nullptr));
        labeltime6->setText(QCoreApplication::translate("MainWindow", "23:45", nullptr));
        labelCondition6->setText(QCoreApplication::translate("MainWindow", "overcast clouds", nullptr));
        labeltemperature7->setText(QCoreApplication::translate("MainWindow", "28", nullptr));
        labeltime7->setText(QCoreApplication::translate("MainWindow", "23:45", nullptr));
        labelCondition7->setText(QCoreApplication::translate("MainWindow", "overcast clouds", nullptr));
        currentpressure->setText(QCoreApplication::translate("MainWindow", "current pre", nullptr));
        currentweathericon->setText(QString());
        pushButtonday1->setText(QCoreApplication::translate("MainWindow", "FRI 9", nullptr));
        pushButtonday2->setText(QCoreApplication::translate("MainWindow", "SAT 10", nullptr));
        pushButtonday3->setText(QString());
        pushButtonday4->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        menuweather_app->setTitle(QString());
        menu->setTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
