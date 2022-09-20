#include <iostream>
#include <math.h>
using namespace std;

template <class T>
void despliegue(T dato);

int main() {
	int dato1 = 4;
	float dato2 = 15.67;
	double dato3 = 567.7890;
	char dato4 = 'a';

	despliegue(dato1);
	despliegue(dato2);
	despliegue(dato3);
	despliegue(dato4);
	return 0;

};

template <class T>
void despliegue(T dato) {
	cout << "El dato es: " << dato << endl;
}
