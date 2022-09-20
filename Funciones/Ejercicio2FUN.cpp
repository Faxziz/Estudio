#include <iostream>
#include <math.h>
using namespace std;

void pedirDatos();
void al_cuadrado(float x);

float num1;

int main() {
	pedirDatos();
	al_cuadrado(num1);
	
	return 0;
}

void pedirDatos() {
	cout << "Ingrese un numero: ? ";
	cin >> num1;
}

void al_cuadrado(float x) {
	float cuadrado = pow(x,2);
	cout << cuadrado;
}
