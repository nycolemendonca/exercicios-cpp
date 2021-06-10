/*
	Os caracteres imprimiveis da tabela ASCII (caracteres 32 a 127) podem ser 
	interpretados tanto como numero quanto como caracteres. Escreva um programa que
	imprime os mesmos em formato decimal, hexadecimal e como caractere no formato 
	ilustrado a seguir: para a linha associada ao caractere 'A', teriamos como saida:
	065 - 41 - A.
*/

#include <iostream>

using namespace std;

int main(){
	
	int i;
	
	cout << "dec - hex - char" << endl;
	cout << endl;
	
	for (i = 32; i >= 32 && i <= 127; i++)
	{
		cout << dec << i << " - " << hex << i << " - " << (char) i << endl;
	}
	
	return 0;
}
