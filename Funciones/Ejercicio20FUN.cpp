#include <iostream>
using namespace std;

int fibonacci(int);

int main() {
  int nSerie;

  do {
	cout << "Ingrese un numero a calcular fibonacci: ";
	cin >> nSerie;
  } while (nSerie <= 0);
  cout << "El fibonacci de " << nSerie << " es: " << fibonacci(nSerie);

  return 0;
}

int fibonacci(int n) {
  int serie = 0;

  if (n == 0) {
	serie = 0;
  } else if (n == 1) {
	serie = 1;
  } else {
	serie = fibonacci(n-1) + fibonacci(n-2);
  }

  return serie;
}
