#include "../DxLib/dxlib.h"
#include "Title.h"

#include "Character.h"
#include "Cursor.h"//�J�[�\��

#include "key.h"

Title title;//�^�C�g���N���X�錾


//�R���X�g���N�^
   Title::Title(){

   }
   
   	
	void Title::all(){//�S��
		
		//if(title.GH==0)//�ǂݍ��܂�ĂȂ�����
		//	title.getGH("./img/Title/���^�C�g��.png");
		
		
	/*	static int i=0;
		if(i<360)
		i +=1;
		else
			i=0;
*/
		
		title.draw(x,y,1.0,0);//�^�C�g���`��



		//�T�`��
		    wolf.drawRot(100,200,1,0);
			wolf.drawRot(300,200,0.5,0);
			wolf.drawRot(450,200,0.2,0);

			//if(key.c==6)wolf.
		
			//�J�[�\���`��
			cursor1.draw(1.0,0);
			
			int z=0;

	}

	//������
	void titleInitAll(){
				 
	   title.loadGh("./img/Title/���^�C�g��.png");//�^�C�g���O���t�B�b�N�n���h���ǂݍ���

	}