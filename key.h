#pragma once

extern int Key_Trg, Key_Info,Key_Old, ChkKAny;// �L�[���N���A



extern void key_chk(void);//�L�[�`�F�b�N
extern void key_henkan(void);//�L�[�ϊ�

class  KEY{

public:

	int c;//�\���L�[�W�����Ł@�����O
	int ct;//�\���L�[�@�������ς���Ȃ�

	int z;//z�L�[�{�^��
	int x;


};

extern KEY key;