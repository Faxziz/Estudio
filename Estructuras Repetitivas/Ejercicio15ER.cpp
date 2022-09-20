#include <iostream>
#include <time.h>
using namespace std;

int main() {
	int n, dato, conteo = 0;

	srand(time(NULL));
	dato = 1+rand()%(100);

	do {
		cout << "Digite un numero: "; cin >> n;

		if(n>dato) {
			cout << "\nDigite un numero menor\n";
		}
		if(n<dato) {
			cout << "\nDigite un numero mayor\n";
		}
		conteo++;
	} while(n != dato);
	cout << "\nFelicidades, adivinaste el numero\n";
	cout << "\nNumero de intentos: " << conteo << endl;
	return 0;
}