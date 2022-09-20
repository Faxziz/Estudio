#include <iostream>
using namespace std;

int main() {
	char letras1[] = {'a','b','c','d','e'}, letras2[] = {'f','g','h','i','j'};
	char letras3[10];

	//Copiando los elementos de letras1 a letras3
	for(int i=0;i<5;i++) {
		letras3[i] = letras1[i];
	}

	//Copiando los elementos de letras2 a letras3
	for(int i=5;i<10;i++) {
		letras3[i] = letras2[i-5]; //Resta 5 espacios al arreglo para poner los elementos en el nuevo arreglo
	}
	cout << letras3;
}