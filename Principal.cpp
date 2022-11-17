#include "Rectangulo.h"
#include <cstdlib>
#include <iostream>

using namespace std;

int main (int argc, char * arg[])
{
	float alt,ba,area;
	string r;


cout<<"Bienvenido"<<endl;
cout<<"\tPrograma que calcula el area y perimetro"<<endl;

cout<<"Escribe la figura:"<<endl;
cin>>r;
cout<<"Escribe la base:"<<endl;
cin>>ba;
cout<<"Escribe la altura:"<<endl;
cin>>alt;

Rectangulo R;
R.setBas(ba);
R.setAltu(alt);
R.calcularArea();
R.calcularPerimetro();
R.visualizar();

getchar();
system("pause");
return 0;
}
