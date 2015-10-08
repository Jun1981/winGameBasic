#pragma once

#include "Object.h"


/////////////////////////////////////////////////
//カーソルのクラス定義
class Cursor :public Object{

public:
	int numOfItems;//項目数

};
////////////////////////////////////////////////




//関数前方宣言
extern Cursor cursor1;//Cursor型のカーソル１宣
extern void cursorInitAll();//カーソルまとめて初期化