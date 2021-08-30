#include <iostream>
#include "ListaNode.h"
#include "Lista.h"
#include "TDA.h"
#include "TipoElemento.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	Lista* l1=new Lista();
	TipoElemento* el=new TipoElemento();
	cout<<"Inserto 1-5 en Lista"<<endl;
	ListaNode* lista=new ListaNode();
	int num1=1;
	int num2=2;
	int num3=3;
	int num4=4;
	int num5=5;
	el->setNum(num1);
	l1->inserta(el,0,lista);
	el->setNum(num2);
	l1->inserta(el,1,lista);
	el->setNum(num3);
	l1->inserta(el,2,lista);
	el->setNum(num4);
	l1->inserta(el,3,lista);
	el->setNum(num5);
	l1->inserta(el,4,lista);
	l1->print(lista);
	int numf=l1->fin(lista);
	cout<<"El fin de la lista esta en Posicion: "<<numf<<endl;
	int nump=l1->primero(lista);
	cout<<"El primero en la lista esta en Posicion: "<<nump<<endl;
	cout<<"Localiza 2: "<<endl;
	el->setNum(num2);
	int posl=l1->localiza(el,lista);
	cout<<"El elemento esta en posicion: "<<posl+1<<endl;
	cout<<"Recupera 2: "<<endl;
	TipoElemento* tipo=l1->recupera(2-1,lista);
	int nr=el->getNum();
	cout<<"Elemento Encontrado: "<<nr<<endl;
	cout<<"Elimina 5: "<<endl;
	l1->suprime(4,lista);					
	l1->print(lista);
	cout<<"Siguiente de 3: "<<endl;
	int num=l1->siguiente(3,lista);
	cout<<"Siguiente Posicion es: "<<num<<endl;
	cout<<"Anterior de 3: "<<endl;
	int numa=l1->anterior(3,lista);
	cout<<"Posicion Anterior es: "<<numa<<endl;
	l1->anula(lista);
	cout<<"Lista Anulada: "<<endl;
	l1->print(lista);
	return 0;
}