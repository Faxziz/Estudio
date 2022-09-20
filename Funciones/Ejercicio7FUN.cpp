#include <iostream>
#include <math.h>
using namespace std;

void intercambio(float&,float&);

int main() {
	float num1, num2;

	cout << "Digite 2 numeros: ";
	cin >> num1 >> num2;

	intercambio(num1,num2);
	return 0;
}

void intercambio(float& num1,float& num2) {
	cout << "El valor del primero numero es: " << num1;
	cout << "El valor del segundo numero es: " << num2;

	float Nnum1, Nnum2;
	Nnum1 = num2;
	Nnum2 = num1;
	cout << "El nuevo valor del primer numero es: " << Nnum1;
	cout << "El nuevo valor del segundo numero es: " << Nnum2;
}
