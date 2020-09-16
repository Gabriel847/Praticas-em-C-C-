#include <iostream>
using namespace std;

int main(){
	char aux[35]; 

	struct peixe {
		string tipo;
	    int peso;
	    float comprimento;
	}p;
	
	cout << "Tipo: ";
	cin >> p.tipo;
	cout << "Peso: ";
	cin >> p.peso;
	cout << "Comprimento: ";
	cin >> p.comprimento;
	
	cout << "\n Tipo: " << p.tipo << "\n Peso: " << p.peso << " Kg\n Comprimento: " << p.comprimento << " cm";
			
	return 0;
}
