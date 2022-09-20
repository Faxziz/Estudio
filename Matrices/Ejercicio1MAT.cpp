#include <iostream>
using namespace std;

int main() {
	int numeros[100][100],filas,columna;

	cout << "Ingrese el numero de filas: ";
	cin >> filas;
	cout << "Ingrese el numero de columnas: ";
	cin >> columna;

	for(int i=0;i<filas;i++) {
		for(int j=0;j<columna;j++) {
			cout << "Digite un numero ["<<i<<"]["<<j<<"]: "; //[0][1]
			cin >>numeros[i][j];
		}
	}

	for(int i=0;i<filas;i++) {
		for(int j=0;j<columna;j++) {
			cout << numeros[i][j];
		}
		cout << "\n";
	}
	return 0;
}