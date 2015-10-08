#include "../Dxlib/dxlib.h"
#include "Object.h"

//画像表示系の仮想関数の定義
//void Object::init(){
//	//  ghFileName=""
//	//  loadGH(ghFileName);
//
//}


//描画
//通常描画
//ｘ、ｙを指定する
void Object::draw(int a,int b,double zoom,int angle ){

	DrawRotaGraph2(a,b,0,0,zoom,angle/180.0*3.14,GH,1,0);//左上が回転の中心の表示

}
//　引数２つ　ｘ、ｙを使う
void Object::draw(double zoom,int angle){

	DrawRotaGraph2(x,y,0,0,zoom,angle/180.0*3.14,GH,1,0);//左上が回転の中心の表示

}



void Object::drawRot(int a,int b,double zoom,int angle){//画像の中心が回転の中心に
	
	DrawRotaGraph(a,b,zoom,angle/180.0*3.14,GH,1,0);
}


void Object::loadGh(const char* fileName){//グラフィックハンドラ設定

	
	GH=LoadGraph(fileName);		

	
}

//xyの初期値指定
void Object::setXy(int x,int y){
	


	this->x=x;
	this->y=y;
	
	
}

//xyCentの初期値指定
void Object::setCentXy(int x,int y){
	
	this->centX=x;
	this->centY=y;
}




//コンストラクタ
Object::Object(){

x=y=centX=centY=0;

}


/////////////////////////////////////////////////////////////////