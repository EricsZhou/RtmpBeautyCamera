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

#include "XData.h"
#include <stdlib.h>
#include <string.h>
extern "C"
{
#include <libavutil/time.h>
}

long long GetCurTime()
{
	return av_gettime();
}
void XData::Drop()
{
	if (data)
		delete data;
	data = 0;
	size = 0;
}

XData::XData(char *data, int size, long long p)
{
	this->data = new char[size];
	memcpy(this->data, data, size);
	this->size = size;
	this->pts = p;
}
XData::XData()
{
}


XData::~XData()
{
}
