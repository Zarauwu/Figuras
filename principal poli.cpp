#include "Poligono.h"
#include <cstdlib>
#include <iostream>

using namespace std;

int main (int argc, char * arg[])
{
	float la,ap,area;
	string p;


cout<<"Bienvenido"<<endl;
cout<<"\tPrograma que calcula el area y perimetro"<<endl;

cout<<"Escribe la figura:"<<endl;
cin>>p;
cout<<"Escribe el largo:"<<endl;
cin>>ap;
cout<<"Escribe el ancho:"<<endl;
cin>>la;

Poligono P;
P.setApo(ap);
P.setLad(la);
P.calcularArea();
P.visualizar();

getchar();
system("pause");
return 0;
}
