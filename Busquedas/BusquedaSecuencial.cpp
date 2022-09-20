#include <iostream>
using namespace std;


//BUSQUEDA SECUENCIAL
//A[5] = {3,4,2,1,5}; DATO = 4

int main() {
        int a[] = {3,4,2,1,5};
        int i, dato;
        char band = 'F';

        //BUSQUEDA SECUENCIAL
        i = 0;
        dato = 4;
        while ((band == 'F') && (i<5)) {
                if(a[i] == dato) {
                        band = 'V';
                }
                i++;
        }

        if (band == 'F') {
                cout << "El numero no existe en el arreglo";
        }
        else if (band == 'V') {
                cout << "El numero ha sido encontrado en la pos: " << i-1 << endl;
        }
        return 0;
}
