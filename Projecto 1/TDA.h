#ifndef TDA_H
#define TDA_H
#include "ListaNode.h"
#include "TipoElemento.h"
class TDA
{
	public:
		TDA();
		virtual int anterior(int,ListaNode*)=0;
		virtual int siguiente(int,ListaNode*)=0;
		virtual TipoElemento* recupera(int,ListaNode*)=0;
		virtual void anula(ListaNode*)=0;
		virtual void suprime(int,ListaNode*)=0;
		virtual void print(ListaNode*)=0;
		virtual void inserta(TipoElemento*,int,ListaNode*)=0;
		virtual int localiza(TipoElemento*,ListaNode*)=0;
		virtual int primero(ListaNode*)=0;
		virtual int fin(ListaNode*)=0;
	
};

#endif