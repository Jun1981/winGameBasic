#pragma once



//画像系全般クラス
class Object{

protected:
	 int GH;//グラフィックハンドラ
	 int x,y;//画像左上の座標
	 int centX,centY;//画像の中心の座標
	

public:
	

	
	const char* ghFileName;//画像ファイル名


	virtual void init();//初期化
	
	void setXy(int x,int y);//xyの初期値指定
	void setCentXy(int x,int y);//xyCentの初期値指定


	 void drawRot(int x,int y,double zoom,int angle);//回転系表示(ｘ座標（画像の中心）、ｙ座標(画像の中心）,拡大率,回転(時計回り））
	//virtual void getFileName(const char* fn);
	void loadGhFileName(const char*);//画像データの場所の文字列を読み込む
	 void loadGh(const char* );//グラフィックハンドら設定
	


	//コンストラクタ
  Object();


};