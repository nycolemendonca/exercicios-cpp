/*
	Podemos conventer letras maiusculas e minusculas da seguinte forma:
	- subtraindo 32 a uma letra minuscula: obtemos sua correspondente maiuscula.
	- somando 32 a uma letra maiuscula: obtemos sua correspondente minuscula.
	Escreva um programa que le uma letra minuscula e uma letra maiuscula e que imprime
	suas correspondentes maiuscula e minuscula, respectivamente.
*/

#include <iostream>

using namespace std;

int main(){
		char minuscula, maiuscula;
		
		cout << "Entre com uma letra minuscula: ";
		cin >> minuscula;
		maiuscula = minuscula - 32;
		cout << "Correspondente maiuscula: " << maiuscula << endl;
		cout << endl;
		cout << "Entre com uma letra maiuscula: ";
		cin >> maiuscula;
		minuscula = maiuscula + 32;
		cout << "Correspondente minuscula: " << minuscula << endl;
	
	return 0;
}
