#include <cstdlib>
#include <iostream>

using namespace std;

class Triangulo
{
	private:
		float base,altura,Area,perimetro;
		
		
		
	public:
		Triangulo() { base=0; altura=0; Area=0; perimetro=0; }
		void visualizar();
		void calcularArea();
		void calcularPerimetro();
		void setBas(float ba);
		void setAlt (float al);
};

void Triangulo::visualizar()
{
	cout<<"Area y perimetro:"<<endl;
	cout<<"base:"<<base<<endl;
	cout<<"altura:"<<altura<<endl;
	cout<<"Area:"<<Area<<endl;
	cout<<"perimetro:"<<perimetro<<endl;
}

void Triangulo::calcularArea ()		
{
	Area = base * altura / 2 ;
}
void Triangulo::calcularPerimetro()
{
     perimetro = base * altura;	
}
void Triangulo::setBas(float ba)
{
	base = ba;
}
void Triangulo::setAlt(float al)
{
	altura = al;
}


