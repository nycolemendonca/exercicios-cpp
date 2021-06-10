/*
	Escreva um programa que leia um horario do dia na forma de tres inteiros nao-negativos
	de 16 bits: um para as horas, outro para os minutos e outro para os segundos. Considere
	o formato de 24h e considerando o periodo de 6 horas, imprima se o horario fornecido
	encontra-se na madrugada (primeiras 6 horas do dia), manha, tarde, ou noite (ultimas 
	6 horas do dia).
*/

#include <iostream>

using namespace std;

int main(){
	
	int hora;
	
	cout << "Digite a hora no formato 24h: ";
	cin >> hora;
	
	if(hora >= 0 && hora <= 23){
		
		if (hora >= 0 && hora < 6){ cout << "Este horario corresponde a MADRUGADA." << endl; }
		if (hora >= 6 && hora < 12){ cout << "Este horario corresponde a MANHA." << endl; }
		if (hora >= 12 && hora < 18){ cout << "Este horario corresponde a TARDE." << endl; }
		if (hora >= 18 && hora <= 23){ cout << "Este horario corresponde a NOITE." << endl; }
		
	} else { cout << "O valor informado e invalido." << endl; }
	
	return 0;
}
