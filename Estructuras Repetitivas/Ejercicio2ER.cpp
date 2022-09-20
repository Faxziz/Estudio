//EJERCICIO 2 CONTANDO MAYORES A 0
#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	int numero, conteo = 0;
	do {
		cout<<"Digite un numero: ";
		cin >> numero;

		if(numero>0) {
			conteo++;
		}

	} while(numero != 0);

	cout << "El numero de valores mayores a cero introducidos es: " << conteo <<endl;

	cout<<"\n\n";
	system("pause");
	return 0;
}