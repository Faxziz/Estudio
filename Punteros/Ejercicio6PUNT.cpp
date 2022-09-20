#include <iostream>
#include <stdlib.h> // new - delete
using namespace std;

//Prototipo de funcion
void pedirdatos();
void buscarElemento(int *,int);

int nElementos, *elemento;

int main() {
	pedirdatos();
	buscarElemento(elemento,nElementos);
	
	delete[] elemento;
	return 0;
}

void pedirdatos() {
	cout << "Digite numero de elementos del arreglo:";
	cin >> nElementos;
	
	elemento = new int[nElementos];
	
	for(int i=0;i<nElementos;i++) {
		cout << "Digite un numero[" <<i <<"]: ";
		cin >> *(elemento+i);
	}
}

void buscarElemento(int *elemento,int nElementos) {
	int dato,i;
	bool band = false;
	
	cout << "\n\nDigite un numero a buscar: ";
	cin >> dato;
	
	i=0;
	while ((i<nElementos)&&(band == false)) {
		if (*(elemento+i) == dato) {
			band == true;
		}
		i++;
	}
	
	if (band == false) {
		cout << "El numero " << dato << " NO existe en el arreglo" << endl;
	}
	else {
		cout << "El numero " << dato << " SI existe en el arreglo, posicion: " << i-1 << endl;
	}
}
