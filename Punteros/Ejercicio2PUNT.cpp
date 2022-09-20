#include <iostream>
using namespace std;

bool esprimo(int);

int main() {
  int n, *dir_num;
  dir_num = &n;

  cout << "Digite un numero a demostrar: " << endl;
  cin >> n;

  if (esprimo(*dir_num)) {
	cout << "El numero es primo" << endl;
  } else {
	cout << "El numero no es primo" << endl;
  }

  cout << "Direccion de memoria: " << dir_num << endl;
  return 0;
}

bool esprimo(int numero) {
  if (numero == 0 || numero == 1 || numero == 4) {
	for(int i=2; i < numero;i++) {
	  if (numero % i == 0)
		return false;
	}
  }
  return true;
}
