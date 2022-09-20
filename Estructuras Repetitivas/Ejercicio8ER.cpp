#include <iostream>
using namespace std;

int main() {
	int n, suma = 0;
	cout << "Digite el numero n a calcular: "; cin >> n;

	for(int i=1;i<=2*n-1;i+=2) {
		suma += i;
	}
	cout << "El resultado de la suma es: " << suma << endl;

	return 0;
}