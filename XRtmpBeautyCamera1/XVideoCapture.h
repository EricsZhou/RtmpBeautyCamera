/*******************************************************************************
**                                                                            **
**                     Jiedi(China nanjing)Ltd.                               **
**	               �������Ĳܿ����˴��������Ϊѧϰ�ο�                       **
*******************************************************************************/

/*****************************FILE INFOMATION***********************************
**
**  Project       : FFmpegSDKʵս�γ�
**  Description   : ����FFMpegSDK��ʵս�γ�
**  Contact       : xiacaojun@qq.com
**  ����   : http://blog.csdn.net/jiedichina
**  ��Ƶ�γ�
**  http://edu.csdn.net/lecturer/lecturer_detail?lecturer_id=961
**  http://edu.51cto.com/lecturer/12016059.html
**  http://study.163.com/u/xiacaojun
**  https://jiedi.ke.qq.com/
**  ����γ̺���Լ�Ⱥ��ѯ�γ�ѧϰ����
**  Ⱥ�� 132323693 fmpeg��ֱ�������γ�
**  ΢�Ź��ں�  : jiedi2007
**	ͷ����	 : �Ĳܿ�
**
*******************************************************************************/

#pragma once
#include "XDataThread.h"
#include "XFilter.h"
#include <vector>
#include <QtCore/qmutex.h>
class XVideoCapture:public XDataThread
{
public:
	int width = 0;
	int height = 0;
	int fps = 0;
	static XVideoCapture *Get(unsigned char index = 0);
	virtual bool Init(int camIndex = 0) = 0;
	virtual bool Init(const char *url) = 0;
	virtual void Stop() = 0;
	virtual ~XVideoCapture();
	void AddFilter(XFilter *f)
	{
		fmutex.lock();
		filters.push_back(f);
		fmutex.unlock();
	}
protected:
	QMutex fmutex;
	std::vector<XFilter*> filters;
	XVideoCapture();
};

