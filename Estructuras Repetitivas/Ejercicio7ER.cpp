#include <iostream>
using namespace std;

int main() {
	int n, suma = 0;

	cout << "Digite hasta que numero quiere sumar: "; cin>>n;

	for(int i=0;i<=n;i++) {
		suma += i;
	}

	cout << "El resultado de la suma es: " << suma;

	return 0;
}