#pragma once

//�摜�n�S�ʃN���X
class Object{

protected:

	int GH;//�O���t�B�b�N�n���h��	 
	int x,y;//�摜����̍��W
	int centX,centY;//�摜�̒��S�̍��W
	int sizeX,sizeY;//�摜�̃T�C�Y�@��X�@�cY

public:	

	//Public�ϐ�
	const char* ghFileName;//�摜�t�@�C���̏ꏊ

	void setXy(int x,int y);//xy�̏����l�w��
	void setCentXy(int x,int y);//xyCent�̏����l�w��

	////////////////////////
	Object();  //�R���X�g���N�^
	//////////////////////////////

	//�N���X���֐�
	//�`��
	//������N�_
	void draw(int a,int b,double zoom,int angle );//�摜�`��@����̍��W�� �g��w��
	void draw(double zoom,int angle);//����͂����̍��W�A�g�嗦�Ɓ@��]�p�x
	void drawRot(int a, int b,double zoom,int angle);//��]�n�\��(�����W�i�摜�̒��S�j�A�����W(�摜�̒��S�j,�g�嗦,��](���v���j�j
	void loadGhFileName(const char*);//�摜�f�[�^�̏ꏊ�̕������ǂݍ���
	void loadGh(const char* );//�@�O���t�B�b�N�n���h���ݒ�(�摜�t�@�C���̏ꏊ)

};