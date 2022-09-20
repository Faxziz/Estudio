#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
        int numeros[100][100],filas1,columnas1;
        char band= 'F';

        cout << "Digite el numero de filas:";
        cin >> filas1;
        cout << "Digite el numero de columnas:";
        cin >> columnas1;

        for(int i=0;i<filas1;i++) {
                for(int j=0;j<columnas1;j++) {
                        cout << "Digite un numero ["<<i<<"]["<<j<<"]: ";
                        cin >> numeros[i][j];
                }
        }

        if(filas1 == columnas1) {
                for(int i=0;i<filas1;i++) {
                        for(int j=0;j<columnas1;j++) {
                                if(numeros[i][j]==numeros[j][i]) {
                                        band = 'V';
                                }
                        }
                }
        }

        if (band == 'V') {
                cout << "La matriz es simetrica";
        } else {
                cout << "La matriz no es simetrica";
        }
        return 0;
}
