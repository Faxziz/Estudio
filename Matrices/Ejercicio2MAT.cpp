#include <iostream>
using namespace std;

int main() {
	int numeros[][], filas, columnas;

	for(int i=0;i<filas;i++) {
		for(int j=0;j<columnas;j++) {
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
			cin>>numeros[i][j];
		}
	}
	cout<<"Matriz completa: ";
	for(int i=0;i<filas;i++) {
		for(int j=0;j<columnas;j++) {
			cout << numeros[i][j];
		}
		cout << "\n";
	}

	cout << "Diagonal principal: ";
	for(int i=0;i<filas;i++) {
		for(int j=0;j<columnas;j++) {
			if(i==j) {
				cout << numeros[i][j];
			}
		}
	}
	return 0;
}
