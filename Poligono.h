#include <cstdlib>
#include <iostream>

using namespace std;

class Poligono
{
	private:
		float lado,apotema,Area,perimetro;
		
	
		
		public:
		Poligono(){ lado=0; apotema=0; Area=0; perimetro=0; }
		void visualizar();
		void calcularPerimetro();
		void calcularArea();
		void setLad(float la);
		void setApo(float ap);
};

void Poligono::visualizar()
{
    cout<<"perimetro:"<<perimetro<<endl;
	cout<<"lado:"<<lado<<endl;
	cout<<"apotema:"<<apotema<<endl;
	cout<<"Area:"<<Area<<endl;
	
}
void Poligono::calcularPerimetro()
{
	perimetro = lado * 6;
}
void Poligono::calcularArea ()		
{
	Area = perimetro * apotema;
}

void Poligono::setApo(float ap)
{
	apotema = ap;
}
void Poligono::setLad(float la)
{
	lado = la;
}


