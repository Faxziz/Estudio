#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int n,opc,num;
	float calculo;
	
	cout << "Que desea?" << endl;
	cout << "1. El cubo del numero: " << endl; 
	cout << "2. Determinar si es par o impar: " << endl;
	cout << "3. Salir" << endl;
	cout << "Opcion: "; cin >> opc;
	
	switch (opc) {
		case 1: cout << "Digite un numero: "; cin >> n;
		calculo = pow(n, 3);
		cout << "El cubo es: " << calculo << endl; break;
		
		case 2: cout << "Digite un numero: "; cin >> num;
		if (num%2 == 0){
			cout << "El numero " << num << " es par";
		} else {
			cout << "El numero " << num << " es impar";
		} break;
		
		case 3: break;
		}
	return 0;
}
