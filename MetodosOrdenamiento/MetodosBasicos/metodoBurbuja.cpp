#include <iostream>
using namespace std;

int main() {
        int numeros[] = {4,1,2,3,5};
        int i,j,aux;

        //Algoritmo de metodo burbuja
        for(i=0;i<5;i++) {
                for(j=0;j<5;j++) {
                        if(numeros[j] > numeros[j+1]) {
                                aux = numeros[j];
                                numeros[j] = numeros[j+1];
                                numeros[j+1] = aux;
                        }
                }
        }

        cout << "Orden ascendente: ";
        for(i=0;i<5;i++) {
                cout << numeros[i];
        }

        cout << "Orden descendete: ";
        for(i=4;i>=0;i--) {
                cout << numeros[i] << " ";
        }

        return 0;
}
