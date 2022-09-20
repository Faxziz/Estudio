#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main() {
        int numeros[100][100],filas,columnas;
        int numeros2[100][100],filas1,columnas1;

        //MATRIZ 1
        cout << "Digite el numero de filas:";
        cin >> filas;
        cout << "Digite el numero de columnas:";
        cin >> columnas;

        for(int i=0;i<filas;i++) {
                for(int j=0;j<columnas;j++) {
                        cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
                        cin >> numeros[i][j];
                }
        }
        //MATRIZ 2
        cout << "Digite el numero de filas:";
        cin >> filas;
        cout << "Digite el numero de columnas:";
        cin >> columnas;
        
        for(int i=0;i<filas;i++) {
                for(int j=0;j<columnas;j++) {
                        cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
                        cin >> numeros2[i][j];
                }
        }
       
        //CUADRADAS?
        if((filas==columnas) && (filas1==columnas1)) {
                for(int i=0;i<filas;i++) {
                        for(int j=0;j<columnas;j++) {
                                cout << numeros[i][j] * numeros2[i][j] << " ";
                        }
                }
        } else {
                cout << "Las matrices, no son cuadradas";
        }
        cout << "\n";
        return 0; 
}
