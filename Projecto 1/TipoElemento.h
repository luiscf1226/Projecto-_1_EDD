#ifndef TIPOELEMENTO_H
#define TIPOELEMENTO_H
#include <string>
#include <iostream>
using namespace std;
class TipoElemento
{
	public:
		TipoElemento();
		TipoElemento(int);
		void setNum(int);
		int getNum();
	private:
		int num;
		char letra;
		string palabra;
};

#endif