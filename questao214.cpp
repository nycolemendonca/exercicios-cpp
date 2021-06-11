/*
	Construir um programa para calcular as ra�zes de uma equa��o do 2 grau, 
	sendo que os valores dos coeficientes A, B e C devem ser fornecidos pelo
	usu�rio atrav�s do teclado.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	float a, b, c, delta, x1, x2;
	
	cout << "Entre com o valor de A: ";
	cin >> a;
	cout << "Entre com o valor de B: ";
	cin >> b;
	cout << "Entre com o valor de C: ";
	cin >> c;	
	
	delta = (b*b - 4*a*c);
	
	if (delta > 0){ // Testa se as ra�zes s�o reais e distintas.
		x1 = (-b + sqrt(delta))/(2*a);
		x2 = (-b - sqrt(delta))/(2*a);
		cout << "x1 = " << x1 << ", x2 = " << x2 << endl;
	}
	
	return 0;
}
