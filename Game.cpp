
#include "Game.h"
#include "Title.h"

#include "../DxLib/DxLib.h"

#include "Character.h"

#include "Object.h"

#include "Init.h"


//�N���X��`
Game game;//�N���X�錾

void Game::main(){
	

	
	switch(game.mode){
	case 0://�������@�֌W
		initAll();//������
		
		game.mode=1;//�^�C�g����ʂ�
		
		
		break;
	case 1:
		title.all();//�^�C�g���֌W

				


		break;


	}


}