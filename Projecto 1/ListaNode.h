#ifndef LISTANODE_H
#define LISTANODE_H
#include "TipoElemento.h"
class ListaNode
{
	public:
		TipoElemento* tipo;
		ListaNode* siguiente;
		int element;
		ListaNode();
		ListaNode(int);
		void setS(ListaNode*);
		ListaNode* getS();
		int getElement();
		void setElement(int);
		void setTipo(TipoElemento*);
	
	
		
		
};

#endif