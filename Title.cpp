#include "../DxLib/dxlib.h"
#include "Title.h"

#include "Character.h"


#include "key.h"

Title title;//タイトルクラス宣言


   void Title::init(){
	   
	   title.ghFileName="./img/Title/仮タイトル.png";//タイトル画像の場所を表す文字列
	   loadGh(ghFileName);//グラフィックハンドラ読み込む

   }

	
	void Title::all(){//全部
		

		//if(title.GH==0)//読み込まれてなったら
		//	title.getGH("./img/Title/仮タイトル.png");
		
		
		static int i=0;
		if(i<360)
		i +=1;
		else
			i=0;



		title.drawRot(400,300,1.0,i);



		
		
			wolf.drawRot(50,400,0.3,0);

			//if(key.c==6)wolf.
		

			


	}