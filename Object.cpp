#include "../Dxlib/dxlib.h"
#include "Object.h"

//�摜�\���n�̉��z�֐��̒�`
//void Object::init(){
//	//  ghFileName=""
//	//  loadGH(ghFileName);
//
//}


//�`��
//�ʏ�`��
//���A�����w�肷��
void Object::draw(int a,int b,double zoom,int angle ){

	DrawRotaGraph2(a,b,0,0,zoom,angle/180.0*3.14,GH,1,0);//���オ��]�̒��S�̕\��

}
//�@�����Q�@���A�����g��
void Object::draw(double zoom,int angle){

	DrawRotaGraph2(x,y,0,0,zoom,angle/180.0*3.14,GH,1,0);//���オ��]�̒��S�̕\��

}



void Object::drawRot(int a,int b,double zoom,int angle){//�摜�̒��S����]�̒��S��
	
	DrawRotaGraph(a,b,zoom,angle/180.0*3.14,GH,1,0);
}


void Object::loadGh(const char* fileName){//�O���t�B�b�N�n���h���ݒ�

	
	GH=LoadGraph(fileName);		

	
}

//xy�̏����l�w��
void Object::setXy(int x,int y){
	


	this->x=x;
	this->y=y;
	
	
}

//xyCent�̏����l�w��
void Object::setCentXy(int x,int y){
	
	this->centX=x;
	this->centY=y;
}




//�R���X�g���N�^
Object::Object(){

x=y=centX=centY=0;

}


/////////////////////////////////////////////////////////////////