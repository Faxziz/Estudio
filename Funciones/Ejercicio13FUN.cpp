#include <iostream>
using namespace std;

void cambioSigno(int vec[],int);
void pedirDatos();
void despliegue(int vec[],int);

int vec[100];
int tam;

int main() {
	pedirDatos();
	cambioSigno(vec,tam);
	despliegue(vec,tam);
	return 0;
}

void pedirDatos() {
	int tam;

	cout << "Ingrese el numero de elementos del vector: ";
	cin >> tam;

	for(int i=0;i<tam;i++) {
		cout << "Ingrese los numeros propios del vector: ";
		cin >> vec[i];
	}
}

void cambioSigno(int vec[],int tam) {
	for(int i=0;i<tam;i++) {
		vec[i]*=-1;
		}
}

void despliegue(int vec[],int tam) {
	cout << "Mostrando el vector con signos cambiado: ";
	for(int i=0;i<tam;i++) {
		cout << vec[i] << " ";
	}
}
