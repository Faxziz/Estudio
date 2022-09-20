#include <iostream>
using namespace std;

int main() {
  int numeros[100],n,*dir_num, menor=99999; 

  cout << "Digite el numero de elementos del array: ";
  cin >> n;

  for(int i=0;i<n;i++) {
	cout << "Digite un numero [" << i << "]: ";
	cin >> numeros[i];
  }
  
  dir_num = numeros;
  for(int i=0;i<n;i++) {
	if (*dir_num < menor) {
	  menor = *dir_num;
	}
	dir_num++;
  }

  cout << "El menor elemento es: " << menor;

  return 0;
}
