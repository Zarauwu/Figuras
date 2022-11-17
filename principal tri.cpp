#include "Triangulo.h"
#include <cstdlib>
#include <iostream>

using namespace std;

int main (int argc, char * arg[])
{
	float alt,ba,area;
	string t;


cout<<"Bienvenido"<<endl;
cout<<"\tPrograma que calcula el area y perimetro"<<endl;

cout<<"Escribe la figura:"<<endl;
cin>>t;
cout<<"Escribe la base:"<<endl;
cin>>ba;
cout<<"Escribe la altura:"<<endl;
cin>>alt;

Triangulo T;
T.setBas(ba);
T.setAlt(alt);
T.calcularArea();
T.calcularPerimetro();
T.visualizar();

getchar();
system("pause");
return 0;
}
