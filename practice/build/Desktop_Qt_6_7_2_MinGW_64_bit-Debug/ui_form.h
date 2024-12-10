/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QLabel *sunriselabel;
    QLabel *putsunrise;
    QLabel *putsunset;
    QLabel *suns;
    QLabel *sunr;
    QLabel *labeltemperature1;
    QLabel *labeltemperature3;
    QLabel *labeltemperature4;
    QLabel *labeltemperature2;
    QLabel *labeltemperature5;
    QLabel *labeltemperature6;
    QLabel *labeltemperature7;
    QLabel *labeltemperature8;
    QLabel *labelcondition1;
    QLabel *labelcondition5;
    QLabel *labelcondition2;
    QLabel *labelcondition6;
    QLabel *labelcondition3;
    QLabel *labelcondition7;
    QLabel *labelcondition4;
    QLabel *labelcondition8;
    QLabel *labeltime1;
    QLabel *labeltime3;
    QLabel *labeltime4;
    QLabel *labeltime2;
    QLabel *labeltime5;
    QLabel *labeltime6;
    QLabel *labeltime7;
    QLabel *labeltime8;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName("Form");
        Form->resize(871, 608);
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setItalic(true);
        Form->setFont(font);
        Form->setStyleSheet(QString::fromUtf8("QWidget {\n"
"background-color: #8ED5F0;\n"
"    }"));
        sunriselabel = new QLabel(Form);
        sunriselabel->setObjectName("sunriselabel");
        sunriselabel->setGeometry(QRect(110, 20, 641, 191));
        sunriselabel->setCursor(QCursor(Qt::CursorShape::ForbiddenCursor));
        sunriselabel->setStyleSheet(QString::fromUtf8("font-color:white;\n"
"font-size:40px;"));
        putsunrise = new QLabel(Form);
        putsunrise->setObjectName("putsunrise");
        putsunrise->setGeometry(QRect(110, 240, 171, 21));
        putsunrise->setCursor(QCursor(Qt::CursorShape::ForbiddenCursor));
        putsunrise->setStyleSheet(QString::fromUtf8("#putsunrise {\n"
"    color: white\n"
"; /* Text color */\n"
"    font-size: 25px; /* Font size */\n"
"    text-transform: uppercase; /* Makes the text uppercase */\n"
"    font-weight: bold; /* Makes the text bold */\n"
" \n"
"   }"));
        putsunset = new QLabel(Form);
        putsunset->setObjectName("putsunset");
        putsunset->setGeometry(QRect(680, 240, 161, 21));
        putsunset->setCursor(QCursor(Qt::CursorShape::ForbiddenCursor));
        putsunset->setStyleSheet(QString::fromUtf8("#putsunset {\n"
"    color: white\n"
"; /* Text color */\n"
"    font-size: 25px; /* Font size */\n"
"    text-transform: uppercase; /* Makes the text uppercase */\n"
"    font-weight: bold; /* Makes the text bold */\n"
" \n"
"   }"));
        suns = new QLabel(Form);
        suns->setObjectName("suns");
        suns->setGeometry(QRect(90, 270, 121, 31));
        suns->setCursor(QCursor(Qt::CursorShape::ForbiddenCursor));
        suns->setStyleSheet(QString::fromUtf8("#suns {\n"
"    color: white\n"
"; /* Text color */\n"
"    font-size: 25px; /* Font size */\n"
"    text-transform: uppercase; /* Makes the text uppercase */\n"
"    font-weight: bold; /* Makes the text bold */\n"
" \n"
"   }"));
        sunr = new QLabel(Form);
        sunr->setObjectName("sunr");
        sunr->setGeometry(QRect(660, 270, 141, 31));
        sunr->setCursor(QCursor(Qt::CursorShape::ForbiddenCursor));
        sunr->setStyleSheet(QString::fromUtf8("#sunr {\n"
"    color: white\n"
"; /* Text color */\n"
"    font-size: 25px; /* Font size */\n"
"    text-transform: uppercase; /* Makes the text uppercase */\n"
"    font-weight: bold; /* Makes the text bold */\n"
" \n"
"   }"));
        labeltemperature1 = new QLabel(Form);
        labeltemperature1->setObjectName("labeltemperature1");
        labeltemperature1->setGeometry(QRect(40, 300, 63, 41));
        labeltemperature1->setCursor(QCursor(Qt::CursorShape::ForbiddenCursor));
        labeltemperature1->setStyleSheet(QString::fromUtf8("#labeltemperature1{\n"
"color:rgb(255, 255, 255);\n"
"font-size:25px;\n"
"}"));
        labeltemperature3 = new QLabel(Form);
        labeltemperature3->setObjectName("labeltemperature3");
        labeltemperature3->setGeometry(QRect(470, 300, 63, 41));
        labeltemperature3->setCursor(QCursor(Qt::CursorShape::ForbiddenCursor));
        labeltemperature3->setStyleSheet(QString::fromUtf8("#labeltemperature3{\n"
"color:rgb(255, 255, 255);\n"
"font-size:25px;\n"
"}"));
        labeltemperature4 = new QLabel(Form);
        labeltemperature4->setObjectName("labeltemperature4");
        labeltemperature4->setGeometry(QRect(700, 300, 63, 41));
        labeltemperature4->setCursor(QCursor(Qt::CursorShape::ForbiddenCursor));
        labeltemperature4->setStyleSheet(QString::fromUtf8("#labeltemperature4{\n"
"color:rgb(255, 255, 255);\n"
"font-size:25px;\n"
"}"));
        labeltemperature2 = new QLabel(Form);
        labeltemperature2->setObjectName("labeltemperature2");
        labeltemperature2->setGeometry(QRect(260, 300, 63, 41));
        labeltemperature2->setCursor(QCursor(Qt::CursorShape::ForbiddenCursor));
        labeltemperature2->setStyleSheet(QString::fromUtf8("#labeltemperature2{\n"
"color:rgb(255, 255, 255);\n"
"font-size:25px;\n"
"}"));
        labeltemperature5 = new QLabel(Form);
        labeltemperature5->setObjectName("labeltemperature5");
        labeltemperature5->setGeometry(QRect(50, 460, 63, 41));
        labeltemperature5->setCursor(QCursor(Qt::CursorShape::ForbiddenCursor));
        labeltemperature5->setStyleSheet(QString::fromUtf8("#labeltemperature5{\n"
"color:rgb(255, 255, 255);\n"
"font-size:25px;\n"
"}"));
        labeltemperature6 = new QLabel(Form);
        labeltemperature6->setObjectName("labeltemperature6");
        labeltemperature6->setGeometry(QRect(260, 460, 63, 41));
        labeltemperature6->setCursor(QCursor(Qt::CursorShape::ForbiddenCursor));
        labeltemperature6->setStyleSheet(QString::fromUtf8("#labeltemperature6\n"
"{\n"
"color:rgb(255, 255, 255);\n"
"font-size:25px;\n"
"}"));
        labeltemperature7 = new QLabel(Form);
        labeltemperature7->setObjectName("labeltemperature7");
        labeltemperature7->setGeometry(QRect(470, 460, 63, 41));
        labeltemperature7->setCursor(QCursor(Qt::CursorShape::ForbiddenCursor));
        labeltemperature7->setStyleSheet(QString::fromUtf8("#labeltemperature7\n"
"{\n"
"color:rgb(255, 255, 255);\n"
"font-size:25px;\n"
"}"));
        labeltemperature8 = new QLabel(Form);
        labeltemperature8->setObjectName("labeltemperature8");
        labeltemperature8->setGeometry(QRect(710, 460, 63, 41));
        labeltemperature8->setCursor(QCursor(Qt::CursorShape::ForbiddenCursor));
        labeltemperature8->setStyleSheet(QString::fromUtf8("#labeltemperature8{\n"
"color:rgb(255, 255, 255);\n"
"font-size:25px;\n"
"}"));
        labelcondition1 = new QLabel(Form);
        labelcondition1->setObjectName("labelcondition1");
        labelcondition1->setGeometry(QRect(40, 390, 181, 20));
        labelcondition1->setCursor(QCursor(Qt::CursorShape::ForbiddenCursor));
        labelcondition1->setStyleSheet(QString::fromUtf8("#labelcondition1{\n"
"color:rgb(255, 255, 255);\n"
"font-size:15px;\n"
"text-align:left;\n"
"}"));
        labelcondition5 = new QLabel(Form);
        labelcondition5->setObjectName("labelcondition5");
        labelcondition5->setGeometry(QRect(50, 550, 141, 20));
        labelcondition5->setStyleSheet(QString::fromUtf8("#labelcondition5{\n"
"color:rgb(255, 255, 255);\n"
"font-size:15px;\n"
"text-align:left;\n"
"}"));
        labelcondition2 = new QLabel(Form);
        labelcondition2->setObjectName("labelcondition2");
        labelcondition2->setGeometry(QRect(260, 390, 161, 20));
        labelcondition2->setCursor(QCursor(Qt::CursorShape::ForbiddenCursor));
        labelcondition2->setStyleSheet(QString::fromUtf8("#labelcondition2\n"
"{\n"
"color:rgb(255, 255, 255);\n"
"font-size:15px;\n"
"text-align:left;\n"
"}"));
        labelcondition6 = new QLabel(Form);
        labelcondition6->setObjectName("labelcondition6");
        labelcondition6->setGeometry(QRect(260, 550, 151, 20));
        labelcondition6->setStyleSheet(QString::fromUtf8("#labelcondition6\n"
"{\n"
"color:rgb(255, 255, 255);\n"
"font-size:15px;\n"
"text-align:left;\n"
"}"));
        labelcondition3 = new QLabel(Form);
        labelcondition3->setObjectName("labelcondition3");
        labelcondition3->setGeometry(QRect(470, 390, 161, 20));
        labelcondition3->setCursor(QCursor(Qt::CursorShape::ForbiddenCursor));
        labelcondition3->setStyleSheet(QString::fromUtf8("#labelcondition3{\n"
"color:rgb(255, 255, 255);\n"
"font-size:15px;\n"
"text-align:left;\n"
"}"));
        labelcondition7 = new QLabel(Form);
        labelcondition7->setObjectName("labelcondition7");
        labelcondition7->setGeometry(QRect(470, 550, 171, 20));
        labelcondition7->setStyleSheet(QString::fromUtf8("#labelcondition7{\n"
"color:rgb(255, 255, 255);\n"
"font-size:15px;\n"
"text-align:left;\n"
"}"));
        labelcondition4 = new QLabel(Form);
        labelcondition4->setObjectName("labelcondition4");
        labelcondition4->setGeometry(QRect(700, 390, 151, 20));
        labelcondition4->setCursor(QCursor(Qt::CursorShape::ForbiddenCursor));
        labelcondition4->setStyleSheet(QString::fromUtf8("#labelcondition4{\n"
"color:rgb(255, 255, 255);\n"
"font-size:15px;\n"
"text-align:left;\n"
"}"));
        labelcondition8 = new QLabel(Form);
        labelcondition8->setObjectName("labelcondition8");
        labelcondition8->setGeometry(QRect(710, 550, 141, 20));
        labelcondition8->setStyleSheet(QString::fromUtf8("#labelcondition8{\n"
"color:rgb(255, 255, 255);\n"
"font-size:15px;\n"
"text-align:left;\n"
"}"));
        labeltime1 = new QLabel(Form);
        labeltime1->setObjectName("labeltime1");
        labeltime1->setGeometry(QRect(40, 349, 63, 31));
        labeltime1->setCursor(QCursor(Qt::CursorShape::ForbiddenCursor));
        labeltime1->setStyleSheet(QString::fromUtf8("#labeltime1{\n"
"color:rgb(255, 255, 255);\n"
"font-size:20px;\n"
"}"));
        labeltime3 = new QLabel(Form);
        labeltime3->setObjectName("labeltime3");
        labeltime3->setGeometry(QRect(470, 349, 63, 31));
        labeltime3->setCursor(QCursor(Qt::CursorShape::ForbiddenCursor));
        labeltime3->setStyleSheet(QString::fromUtf8("#labeltime3{\n"
"color:rgb(255, 255, 255);\n"
"font-size:20px;\n"
"}"));
        labeltime4 = new QLabel(Form);
        labeltime4->setObjectName("labeltime4");
        labeltime4->setGeometry(QRect(700, 349, 63, 31));
        labeltime4->setCursor(QCursor(Qt::CursorShape::ForbiddenCursor));
        labeltime4->setStyleSheet(QString::fromUtf8("#labeltime4{\n"
"color:rgb(255, 255, 255);\n"
"font-size:20px;\n"
"}"));
        labeltime2 = new QLabel(Form);
        labeltime2->setObjectName("labeltime2");
        labeltime2->setGeometry(QRect(260, 349, 63, 31));
        labeltime2->setCursor(QCursor(Qt::CursorShape::ForbiddenCursor));
        labeltime2->setStyleSheet(QString::fromUtf8("#labeltime2{\n"
"color:rgb(255, 255, 255);\n"
"font-size:20px;\n"
"}"));
        labeltime5 = new QLabel(Form);
        labeltime5->setObjectName("labeltime5");
        labeltime5->setGeometry(QRect(50, 510, 63, 31));
        labeltime5->setStyleSheet(QString::fromUtf8("#labeltime5{\n"
"color:rgb(255, 255, 255);\n"
"font-size:20px;\n"
"}"));
        labeltime6 = new QLabel(Form);
        labeltime6->setObjectName("labeltime6");
        labeltime6->setGeometry(QRect(260, 509, 63, 31));
        labeltime6->setStyleSheet(QString::fromUtf8("#labeltime6{\n"
"color:rgb(255, 255, 255);\n"
"font-size:20px;\n"
"}"));
        labeltime7 = new QLabel(Form);
        labeltime7->setObjectName("labeltime7");
        labeltime7->setGeometry(QRect(470, 509, 63, 31));
        labeltime7->setStyleSheet(QString::fromUtf8("#labeltime7{\n"
"color:rgb(255, 255, 255);\n"
"font-size:20px;\n"
"}"));
        labeltime8 = new QLabel(Form);
        labeltime8->setObjectName("labeltime8");
        labeltime8->setGeometry(QRect(710, 509, 63, 31));
        labeltime8->setStyleSheet(QString::fromUtf8("#labeltime8{\n"
"color:rgb(255, 255, 255);\n"
"font-size:20px;\n"
"}"));

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        sunriselabel->setText(QCoreApplication::translate("Form", "this is the secondary window label", nullptr));
        putsunrise->setText(QCoreApplication::translate("Form", "6:50", nullptr));
        putsunset->setText(QCoreApplication::translate("Form", "5:30", nullptr));
        suns->setText(QCoreApplication::translate("Form", "sunrise", nullptr));
        sunr->setText(QCoreApplication::translate("Form", "sunset", nullptr));
        labeltemperature1->setText(QCoreApplication::translate("Form", "21", nullptr));
        labeltemperature3->setText(QCoreApplication::translate("Form", "21", nullptr));
        labeltemperature4->setText(QCoreApplication::translate("Form", "21", nullptr));
        labeltemperature2->setText(QCoreApplication::translate("Form", "21", nullptr));
        labeltemperature5->setText(QCoreApplication::translate("Form", "21", nullptr));
        labeltemperature6->setText(QCoreApplication::translate("Form", "21", nullptr));
        labeltemperature7->setText(QCoreApplication::translate("Form", "21", nullptr));
        labeltemperature8->setText(QCoreApplication::translate("Form", "21", nullptr));
        labelcondition1->setText(QCoreApplication::translate("Form", "TextLabel", nullptr));
        labelcondition5->setText(QCoreApplication::translate("Form", "TextLabel", nullptr));
        labelcondition2->setText(QCoreApplication::translate("Form", "TextLabel", nullptr));
        labelcondition6->setText(QCoreApplication::translate("Form", "TextLabel", nullptr));
        labelcondition3->setText(QCoreApplication::translate("Form", "TextLabel", nullptr));
        labelcondition7->setText(QCoreApplication::translate("Form", "TextLabel", nullptr));
        labelcondition4->setText(QCoreApplication::translate("Form", "TextLabel", nullptr));
        labelcondition8->setText(QCoreApplication::translate("Form", "TextLabel", nullptr));
        labeltime1->setText(QCoreApplication::translate("Form", "22:30", nullptr));
        labeltime3->setText(QCoreApplication::translate("Form", "TextLabel", nullptr));
        labeltime4->setText(QCoreApplication::translate("Form", "TextLabel", nullptr));
        labeltime2->setText(QCoreApplication::translate("Form", "TextLabel", nullptr));
        labeltime5->setText(QCoreApplication::translate("Form", "TextLabel", nullptr));
        labeltime6->setText(QCoreApplication::translate("Form", "TextLabel", nullptr));
        labeltime7->setText(QCoreApplication::translate("Form", "TextLabel", nullptr));
        labeltime8->setText(QCoreApplication::translate("Form", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
