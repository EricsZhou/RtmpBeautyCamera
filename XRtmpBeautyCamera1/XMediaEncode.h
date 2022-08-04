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
enum XSampleFMT
{
	X_S16 = 1,
	X_FLATP =8
};

///����Ƶ����ӿ���
class XMediaEncode
{
public:
	///�������
	int inWidth = 1280;
	int inHeight = 720;
	int inPixSize = 3;
	int channels = 2;
	int sampleRate = 44100;
	XSampleFMT inSampleFmt = X_S16;

	///�������
	int outWidth = 1280;
	int outHeight = 720;
	int bitrate = 4000000;//ѹ����ÿ����Ƶ��bitλ��С 50kB
	int fps = 25;
	int nbSamples = 1024;
	XSampleFMT outSampleFmt = X_FLATP;


	//������������
	static XMediaEncode * Get(unsigned char index = 0);
	
	//��ʼ�����ظ�ʽת���������ĳ�ʼ��
	virtual bool InitScale() = 0;

	//��Ƶ�ز��������ĳ�ʼ��
	virtual bool InitResample() = 0;

	//����ֵ�������������
	virtual XData Resample(XData d) = 0;

	//����ֵ�������������
	virtual XData RGBToYUV(XData rgb) = 0;

	//��Ƶ��������ʼ��
	virtual bool InitVideoCodec() = 0;

	//��Ƶ�����ʼ��
	virtual bool InitAudioCode() = 0;

	//��Ƶ���� ����ֵ�������������
	virtual XData EncodeVideo(XData frame) = 0;

	//��Ƶ���� ����ֵ�������������
	virtual XData EncodeAudio(XData frame) = 0;
	virtual void Close() = 0;
	virtual ~XMediaEncode();

	AVCodecContext *vc = 0;	//��Ƶ������������
	AVCodecContext *ac = 0; //��Ƶ������������
protected:
	XMediaEncode();
};

