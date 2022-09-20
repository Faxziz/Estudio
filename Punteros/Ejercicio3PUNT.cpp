#include <iostream>
#include <math.h>
using namespace std;

int main() {
  int numeros[10];
  int *dir_num;

  dir_num = numeros;

  for(int i=0;i<10;i++) {
	cout << "Digite un numero en el array [" << i << "]: ";
	cin >> numeros[i];
  }

  for(int i=0;i<10;i++) {
	if (*dir_num % 2 == 0) {
	  cout << "Los numeros pares del array son: " << *dir_num << endl;
	  cout << "La posicion de memoria: " << dir_num << endl;
	}
	dir_num++;
  }

  return 0;
}
