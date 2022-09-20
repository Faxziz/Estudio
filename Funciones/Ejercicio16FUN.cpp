#include <iostream>
#include <math.h>
using namespace std;

void pedirDatos();
int comprobarMenorElemento(int m[][100],int,int);

int m[100][100],nfilas,ncol;

int main() {
  pedirDatos();

  cout << "EL menor elemento es: " << comprobarMenorElemento(m,nfilas,ncol);
  return 0;
}


void pedirDatos() {
  cout << "Ingrese el numero de filas de la matriz: ";
  cin >> nfilas;
  cout << "Ingrese el numero de columnas de la matriz: ";
  cin >> ncol;

  for(int i=0;i<nfilas;i++) {
    for(int j=0;j<ncol;j++) {
      cout << "Ingrese un numero [" << i <<"][" << j << "]: ";
      cin >> m[i][j];
    }
  }
}

int comprobarMenorElemento(int m[][100],int nfilas,int ncol) {
  int fila, menor=99999;

  cout << "\nDigite un numero de fila para comprobar menor elemento: ";
  cin >> fila;

  for(int i=0;i<nfilas;i++) {
	for(int j=0;j<ncol;j++) {
	  if(i==fila) {
		if(m[i][j] < menor) {
		  menor = m[i][j];
		}
	  }
	}
  }

  return menor;
}

