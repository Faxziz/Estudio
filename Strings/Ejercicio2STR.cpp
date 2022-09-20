#include <iostream>
#include <string.h>
using namespace std;

int main() {
        char cadena[100],cadena2[100];

        cout << "Digite una frase: ";
        cin.getline(cadena,100,'\n');

        strcpy(cadena2,cadena1);
        cout << cadena2 << endl;
        return 0;
}
