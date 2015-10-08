#pragma once



#include "Object.h"


class Title :public Object{
	
	

public:

	//プロトタイプ関数宣言
	//void draw();//タイトル表示
	//void getGH(const char* gh );//グラフィックハンドら設定
	void all();//通して

	//コンストラクタ
	Title();

	//virtual void init();//初期化

	

} ;

extern Title title;

extern void titleInitAll();//初期化