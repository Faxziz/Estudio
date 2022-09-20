#include <iostream>
using namespace std;

int main() {
	int n,factorial = 1;

	cout << "Ingresa el numero a factorizar: "; cin >> n;

	for(int i=1;i<=n;i++) {
		factorial *= i;
	}

	cout << "El factorial de " << n <<" es: " << factorial;
	return 0;
}