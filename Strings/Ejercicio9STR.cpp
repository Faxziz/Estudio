#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main() {
        char cad[100];
        int contador = 0;
        cout << "Ingrese una cadena de caracteres: ";
        cin.getline(cad,100,'\n');

        for(int i=0;i<100;i++) {
                switch(cad[i]) {
                        case 'a': contador++; break;
                        case 'e': contador++; break;
                        case 'i': contador++; break;
                        case 'o': contador++; break;
                        case 'u': contador++; break;
                }
        }

        cout << "La cantidad de vocales en total: " << contador << endl;
}
