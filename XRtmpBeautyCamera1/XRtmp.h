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
#include "XData.h"
class AVCodecContext;
class AVPacket;
class XRtmp
{
public:

	//������������
	static XRtmp * Get(unsigned char index = 0);
	
	//��ʼ����װ��������
	virtual bool Init(const char *url) = 0;

	//�����Ƶ������Ƶ�� ʧ�ܷ���-1 �ɹ�����������
	virtual int AddStream(const AVCodecContext *c) = 0;

	//��rtmp����IO�����ͷ�װͷ
	virtual bool SendHead() = 0;

	//rtmp ֡����
	virtual bool SendFrame(XData d,int streamIndex = 0) = 0;

	virtual void Close() = 0;
	virtual ~XRtmp();
protected:
	XRtmp();
};

