#ifndef LISTA_H
#define LISTA_H
#include "ListaNode.h"
#include "TipoElemento.h"
class Lista
{
	public:
		Lista();
		virtual TipoElemento* recupera(int,ListaNode*);
		virtual void anula(ListaNode*);
		virtual void suprime(int,ListaNode*);
		virtual void print(ListaNode*);
		virtual void inserta(TipoElemento*,int,ListaNode*);
		virtual int localiza(TipoElemento*,ListaNode*);
		virtual int primero(ListaNode*);
		virtual int fin(ListaNode*);
		virtual int siguiente(int,ListaNode*);
		virtual int anterior(int,ListaNode*);
	private:
		TipoElemento* dato;
		ListaNode* control;
		int cant;
		
};

#endif