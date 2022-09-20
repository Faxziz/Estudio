#include <iostream>
using namespace std;

int main(){
	int saldo1 = 1000, opc;
	float extra, saldo = 0, retiro;
	
	cout << "Bienvenido al Banco" << endl;
	cout << "1. Ingresar dinero" << endl;
	cout << "2. Retirar dinero" << endl;
	cout << "3. Salir" << endl;
	cout << "Opcion: "; cin >> opc;
	
	switch(opc) {
		case 1: cout << "Digite el monto a ingresar: ";
		cin >> extra;
		saldo = saldo1 + extra;
		cout << "Dinero en cuenta: " << saldo; break;
		
		case 2: cout << "Digite el monto a retirar: "; cin >> retiro;
		if (retiro > saldo1) {
			cout << "NO tiene esa cantidad de dinero.";
		} else {
			saldo = saldo1 - retiro;
			cout << "Dinero en cuenta: " << saldo;
		}
		
		case 3: break;
	
	return 0; }
}
