#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;


int main() {
	int numeros[100][100], dato,filas, columnas;
    int numeros2[100][100];

    cout << "Digite el numero de filas: ";
    cin >> filas;
    cout << "Digite el numero de columnas: ";
    cin >> columnas;

    srand(time(NULL)); 
	for(int i=0;i<filas;i++) {
		for(int j=0;j<columnas;j++) {
                dato = 1+rand()%(100);
                numeros[i][j];
		}
	}

    for(int i=0;i<filas;i++) {
            for (int j=0;j<columnas;j++) {
                    numeros2[i][j] = numeros [i][j];
            }
    }

     for(int i=0;i<filas;i++) {
            for (int j=0;j<columnas;j++) {
                    cout << numeros2[i][j] << " ";
            }
    }
	cout<<"\n";
	return 0;
}


