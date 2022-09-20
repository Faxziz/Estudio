#include <iostream>
using namespace std;

int main() {
	int matriz[2][2] = {{1,2},{3,4}};
	int matriz2[2][2];

	//Pasando el contenido de matriz
	for(int i=0;i<2;i++) {
		for(int j=0;j<2;j++) {
			matriz2[i][j] = matriz[i][j];
		}
	}

	//Salida de matriz
	for(int i=0;i<2;i++) {
		for(int j=0;j<2;j++) {
			cout << matriz2[i][j];
		}
	}
	cout << "\n";
	return 0;
}