#include "../DxLib/dxlib.h"
#include "Title.h"

#include "Character.h"
#include "Cursor.h"//カーソル

#include "key.h"

Title title;//タイトルクラス宣言


//コンストラクタ
   Title::Title(){

   }
   
   	
	void Title::all(){//全部
		
		//if(title.GH==0)//読み込まれてなったら
		//	title.getGH("./img/Title/仮タイトル.png");
		
		
	/*	static int i=0;
		if(i<360)
		i +=1;
		else
			i=0;
*/
		
		title.draw(x,y,1.0,0);//タイトル描画



		//狼描画
		    wolf.drawRot(100,200,1,0);
			wolf.drawRot(300,200,0.5,0);
			wolf.drawRot(450,200,0.2,0);

			//if(key.c==6)wolf.
		
			//カーソル描画
			cursor1.draw(1.0,0);
			
			int z=0;

	}

	//初期化
	void titleInitAll(){
				 
	   title.loadGh("./img/Title/仮タイトル.png");//タイトルグラフィックハンドラ読み込む

	}