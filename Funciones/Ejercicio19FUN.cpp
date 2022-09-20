#include <iostream>
using namespace std;

int sumar(int);

int main() {
  int nEl;

  do {
	cout << "Digite el numero de elementos: ";
	cin >> nEl;
  } while(nEl <= 0);

  cout << "La suma de los primeros N enteros es: " << sumar(nEl);
  return 0;
}

int sumar(int n) {
  int suma = 0;
  if (n == 1) {
	suma = 1;
  } else {
	suma = n + sumar(n-1);
  }
  return suma;
}
