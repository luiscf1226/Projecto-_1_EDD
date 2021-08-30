#include "TipoElemento.h"
TipoElemento::TipoElemento(){
	
}
TipoElemento::TipoElemento(int n){
	this->num=n;
}
void TipoElemento::setNum(int p){
	this->num=p;
}
int TipoElemento::getNum(){
	return this->num;
}