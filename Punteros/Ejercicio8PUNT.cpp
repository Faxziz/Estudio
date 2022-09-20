#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

void pedirDatos();
char cadena[100];
char letra[1];
int cantVocal(char *, char *);

int main() {
	
	
	return 0;
}

void pedirDatos() {
	cout << "Ingrese una cadena de caracteres: " << endl;
	cin.getline(cadena,100,'\0');
	
	strupr(cadena);
}

int cantVocal(char *cadena, char *letra) {
	int contador = 0;

}
