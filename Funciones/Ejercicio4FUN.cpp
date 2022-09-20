#include <iostream>
#include <math.h>

void pedirDatos();
void fraccionaria(float x);

float num1;

int main() {
	pedirDatos();
	fraccionaria(num1);
	
	return 0;
}

void pedirDatos() {
	std::cout << "Ingrese un numero: ";
	std::cin >> num1;
}

void fraccionaria(float x) {
	int entero=x;
	
	float resultado = x-entero;
	
	std::cout << "Esta es la parte fraccionaria: " << resultado;
}

