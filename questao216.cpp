/*
	Construa um programa para determinar a situacao (APROVRADO/EXAME/REPROVADO) de um aluno,
	dado a sua frequencia (FREQ) (porcentagem de 0 a 100%) e sua nota (NOTA) (nota de 0.0 a
	10.0), sendo que:
	
		Condicao				                             Situacao
		---------------------------------------------------------------
		Frequencia de ate 75%				                 Reprovado
		Frequencia entre 75% e 100% e Nota ate 3.0		     Reprovado
		Frequencia entre 75% e 100% e Nota de 3.0 ate 7.0    Exame
		Frequencia entre 75% e 100% e Nota de 7.0 ate 10.0   Aprovado	
*/

#include <iostream>

using namespace std;

int main(){
	
	int frequencia;
	float nota;
	
	cout << "Frequencia do(a) aluno(a): ";
	cin >> frequencia;
	cout << "Entre com a nota do(a) aluno(a): ";
	cin >> nota;
	
	if (frequencia <= 75){
		cout << "Situacao: Reprovado(a) por faltas." << endl;
	} 
	else{
		if ((frequencia >= 75 && frequencia <= 100) && nota <= 3){
			cout << "Situacao: Reprovado(a). Sua nota e insuficiente." << endl;
		}
		else{
			if ((frequencia >= 75 && frequencia <= 100) && (nota >= 3 && nota <= 7)){
				cout << "Situacao: Exame" << endl;
			}
			else{
				if ((frequencia >= 75 && frequencia <= 100) && (nota >= 7 && nota <= 10)){
				cout << "Situacao: Aprovado, Parabens!" << endl;
			}
		} 
	}
		
	}
	
	return 0;
}
