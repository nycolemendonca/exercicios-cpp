/*
	Escreva um programa que imprima os bits de um número inteiro não-negativo de 16 bits.
*/

#include <iostream>
#include <bitset>

using namespace std;

int main(){
	
	unsigned short int a;
	
	cout << "Entre com o numero: ";
	cin >> a;	
	cout << "Numero em binario: " << bitset<16>(a) << endl;
	
	return 0;
}
