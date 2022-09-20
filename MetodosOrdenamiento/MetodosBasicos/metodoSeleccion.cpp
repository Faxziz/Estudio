#include <iostream>
using namespace std;

int main () {
        int numeros[] = {4,2,1,3,5};
        int i,j,aux,min;

        //Algoritmo de ordenamiento por seleccion
        for(i=0;i<5;i++) {
                min = i; //Suponemos que es el numero minimo
                for(j=i+1;j<5;i++) {
                        if(numeros[j] < numeros[min]) {
                                        min = j;
                                        }
                }
                aux = numeros[i];
                numeros[i] = numeros[min];
                numeros[min] = aux;
        }

        cout << "Orden ascendente: ";
        for(i=0;i<5;i++) {
                cout << numeros[i] << " ";
        }

        cout << "Orden descendente: ";
        for(i=4;i>=0;i--) {
                cout << numeros[i] << " ";
        }
        return 0;
}
