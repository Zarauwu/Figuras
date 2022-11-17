#include <cstdlib>
#include <iostream>

using namespace std;

class Circulo
{
	private:
		float radio,pi,Area,diametro,perimetro;
		
		
		
		public:
		Circulo(){ radio=0; pi=0; Area=0; diametro=0; perimetro=0; }
		void visualizar();
		void calcularArea();
		void calcularPerimetro();
		void setRad(float ra);
		void setPi (float p);
		void setDi(float di);
};

void Circulo::visualizar()
{
	cout<<"Area y perimetro:"<<endl;
	cout<<"radio:"<<radio<<endl;
	cout<<"pi :"<<pi<<endl;
	cout<<"diametro:"<<diametro<<endl;
	cout<<"Area:"<<Area<<endl;
	cout<<"perimetro:"<<perimetro<<endl;
}

void Circulo::calcularArea ()		
{
	Area = pi * radio*2;
}
void Circulo:: calcularPerimetro()
{
	perimetro = pi * radio;
}
void Circulo::setRad(float ra)
{
	radio = ra;
}
void Circulo::setPi(float p)
{
	pi = p;
}
void Circulo::setDi(float di)
{
     diametro = di;	
}
