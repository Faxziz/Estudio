//ORDENAMIENTO INDIRECTOS
#include <iostream>
using namespace std;

void intercambio(float &x,float &y) {
        float aux;
        
        aux = x;
        x = y;
        y = aux;
}

void ordenacionShell (float a[], int n) {
        int salto,i,j,k;
        salto = n/2;

        while (salto > 0) {
                for(i=salto;i<n;i++) {
                        j = i - salto;
                        while (j >= 0) {
                                k = j + salto;
                                if (a[j] <= a[k]) {
                                        j = -1;
                                }
                                else { //Par de elementos estan desordenados
                                        intercambio(a[j],a[k]);
                                        j -= salto;
                                }
                        }
                }
                salto = salto/2;
        }
}

int main() {
        float arreglo[] = {4,6,1,9,5,10,2,11,19,7};

        ordenacionShell(arreglo,10);

        cout << "Arreglo ordenado - Forma ascendente" << endl;
        for (int i=0;i<10;i++) {
                cout << arreglo[i] << " | ";
        }

        cout << "Arreglo ordenado - Forma descendente" << endl;
        for(int i=9;i>=0;i--) {
                cout << arreglo[i] << " | ";
        }

        return 0;
}
