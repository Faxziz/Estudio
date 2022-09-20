#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

char vocales[6] = {'a','e','i','o','u'};
void pedirdatos();
int cantVocales(char *);
char nombreUsuario[100];

int main() {
	pedirdatos();
	cout << "\nEl numero de vocales del nombre es: " << cantVocales(nombreUsuario) << endl;
	return 0;
}

void pedirdatos() {
	cout << "Digite su nombre: ";
	cin.getline(nombreUsuario,30,'\n');
	
	strupr(nombreUsuario);
}

int cantVocales(char *nombre) {
	int contador = 0;
	
	while(*nombre) {
		switch(*nombre) {
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U': contador++;
		}
		nombre++;
		}
	return contador;
}
