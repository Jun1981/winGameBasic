
#include "../DxLib/dxlib.h"

#include "Game.h"
//#include "Title.h"
#include "key.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow){
		
	//

	//�𑜓x�ƃE�B���h�E���[�h
	ChangeWindowMode(TRUE);                     // �E�C���h�E���[�h�ɕύX(�������A�Q�T�U�F)
	SetGraphMode(800,600,16);//��ʉ𑜓x�ƃJ���[�r�b�g���ݒ�
	

	if (DxLib_Init() == -1) {                    // �c�w���C�u��������������
		return -1;                              // �G���[���N�����璼���ɏI��
	}
	
	//�L�[�`�F�b�N

	 key_chk();

	 ////////////////////////
	
	
	
	SetDrawScreen(DX_SCREEN_BACK);              // �`���𗠉�ʂ�


	
	

	//------ �Q�[�����[�v ------//
	while (CheckHitKey(KEY_INPUT_ESCAPE) == 0) { // Esc�L�[���������܂Ń��[�v
		ClsDrawScreen();                        // ����ʃN���A


		// �������珑��
		
		game.main();//�Q�[�����C��





	
		///////////////////////

		ScreenFlip();                           // ����ʂ�\��ʂ�
		if (ProcessMessage() == -1) {            // ���b�Z�[�W����
			break;                              // �G���[���N�����烋�[�v���甲����
		}
	}
	DxLib_End();// �c�w���C�u�����g�p�̏I������
	return 0;// �A�v���P�[�V�����̏I��

}