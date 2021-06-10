/*
	Escreva um programa que converte letra maiusculas em letras minusculas e vice-versa
	usando as funcoes da biblioteca <cctype> char toupper(char c) e char tolower (char c).
*/

#include <iostream>
#include <cctype>

using namespace std;

int main(){
	char letraMinus, maiuscula, letraMaius, minuscula;
	
	cout << "Entre com uma letra minuscula: ";
	cin >> letraMinus;	
	maiuscula = toupper (letraMinus);
	cout << "Correspondente maiuscula: " << maiuscula << endl;
	cout << endl;
	cout << "Entre com uma letra maiuscula: ";
	cin >> letraMaius;
	minuscula = tolower (letraMaius);
	cout << "Correspondente minuscula: " << minuscula << endl; 


	
	return 0;
}
