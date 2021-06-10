/*
	Escreva um programa que leia uma quantidade indefinida de numeros inteiros positvos
	e que calcule e imprima i) a soma dos numeros pares, ii) a media dos numeros pares,
	iii) a soma dos numeros impares; iv) a media dos numeros impares. Um numero negativo
	encerra a entrada de dados.
*/

#include <iostream>

using namespace std;

int main(){
	
	int num, somaPar, somaImpar;
	
	do{
		cout << "Entre com um numero inteiro positivo: ";
		cin >> num;	
	
		if (num % 2 == 0){
			somaPar += num; // Soma dos numeros pares
		}		
		else{
			somaImpar += num; // Soma dos numeros impares
		}
			
	} while (num >= 0); //Condicao de parada: Entrada de um numero negativo.
	
	cout << "Soma dos numeros pares: " << somaPar << endl;
	cout << "Soma dos numeros imapares: " << somaImpar << endl;	
	
	
	return 0;
}
