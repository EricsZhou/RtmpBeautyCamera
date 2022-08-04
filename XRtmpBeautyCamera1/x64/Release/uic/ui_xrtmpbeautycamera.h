/********************************************************************************
** Form generated from reading UI file 'xrtmpbeautycamera.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XRTMPBEAUTYCAMERA_H
#define UI_XRTMPBEAUTYCAMERA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_XRtmpBeautyCameraClass
{
public:
    QFrame *frame;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *outUrl;
    QLineEdit *inUrl;
    QPushButton *startButton;
    QComboBox *comboBox_3;
    QComboBox *face;
    QLabel *label_9;

    void setupUi(QWidget *XRtmpBeautyCameraClass)
    {
        if (XRtmpBeautyCameraClass->objectName().isEmpty())
            XRtmpBeautyCameraClass->setObjectName(QString::fromUtf8("XRtmpBeautyCameraClass"));
        XRtmpBeautyCameraClass->resize(898, 689);
        XRtmpBeautyCameraClass->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	\n"
"	border-image: url(:/XRtmpBeautyCamera/src/02.jpg);\n"
"	color: rgb(0, 0, 0);\n"
"	font: 75 12pt \"\351\273\221\344\275\223\";\n"
"	border-radius:10px;\n"
"}\n"
"QWidget\n"
"{\n"
"	\n"
"	background-image: url(:/XRtmpBeautyCamera/src/01.jpg);\n"
"}\n"
"\n"
"QPushButton:hover\n"
" { \n"
"	border-image: url(:/XRtmpBeautyCamera/src/02.jpg);\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(120, 120, 120, 255), stop:0.495 rgba(39, 39, 39, 255), stop:0.505 rgba(39,39, 39, 255), stop:1 rgba(120, 120,120, 255));\n"
" border: none;\n"
"border-radius:15px;\n"
"color: rgb(0, 0, 0);\n"
"font: 75 12pt \"\351\273\221\344\275\223\";\n"
" }\n"
"QPushButton:!hover\n"
" { \n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(39, 39, 39, 255), stop:0.495 rgba(120, 120, 120, 255), stop:0.505 rgba(120,120, 120, 255), stop:1 rgba(39, 39,39, 255));\n"
" border: none;\n"
"border-radius:15px;\n"
"color: rgb(255, 255, 255);\n"
"font: 75 12pt \""
                        "\351\273\221\344\275\223\";\n"
" }\n"
"\n"
"QLineEdit\n"
"{\n"
"	background-image: url(:/XRtmpBeautyCamera/src/02.jpg);\n"
"border-radius:10px;\n"
"background-color: rgb(255, 255, 255);\n"
"font: 75 12pt \"\351\273\221\344\275\223\";\n"
"\n"
"}\n"
"QComboBox\n"
"{\n"
"background-color: rgb(255, 255, 255);\n"
"font: 75 12pt \"\351\273\221\344\275\223\";\n"
"	color: rgb(0, 0, 0);\n"
"border-radius:10px;\n"
"}"));
        frame = new QFrame(XRtmpBeautyCameraClass);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 901, 691));
        frame->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	\n"
"	border-image: url(:/XRtmpBeautyCamera/src/02.jpg);\n"
"	color: rgb(0, 0, 0);\n"
"	font: 75 12pt \"\351\273\221\344\275\223\";\n"
"	border-radius:10px;\n"
"}\n"
"QWidget\n"
"{\n"
"	\n"
"	background-image: url(:/XRtmpBeautyCamera/src/01.jpg);\n"
"}\n"
"\n"
"QPushButton:hover\n"
" { \n"
"	border-image: url(:/XRtmpBeautyCamera/src/02.jpg);\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(120, 120, 120, 255), stop:0.495 rgba(39, 39, 39, 255), stop:0.505 rgba(39,39, 39, 255), stop:1 rgba(120, 120,120, 255));\n"
" border: none;\n"
"border-radius:15px;\n"
"color: rgb(0, 0, 0);\n"
"font: 75 12pt \"\351\273\221\344\275\223\";\n"
" }\n"
"QPushButton:!hover\n"
" { \n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(39, 39, 39, 255), stop:0.495 rgba(120, 120, 120, 255), stop:0.505 rgba(120,120, 120, 255), stop:1 rgba(39, 39,39, 255));\n"
" border: none;\n"
"border-radius:15px;\n"
"color: rgb(255, 255, 255);\n"
"font: 75 12pt \""
                        "\351\273\221\344\275\223\";\n"
" }\n"
"\n"
"QLineEdit\n"
"{\n"
"	background-image: url(:/XRtmpBeautyCamera/src/02.jpg);\n"
"border-radius:10px;\n"
"background-color: rgb(255, 255, 255);\n"
"font: 75 12pt \"\351\273\221\344\275\223\";\n"
"\n"
"}\n"
"QComboBox\n"
"{\n"
"background-color: rgb(255, 255, 255);\n"
"font: 75 12pt \"\351\273\221\344\275\223\";\n"
"	color: rgb(0, 0, 0);\n"
"border-radius:10px;\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 550, 141, 31));
        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(360, 650, 141, 31));
        label_7 = new QLabel(frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 650, 141, 31));
        label_8 = new QLabel(frame);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(20, 600, 141, 31));
        outUrl = new QLineEdit(frame);
        outUrl->setObjectName(QString::fromUtf8("outUrl"));
        outUrl->setGeometry(QRect(200, 550, 681, 31));
        inUrl = new QLineEdit(frame);
        inUrl->setObjectName(QString::fromUtf8("inUrl"));
        inUrl->setGeometry(QRect(200, 600, 681, 31));
        startButton = new QPushButton(frame);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setGeometry(QRect(760, 640, 121, 41));
        comboBox_3 = new QComboBox(frame);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setGeometry(QRect(530, 650, 111, 31));
        face = new QComboBox(frame);
        face->addItem(QString());
        face->addItem(QString());
        face->addItem(QString());
        face->setObjectName(QString::fromUtf8("face"));
        face->setGeometry(QRect(200, 650, 111, 31));
        label_9 = new QLabel(frame);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(20, 10, 861, 521));
        label_9->setStyleSheet(QString::fromUtf8("border-image: url(:/XRtmpBeautyCamera/src/03.png);"));

        retranslateUi(XRtmpBeautyCameraClass);

        QMetaObject::connectSlotsByName(XRtmpBeautyCameraClass);
    } // setupUi

    void retranslateUi(QWidget *XRtmpBeautyCameraClass)
    {
        XRtmpBeautyCameraClass->setWindowTitle(QCoreApplication::translate("XRtmpBeautyCameraClass", "XRtmpBeautyCamera", nullptr));
        label_5->setText(QCoreApplication::translate("XRtmpBeautyCameraClass", "\346\216\250\346\265\201RTMP   URL \357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("XRtmpBeautyCameraClass", "\347\276\216\351\242\234\350\264\264\347\272\270\351\200\211\346\213\251   \357\274\232", nullptr));
        label_7->setText(QCoreApplication::translate("XRtmpBeautyCameraClass", "\347\276\216\351\242\234\347\243\250\347\232\256\347\272\247\345\210\253   \357\274\232", nullptr));
        label_8->setText(QCoreApplication::translate("XRtmpBeautyCameraClass", "\350\276\223\345\205\245URL\346\210\226\350\200\205\346\225\260\345\255\227\357\274\232", nullptr));
        outUrl->setText(QCoreApplication::translate("XRtmpBeautyCameraClass", "\344\276\213\345\246\202\357\274\232rtmp://192.168.88.129/live/livestream", nullptr));
        inUrl->setText(QCoreApplication::translate("XRtmpBeautyCameraClass", "\344\276\213\345\246\202\357\274\232rtsp://admin:hik12345@10.16.4.25:554/Streaming//101\346\210\226\350\200\205\345\241\253\345\205\245\346\225\260\345\255\2270,1\351\200\211\346\213\251\351\273\230\350\256\244\347\232\204\347\233\270\346\234\272", nullptr));
        startButton->setText(QCoreApplication::translate("XRtmpBeautyCameraClass", "\345\274\200\345\247\213\346\216\250\346\265\201", nullptr));
        comboBox_3->setItemText(0, QCoreApplication::translate("XRtmpBeautyCameraClass", "\347\206\212\347\214\253\350\264\264\347\272\270", nullptr));
        comboBox_3->setItemText(1, QCoreApplication::translate("XRtmpBeautyCameraClass", "\346\240\221\346\207\222\350\264\264\347\272\270", nullptr));

        face->setItemText(0, QCoreApplication::translate("XRtmpBeautyCameraClass", "\344\270\200\347\272\247\347\276\216\351\242\234", nullptr));
        face->setItemText(1, QCoreApplication::translate("XRtmpBeautyCameraClass", "\344\272\214\347\272\247\347\276\216\351\242\234", nullptr));
        face->setItemText(2, QCoreApplication::translate("XRtmpBeautyCameraClass", "\344\270\211\347\272\247\347\276\216\351\242\234", nullptr));

        label_9->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class XRtmpBeautyCameraClass: public Ui_XRtmpBeautyCameraClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XRTMPBEAUTYCAMERA_H
