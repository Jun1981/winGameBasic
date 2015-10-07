#pragma once



#include "Object.h"


class Title :public IFImg{
	
	

public:

	//プロトタイプ関数宣言
	//void draw();//タイトル表示
	//void getGH(const char* gh );//グラフィックハンドら設定
	void all();//通して

	//コンストラクタ
	//Title(const char*);

	virtual void init();//初期化

	

} ;

extern Title title;

