#include <iostream>
#include <math.h>
using namespace std;

int suma(int vec[],int);

int main() {
	const int TAM = 5;
	int vec[TAM] = {2,3,5,7,9};

	cout << "La suma de los numeros del vector es: " << suma(vec,TAM);
	return 0;
}

int suma(int vec[],int tam) {
	int resultado = 0;
	for(int i=0;i<tam;i++) {
		resultado += vec[i];
	}
	return resultado;
}
