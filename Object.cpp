#include "../Dxlib/dxlib.h"
#include "Object.h"

//�摜�\���n�̉��z�֐��̒�`
void Object::init(){
	//  ghFileName=""
	//  loadGH(ghFileName);

}

void Object::drawRot(int x,int y,double zoom,int angle){//�^�C�g���`��
	
	DrawRotaGraph(x,y,zoom,(double)angle/180.0*3.14,GH,1,0);
}


void Object::loadGh(const char* fileName){//�O���t�B�b�N�n���h���ݒ�

	
	GH=LoadGraph(fileName);		

	int i=0;
}

//xy�̏����l�w��
void Object::setXy(int x,int y){
	


	this->x=x;
	this->y;
	
	
}

//xyCent�̏����l�w��
void Object::setCentXy(int x,int y){
	
	this->centX=x;
	this->centY=y;
}


void Object::setCentXy(int x,int y){
}


//�R���X�g���N�^
Object::Object(){

x=y=centX=centY=0;

}


/////////////////////////////////////////////////////////////////