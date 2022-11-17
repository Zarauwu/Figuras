#include <cstdlib>
#include <iostream>

using namespace std;

class Rectangulo
{
	private:
		float largo,ancho,Area,perimetro;
		
		
		
		public:
		Rectangulo(){ largo=0; ancho=0; Area=0; perimetro=0; }
		void visualizar();
		void calcularArea();
		void calcularPerimetro();
		void setLar(float la);
		void setAnc (float an);
};

void Rectangulo::visualizar()
{
	cout<<"Area y perimetro:"<<endl;
	cout<<"largo:"<<largo<<endl;
	cout<<"ancho:"<<ancho<<endl;
	cout<<"Area:"<<Area<<endl;
	cout<<"perimetro:"<<perimetro<<endl;
}

void Rectangulo::calcularArea ()		
{
	Area = largo * ancho;
}
void Rectangulo::setLar(float la)
{
	largo = la;
}
void Rectangulo::setAnc(float an)
{
	ancho = an;
}

