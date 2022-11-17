#include "Circulo.h"
#include <cstdlib>
#include <iostream>

using namespace std;

int main (int argc, char * arg[])
{
	float p,ra,area,perimetro,di;
	string c;


cout<<"Bienvenido"<<endl;
cout<<"\tPrograma que calcula el area y perimetro"<<endl;

cout<<"Escribe la figura:"<<endl;
cin>>c;
cout<<"Escribe el radio:"<<endl;
cin>>ra;
cout<<"Escribe pi:"<<endl;
cin>>p;
cout<<"Escribe el diametro:"<<endl;
cin>>di;

Circulo C;
C.setRad(ra);
C.setPi(p);
C.setDi(di);
C.calcularArea();
C.calcularPerimetro();
C.visualizar();

getchar();
system("pause");
return 0;
}
