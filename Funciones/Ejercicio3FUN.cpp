#include <iostream>
#include <math.h>
using namespace std;

void pedirDatos();
void funpot(int x,int y);

int num1,exponente;

int main() {
	pedirDatos();
	funpot(num1,exponente);
	
	return 0;
}

void pedirDatos(){
	cout << "Ingrese un numero: ";
	cin >> num1;
	cout << "Ingrese el exponente de elevacion: ";
	cin >> exponente;
}

void funpot(int x, int y) {
	int funcion = pow(x,y);
	cout << "La operacion es: " << funcion;
}
