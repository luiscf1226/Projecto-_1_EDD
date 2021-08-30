

#include "ListaNode.h"
ListaNode::ListaNode(){
	this->tipo=0;
	this->element=0;
	this->siguiente=0;
}
ListaNode::ListaNode(int el){
	this->element=el;
}
void ListaNode::setS(ListaNode* s){
	this->siguiente=s;
}
ListaNode* ListaNode::getS(){
	return this->siguiente;
}
void ListaNode::setElement(int e){
	this->element=e;
}
int ListaNode::getElement(){
	return this->element;
}
void ListaNode::setTipo(TipoElemento* tip){
	this->tipo=tip;
}