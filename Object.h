#pragma once



//�摜�n�S�ʃN���X
class Object{

protected:
	 int GH;//�O���t�B�b�N�n���h��
	 int x,y;//�摜����̍��W
	 int centX,centY;//�摜�̒��S�̍��W
	

public:
	

	
	const char* ghFileName;//�摜�t�@�C����


	virtual void init();//������
	
	void setXy(int x,int y);//xy�̏����l�w��
	void setCentXy(int x,int y);//xyCent�̏����l�w��


	 void drawRot(int x,int y,double zoom,int angle);//��]�n�\��(�����W�i�摜�̒��S�j�A�����W(�摜�̒��S�j,�g�嗦,��](���v���j�j
	//virtual void getFileName(const char* fn);
	void loadGhFileName(const char*);//�摜�f�[�^�̏ꏊ�̕������ǂݍ���
	 void loadGh(const char* );//�O���t�B�b�N�n���h��ݒ�
	


	//�R���X�g���N�^
  Object();


};