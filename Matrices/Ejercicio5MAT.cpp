#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
        int numeros[3][3],dato;
        int numeros2[3][3];

        srand(time(NULL));
        for(int i=0;i<3;i++) {
                for(int j=0;j<3;j++) {
                        dato=1+rand()%(100);
                        numeros[i][j] = dato;
                }
        }

        for(int i=0;i<3;i++) {
                for(int j=0;j<3;j++) {
                        numeros2[i][j] = numeros[j][i];
                }
        }
        cout << "Matriz original\n";
        for(int i=0;i<3;i++) {
                for(int j=0;j<3;j++) {
                        cout << numeros[i][j]<< " ";
                }
                cout << "\n";
        }
        cout << "Matriz transpuesta\n";
        for(int i=0;i<3;i++) {
                for(int j=0;j<3;j++) {
                        cout << numeros2[i][j]<< " ";
                }
                cout << "\n";
        }
        cout << "\n";
        return 0;
}
