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

#include "XDataThread.h"
void XDataThread::Clear()
{
	mutex.lock();
	while (!datas.empty())
	{
		datas.front().Drop();
		datas.pop_front();
	}
	mutex.unlock();
}
//���б��β����
void XDataThread::Push(XData d)
{
	mutex.lock();
	if (datas.size() > maxList)
	{
		datas.front().Drop();
		datas.pop_front();
	}
	datas.push_back(d);
	mutex.unlock();
}

//��ȡ�б������������
XData XDataThread::Pop()
{
	mutex.lock();
	if (datas.empty())
	{
		mutex.unlock();
		return XData();
	}
	XData d = datas.front();
	datas.pop_front();
	mutex.unlock();
	return d;
}

//�����߳�
bool XDataThread::Start()
{
	isExit = false;
	QThread::start();
	return true;
}

//�˳��̣߳����ȴ��߳��˳���������
void XDataThread::Stop()
{
	isExit = true;
	wait();
}

XDataThread::XDataThread()
{
}


XDataThread::~XDataThread()
{
}
