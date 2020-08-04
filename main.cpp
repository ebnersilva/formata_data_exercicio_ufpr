#include <iostream>
#include <locale.h>

using namespace std;


class Pessoa {
	private:
		int day=0;
		int month=0;
		int year=0;
		
		// M�todos privados
		// Pega o m�s atual
		string getActualMonth() {
			const char* meses[] = {"Janeiro", "Fevereiro", "Mar�o", "Abril",
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
						return "Capric�rnio";
					} else if (day > 20) {
						return "Aqu�rio";
					}
				break;
				// Fevereiro
				case 2:
					if (day <= 18) {
						return "Aqu�rio";
					} else if (day > 18) {
						return "Peixes";
					}
				break;
				// Mar�o
				case 3:
					if (day <= 20) {
						return "Peixes";
					} else if (day > 20) {
						return "�ries";
					}
				break;
				// Abril
				case 4:
					if (day <= 20) {
						return "�ries";
					} else if (day > 20) {
						return "Touro";
					}
				break;
				// Maio
				case 5:
					if (day <= 20) {
						return "Touro";
					} else if (day > 20) {
						return "G�meos";
					}
				break;
				// Junho
				case 6:
					if (day <= 20) {
						return "G�meos";
					} else if (day > 20) {
						return "C�ncer";
					}
				break;
				// Julho
				case 7:
					if (day <= 22) {
						return "C�ncer";
					} else if (day > 22) {
						return "Le�o";
					}
				break;
				// Agosto
				case 8:
					if (day <= 22) {
						return "Le�o";
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
						return "Escorpi�o";
					}
				break;
				// Novembro
				case 11:
					if (day <= 21) {
						return "Escorpi�o";
					} else if (day > 21) {
						return "Sagit�rio";
					}
				break;
				// Dezembro
				case 12:
					if (day <= 21) {
						return "Sagit�rio";
					} else if (day > 21) {
						return "Capric�rnio";
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
		
		// Printa se � ou n�o ano Bissexto
		void printBissexto() {
			if (year % 400 == 0) {
				cout << "� bissexto";
			} else if ((year % 4 == 0) && (year % 100 != 0)) {
				cout << "� bissexto";	
			} else {
				cout << "N�o � bissexto";
			}
		}
		
	public:
		// Setters
		void setDay(int x) {
			if (x < 1 || x > 31) {
				cout << "Dia inv�lido!\n";
			} else {
				day = x;
			}
		}
		
		void setMonth(int x) {
			if (x < 1 || x > 12) {
				cout << "M�s inv�lido!\n";
			} else {
				month = x;
			}
		}

		void setYear(int x) {
			if (x < 1000) {
				cout << "Ano inv�lido!\n";
			} else {
				year = x;
			}
		}	
		
		// M�todo que valida os dados e printa os valores
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
	
	cout << "Informe o m�s do seu nascimento: ";
	cin >> month;
	p1.setMonth(month);
	
	cout << "Informe o ano do seu nascimento: ";
	cin >> year;
	p1.setYear(year);
	

	p1.getFullResult();
	
	return 0;
}
