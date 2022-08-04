#include "xrtmpbeautycamera1.h"
#include <iostream>
#include "XController.h"

static bool isStream = false;

XRtmpBeautyCamera1::XRtmpBeautyCamera1(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);
}

void XRtmpBeautyCamera1::Stream()
{
    std::cout << "Push successful !" << std::endl;
    if (isStream)
    {
        isStream = false;
        ui.startButton->setText(QString::fromLocal8Bit("开始推流"));
        XController::Get()->Stop();
    }
    else
    {
        isStream = true;
        ui.startButton->setText(QString::fromLocal8Bit("停止推流"));
        QString url = ui.inUrl->text();
        bool ok = false;
        int camIndex = url.toInt(&ok);
        if (!ok)
        {
            XController::Get()->inUrl = url.toStdString();
        }
        else
        {
            XController::Get()->camIndex = camIndex;
        }
        XController::Get()->outUrl = ui.outUrl->text().toStdString();
        XController::Get()->Set("b", (ui.face->currentIndex() + 1) * 3);
        XController::Get()->Start();
    }
}