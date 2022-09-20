#include <iostream>
#include <string.h>
using namespace std;

int main() {
        char cadena[100];
        int longitud;

        cout << "Digite una cadena cualquiera: ";
        cin.getline(cadena,100,'\n');

        longitud = strlen(cadena);

        if (longitud > 10) {
                cout << cadena << endl;
        } else {
                cout << "La cadena no supera a 10 caracteres";
        }

        return 0;
}
