#include <iostream>
using namespace std;

int main() {
	int n, potencia = 1, suma = 0;

	cout << "Digite el numero para potencia de 2 proximo a sumar: ";
	cin >> n;

	for(int i=1;i<=n;i++) {
		potencia *= 2;
		suma += potencia;
	}
	cout << "La suma de las potencias de 2 es: " << suma; 
	return 0;
}