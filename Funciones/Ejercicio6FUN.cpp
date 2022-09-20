#include <iostream>
#include <algorithm>
using namespace std;

template <class T>
void maximo(T dato1,T dato2,T dato3);

int main() {
	int x = 5;
	int y = 6;
	int u = 9;
	
	maximo(x,y,u);

	return 0;
}

template <class T>
void maximo(T dato1,T dato2,T dato3) {
	T mayor;

	if (dato1>dato2) 
		if (dato1>dato3)
			mayor = dato1;
		else
			mayor = dato3;
	else 
		if (dato2>dato3)
			mayor = dato2;
		else 
			mayor = dato3;

	cout << "El mayor es: " << mayor;
}
