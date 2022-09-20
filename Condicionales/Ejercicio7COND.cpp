#include <iostream>
using namespace std;

int main() {
	int n;
	
	cout << "Digite un numero: ? "; cin >> n;
	
	if ((n >= 18) && (n <= 25)) {
		cout << "Se encuentra dentro del rango";
	} else {
		cout << "No se encuentra dentro del rango";
	}
	
	return 0;
}
