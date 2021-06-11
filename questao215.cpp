/*
	Crie um programa que a partir da idade e peso do paciente calcule a dosagem de determinado
	medicamento e imprima a receita informando quantas gotas do medicamento o paciente deve tomar
	por dose. Considere que o medicamento em questao possui 500 mg por ml, e que cada ml corresponde
	a 20 gotas.
		
		1. Adultos ou adolescentes desde 12 anos, inclusive, se tiverem peso igual ou acima de 60 kg
		devem tomar 1000 mg.
		2. Adultos ou adolescentes desde 12, inclusive, com peso abaixo de 60 kg devem tomar 875 mg.
		3. Para criancas e adolescentes abaixo de 12 anos a dosagem e calculada pelo peso corporeo
		conforme a tabela a seguir:
		
			peso                   dosagem
			------------------------------
			5 kg a 9 kg             125 mg
			9,1 kg a 16 kg			250 mg
			16,1 kg a 24 kg			375 mg
			24,1 kg a 30 kg			500 mg
			acima de 30 kg			750 mg
*/

#include <iostream>

using namespace std;

int main(){
	
	float peso;
	int idade, dosagem;
	
	cout << "DOSAGEM DO MEDICAMENTO" << endl;
	cout << endl;
	cout << "Informe a idade do paciente (em anos): ";
	cin >> idade;
	cout << "Informa o peso do paciente (em kg): ";
	cin >> peso;
	cout << endl;
	
	if (idade >= 12 && peso >= 60){
		dosagem = 1000/25;
		cout << "O paciente deve tomar " << dosagem << " gotas." << endl;
	}
		else{
			if (idade >= 12 && peso < 60){
				dosagem = 875/25;
				cout << "O paciente deve tomar " << dosagem << " gotas." << endl;
			}
			else{
				if (peso >= 5 && peso <= 9){
					dosagem = 125/25;
					cout << "O paciente deve tomar " << dosagem << " gotas." << endl;
				}
				if (peso >= 9.1 && peso <= 16){
					dosagem = 250/25;
					cout << "O paciente deve tomar " << dosagem << " gotas." << endl;
				}
				if (peso >= 16.1 && peso <= 24){
					dosagem = 375/25;
					cout << "O paciente deve tomar " << dosagem << " gotas." << endl;
				}
				if (peso >= 24.1 && peso <= 30){
					dosagem = 500/25;
					cout << "O paciente deve tomar " << dosagem << " gotas." << endl;
				}
				else {
					dosagem = 750/25;
					cout << "O paciente deve tomar " << dosagem << " gotas." << endl;
				}
			}
		}
		
	return 0;
}
