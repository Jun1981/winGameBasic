
#include "Game.h"
#include "Title.h"

#include "../DxLib/DxLib.h"

#include "Character.h"

#include "Object.h"

#include "Init.h"


//クラス定義
Game game;//クラス宣言

void Game::main(){
	

	
	switch(game.mode){
	case 0://初期化　関係
		initAll();//初期化
		
		game.mode=1;//タイトル画面へ
		
		
		break;
	case 1:
		title.all();//タイトル関係

				


		break;


	}


}