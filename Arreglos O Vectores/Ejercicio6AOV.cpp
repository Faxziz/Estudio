#include <iostream>
using namespace std;

int main() {
	int numbers[5] = {1,2,3,4,10} ,n, mayor=0, suma = 0;

	for(int i=0;i<n;i++) {
		suma += numbers[i];

		if(numbers[i]>mayor) {
			mayor = numbers[i];
		}
	}
	if(mayor == suma-mayor) {
		cout << "El numero "<<mayor<<" equivale a suma de los demas";
	} else {
		cout << "No existe tal numero";
	}
	return 0;
}