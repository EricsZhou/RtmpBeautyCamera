#pragma once

#include <QtWidgets/QWidget>
#include "ui_xrtmpbeautycamera.h"

class XRtmpBeautyCamera1 : public QWidget
{
    Q_OBJECT

public:
    XRtmpBeautyCamera1(QWidget *parent = Q_NULLPTR);

public slots:
    void Stream();

private:
    Ui::XRtmpBeautyCameraClass ui;
};
