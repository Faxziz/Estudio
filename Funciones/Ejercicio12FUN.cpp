#include <iostream>
using namespace std;

void ordenado(int vec[],int);
void pedirDatos();

int vec[100];
int tam;

int main() {
	pedirDatos();
	ordenado(vec,tam);
	return 0;
}

void ordenado(int vec[],int tam) {
	char band = 'F';
	int i=0;
	while ((band == 'F') && (i<tam-1)) {
		if (vec[i] < vec[i+1]) {
			band = 'V';
		}
		i++;
	}

	if (band == 'F') {
		cout << "El arreglo esta ordenado CRECIENTEMENTE";
	} else {
		cout << "El arreglo NO esta ordenado";
	}
}

void pedirDatos() {
	cout << "Digite el numero de elementos del vector: ";
	cin >> tam;

	for(int i=0;i<tam;i++) {
		cout << "Ingrese un numero: ";
		cin >> vec[i];
	}
}
