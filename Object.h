#pragma once

//画像系全般クラス
class Object{

protected:

	int GH;//グラフィックハンドラ	 
	int x,y;//画像左上の座標
	int centX,centY;//画像の中心の座標
	int sizeX,sizeY;//画像のサイズ　横X　縦Y

public:	

	//Public変数
	const char* ghFileName;//画像ファイルの場所

	void setXy(int x,int y);//xyの初期値指定
	void setCentXy(int x,int y);//xyCentの初期値指定

	////////////////////////
	Object();  //コンストラクタ
	//////////////////////////////

	//クラス内関数
	//描画
	//左上を起点
	void draw(int a,int b,double zoom,int angle );//画像描画　左上の座標と 拡大指定
	void draw(double zoom,int angle);//左上はｘｙの座標、拡大率と　回転角度
	void drawRot(int a, int b,double zoom,int angle);//回転系表示(ｘ座標（画像の中心）、ｙ座標(画像の中心）,拡大率,回転(時計回り））
	void loadGhFileName(const char*);//画像データの場所の文字列を読み込む
	void loadGh(const char* );//　グラフィックハンドラ設定(画像ファイルの場所)

};