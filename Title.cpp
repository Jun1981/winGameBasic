#include "../DxLib/dxlib.h"
#include "Title.h"

#include "Character.h"


#include "key.h"

Title title;//�^�C�g���N���X�錾


   void Title::init(){
	   
	   title.ghFileName="./img/Title/���^�C�g��.png";//�^�C�g���摜�̏ꏊ��\��������
	   loadGh(ghFileName);//�O���t�B�b�N�n���h���ǂݍ���

   }

	
	void Title::all(){//�S��
		

		//if(title.GH==0)//�ǂݍ��܂�ĂȂ�����
		//	title.getGH("./img/Title/���^�C�g��.png");
		
		
		static int i=0;
		if(i<360)
		i +=1;
		else
			i=0;



		title.drawRot(400,300,1.0,i);



		
		
			wolf.drawRot(50,400,0.3,0);

			//if(key.c==6)wolf.
		

			


	}