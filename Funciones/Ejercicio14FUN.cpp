#include <iostream>
using namespace std;

void pedirDatos();
void numImpar(int vec[],int tam);

int vec[100];
int tam;

int main() {
	pedirDatos();
	numImpar(vec,tam);

	return 0;
}

void pedirDatos() {
	cout << "Digite el numero de elementos del vector: ";
	cin >> tam;

	for(int i=0;i<tam;i++) {
		cout << "Ingrese los numeros de los elementos del vector: ";
		cin >> vec[i];
	}
}

int Nvec[100];

void numImpar(int vec[],int tam) {
	int vecImpares[100];
	int j=0;
	for(int i=0;i<tam;i++) {
		if(vec[i]%2 != 0) {
			vecImpares[j] = vec[i];
			j++;
		}
	}

	cout << "Impriendo los elementos impares del vector: ";
	for(int i=0;i<j;i++) {
		cout << vecImpares[i] << " ";
	}
}
