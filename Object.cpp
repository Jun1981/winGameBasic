#include "../Dxlib/dxlib.h"
#include "Object.h"

//画像表示系の仮想関数の定義
void Object::init(){
	//  ghFileName=""
	//  loadGH(ghFileName);

}

void Object::drawRot(int x,int y,double zoom,int angle){//タイトル描画
	
	DrawRotaGraph(x,y,zoom,(double)angle/180.0*3.14,GH,1,0);
}


void Object::loadGh(const char* fileName){//グラフィックハンドラ設定

	
	GH=LoadGraph(fileName);		

	int i=0;
}

//xyの初期値指定
void Object::setXy(int x,int y){
	


	this->x=x;
	this->y;
	
	
}

//xyCentの初期値指定
void Object::setCentXy(int x,int y){
	
	this->centX=x;
	this->centY=y;
}


void Object::setCentXy(int x,int y){
}


//コンストラクタ
Object::Object(){

x=y=centX=centY=0;

}


/////////////////////////////////////////////////////////////////