#include <iostream>
#include <math.h>
using namespace std;

int arr[100][100],nfilas,ncol;

void pedirDatos();
void menorFila(int arr[][100],int,int,int);

int main() {
  pedirDatos();

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
      cin >> arr[i][j];
    }
  }
}

void menorFila(int arr[][100],int nfilas,int ncol,int N) {
  int aux;
  for(int i=0;i<nfilas;i++) {

  }
}

