#pragma once



#include "Object.h"


class Title :public Object{
	
	

public:

	//�v���g�^�C�v�֐��錾
	//void draw();//�^�C�g���\��
	//void getGH(const char* gh );//�O���t�B�b�N�n���h��ݒ�
	void all();//�ʂ���

	//�R���X�g���N�^
	Title();

	//virtual void init();//������

	

} ;

extern Title title;

extern void titleInitAll();//������