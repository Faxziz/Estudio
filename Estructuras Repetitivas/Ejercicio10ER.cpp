#include <iostream>
using namespace std;

int main() {
	int n, m, factorial = 1, suma = 0;

	cout << "Ingrese el numero a factorizar: "; cin >> n;
	for(int i=1;i<=n;i++){
		factorial *= i;
		suma += factorial;
	}
	cout << "La suma de los factoriales es: " << suma;
	return 0;
}