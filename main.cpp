#include <iostream>
#include <locale.h>

using namespace std;


class Pessoa {
	private:
		int day=0;
		int month=0;
		int year=0;
		
		// Métodos privados
		// Pega o mês atual
		string getActualMonth() {
			const char* meses[] = {"Janeiro", "Fevereiro", "Março", "Abril",
                               "Maio", "Junho", "Julho", "Agosto",
                               "Setembro", "Outubro", "Novembro", "Dezembro"};
             
			return meses[month -1];                 
		}
		
		// Retorna o signo
		string getSign() {
			switch(month) {
				// Janeiro
				case 1:
					if (day <= 20) {
						return "Capricórnio";
					} else if (day > 20) {
						return "Aquário";
					}
				break;
				// Fevereiro
				case 2:
					if (day <= 18) {
						return "Aquário";
					} else if (day > 18) {
						return "Peixes";
					}
				break;
				// Março
				case 3:
					if (day <= 20) {
						return "Peixes";
					} else if (day > 20) {
						return "Áries";
					}
				break;
				// Abril
				case 4:
					if (day <= 20) {
						return "Áries";
					} else if (day > 20) {
						return "Touro";
					}
				break;
				// Maio
				case 5:
					if (day <= 20) {
						return "Touro";
					} else if (day > 20) {
						return "Gêmeos";
					}
				break;
				// Junho
				case 6:
					if (day <= 20) {
						return "Gêmeos";
					} else if (day > 20) {
						return "Câncer";
					}
				break;
				// Julho
				case 7:
					if (day <= 22) {
						return "Câncer";
					} else if (day > 22) {
						return "Leão";
					}
				break;
				// Agosto
				case 8:
					if (day <= 22) {
						return "Leão";
					} else if (day > 22) {
						return "Virgem";
					}
				break;
				// Setembro
				case 9:
					if (day <= 22) {
						return "Virgem";
					} else if (day > 22) {
						return "Libra";
					}
				break;
				// Outubro
				case 10:
					if (day <= 22) {
						return "Libra";
					} else if (day > 22) {
						return "Escorpião";
					}
				break;
				// Novembro
				case 11:
					if (day <= 21) {
						return "Escorpião";
					} else if (day > 21) {
						return "Sagitário";
					}
				break;
				// Dezembro
				case 12:
					if (day <= 21) {
						return "Sagitário";
					} else if (day > 21) {
						return "Capricórnio";
					}
				break;
				
				default:
					break;
			}
		}
		
		// Printa a data em extenso
		void printFullDate() {
			cout << day << " de " << getActualMonth() << " de " << year << "\n";
		}
		
		// Printa se é ou não ano Bissexto
		void printBissexto() {
			if (year % 400 == 0) {
				cout << "É bissexto";
			} else if ((year % 4 == 0) && (year % 100 != 0)) {
				cout << "É bissexto";	
			} else {
				cout << "Não é bissexto";
			}
		}
		
	public:
		// Setters
		void setDay(int x) {
			if (x < 1 || x > 31) {
				cout << "Dia inválido!\n";
			} else {
				day = x;
			}
		}
		
		void setMonth(int x) {
			if (x < 1 || x > 12) {
				cout << "Mês inválido!\n";
			} else {
				month = x;
			}
		}

		void setYear(int x) {
			if (x < 1000) {
				cout << "Ano inválido!\n";
			} else {
				year = x;
			}
		}	
		
		// Método que valida os dados e printa os valores
		void getFullResult() {
			if (day > 0 && month > 0 && year > 0) {
				printFullDate();
				cout << "Signo: " << getSign() << "\n";
				printBissexto();
			} else {
				cout << "Dados incorretos para processamento! Tente novamente com dados corretos!";
			}
		}
		
		
};


int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	
	int day;
	int month;
	int year;

	Pessoa p1;
	Pessoa p2;

	cout << "Informe o dia do seu nascimento: ";
	cin >> day;
	p1.setDay(day);
	
	cout << "Informe o mês do seu nascimento: ";
	cin >> month;
	p1.setMonth(month);
	
	cout << "Informe o ano do seu nascimento: ";
	cin >> year;
	p1.setYear(year);
	

	p1.getFullResult();
	
	return 0;
}
