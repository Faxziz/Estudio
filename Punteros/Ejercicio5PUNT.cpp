#include <iostream>
#include <stdlib.h>
using namespace std;

void pedirDatos();
void ordenar(int *, int);
void mostrar(int *, int);
int n, *elemento;

int main() {
  pedirDatos();
  ordenar(elemento,n);
  mostrar(elemento,n);

  delete[] elemento; //libera la memoria utilizada
  return 0;
}

void pedirDatos() {
  cout << "DIgite el numero de elementos: "; //libera la memoria utilizada
  cin >> n;

  elemento = new int[n];

  for(int i=0;i<n;i++) {
	cout << "Digite un numero [" << i << "]: ";
	cin >> *(elemento+i);
  }
}

void ordenar(int *elemento,int n) {
  int aux;

  for(int i=0;i<n;i++) {
	for(int j=0;j<n-1;j++) {
	  if (*(elemento+j) > *(elemento+j+1)) {
		aux = *(elemento+j);
		*(elemento+j) = *(elemento+j+1);
		*(elemento+j+1) = aux;
	  }
	}
  }
}

void mostrar(int *elemento,int n) {
  cout << "Mostrando arreglo ordenado: ";
  for(int i=0;i<n;i++) {
	cout << *(elemento+i);
  }
}
