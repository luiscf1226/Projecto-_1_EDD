#include "Lista.h"
#include <iostream>
using namespace std;

Lista::Lista(){
	this->control=NULL;
}
void Lista::print(ListaNode* lista){
	if(control==NULL){
		cout<<"LISTA VACIA"<<endl;
	}else{
		//ListaNode*temp=control;
		lista=control;
		ListaNode*temp=lista;
		//lista=temp;
		cout<<"LISTA: ";
		while(temp!=NULL){
			
			//cout<<temp->element<<"->";
			cout<<temp->getElement()<<" , ";
			//temp=temp->siguiente;
			temp=temp->getS();
			
		}
		cout<<endl;
	}
}
void Lista::inserta(TipoElemento* te,int pos,ListaNode* lista){
	this->dato=te;
	int element=te->getNum();
	ListaNode* temp=new ListaNode();
	lista=temp;
	temp->element=element;

	
	if(pos==0){
		
		temp->setS(control);
		control=temp;
	}else{
		 ListaNode* ptr=control;
		while(pos>1){
			ptr=ptr->siguiente;
			
			--pos;
		}
		
		temp->setS(ptr->getS());
		ptr->setS(temp);
	}
	
	this->cant++;
	
	
}
//
int Lista::fin(ListaNode* lista){
	
	
	int fin=1;
	//ListaNode* temp=control;
	//lista=temp;
	lista=control;
	ListaNode* temp=lista;
	bool flag=true;
	while(flag){
		if(temp->siguiente==NULL){
			//return temp->getElement();
			return fin;
			//return this->cant;
			flag=false;
		}else{
			fin++;
			temp=temp->siguiente;
		}
	}
}
int Lista::primero(ListaNode* lista){
	ListaNode* temp=lista;
	if(control==NULL){
		return 0;
	}else{
		return 1;	
	}
	
}
int Lista::localiza(TipoElemento* el,ListaNode* lista){
	ListaNode* temp=new ListaNode();
	lista=control;
	temp=lista;
	int num=el->getNum();
	int i=0;
	bool ver=false;
	if(control==NULL){
		return 0;
		
	}else{
		while(temp!=NULL){
			if(temp->getElement()==num){
				//cout<<"ESTA"<<endl;
				ver=true;
				break;
			}
			i++;
			temp=temp->siguiente;
		}
		if(ver){
			return i;
		}
	}
	
}
TipoElemento* Lista::recupera(int pos,ListaNode* lista){
	
	//ListaNode* temp=control;
	//lista=temp;
	lista=control;
	ListaNode*temp =lista;
	int cont=0;
	while(temp!=0){
		if(cont==pos){
			int num=temp->getElement();
			TipoElemento* el=new TipoElemento(num);
			return el;
			
		}else{
			cont++;
			temp=temp->siguiente;
		}
	}
}
void Lista::suprime(int pos,ListaNode* lista){
	lista=control;
	ListaNode*temp=lista;
	if(temp==0){
		return;
		
	}
	if(pos==0){
		control=temp->siguiente;
		delete temp;//free
		return;
	}
	int i=0;
	while(temp!=0&&i<pos-1){
		temp=temp->siguiente;
		i++;
	}
	if(temp==NULL||temp->siguiente==0){
		return;
	}
	ListaNode* siguiente=temp->siguiente->siguiente;
	delete temp->siguiente;
	temp->siguiente=siguiente;
	
}
void Lista::anula(ListaNode* lista){
	lista=control;
	ListaNode* temp=lista;
	//lista=temp;
	while(temp!=0){
		control=temp->siguiente;
		delete temp;
		temp=control;
	}
	delete control;
	
}
int Lista::siguiente(int pos,ListaNode* lista){
	lista=control;
	ListaNode* temp=lista;
	int cont=1;
	while(temp!=0){
		if(cont==pos){
			return cont+1;
			
		}else{
			cont++;
			temp=temp->siguiente;
		}
	}
}
int Lista::anterior(int pos,ListaNode* lista){
	
	ListaNode* temp=control;
	lista=temp;
	int cont=1;
	while(temp!=0){
		if(cont==pos){
			return cont-1;
			
		}else{
			cont++;
			temp=temp->siguiente;
		}
	}
}

	