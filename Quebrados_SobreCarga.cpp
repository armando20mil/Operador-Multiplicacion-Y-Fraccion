#include <iostream>
using namespace std;

class Quebrado{
	private:
		int numerador, denominador;
	public:
		Quebrado(int,int);
		int getNumerador();
		int getDenominador();
		void setNumerador(int);
		void setDenominador(int);
		Quebrado operator*(Quebrado&);
		void imprimeQuebrado();
};
Quebrado::Quebrado(int nume=1, int den=1){
	numerador = nume;
	denominador = (den == 0) ? 1 : den;
}
int Quebrado::getNumerador(){
	return numerador;
}
int Quebrado::getDenominador(){
	return denominador;
}
void Quebrado::setNumerador(int nume){
	this->numerador = nume;
}
void Quebrado::setDenominador(int den){
	this->denominador = (den == 0) ? 1 : den;
}
Quebrado Quebrado::operator*(Quebrado& Q2){
	int newNumerador = getNumerador()*Q2.getNumerador();
	int newDenominador = getDenominador()*Q2.getDenominador();
	printf("\n--- PROCESO DE LA MULTIPLICACION ---\n");
	printf("%i\t %i\t %i%C%i \t %i\n",getNumerador(),
	Q2.getNumerador(),getNumerador(),158,Q2.getNumerador(), newNumerador);
	printf("---  %c  ---   %c ----- = ----\n",158,26);
	printf("%i\t %i\t %i%C%i \t %i\n",getDenominador(),
	Q2.getDenominador(),getDenominador(),158,Q2.getDenominador(),newDenominador);
	printf("------------------------------------\n");
  	return Quebrado(newNumerador,newDenominador);
}
void Quebrado::imprimeQuebrado(){
	cout<<endl<<"El resultado de la multiplicacion es: "<<endl<<endl;
	cout<<getNumerador()<<"\n--\n"<<getDenominador()<<endl;
}

int main(){
	int n1,n2,d1,d2;
	cout<<"ingrese el numerador de la 1er quebrado:  \t";
	cin>>n1;
	cout<<"ingrese el denominador de la 1er quebrado:\t";
	cin>>d1;
	cout<<"ingrese el numerador del 2do quebrado:    \t";
	cin>>n2;
	cout<<"ingrese el denominador del 2do quebrado:  \t";
	cin>>d2;
	Quebrado Q1(n1, d1);
	Quebrado Q2(n2, d2);
	Quebrado Q3(1, 1);
	Q3 = Q1 * Q2;
	Q3.imprimeQuebrado();
	return 0;
}
