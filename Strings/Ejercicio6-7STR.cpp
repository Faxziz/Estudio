#include <iostream>
#include <string.h>
using namespace std;

int main() {
        char palabra1[100], palabra2[100],nombre[100];

        cout << "Ingrese una palabra: ? ";
        cin.getline(palabra1);
        cout << "Ingrese otra palabra: ? ";
        cin.getline(palabra2);

        strupr(palabra1);
        strupr(palabra2);

        if (strcmp(palabra1,palabra2)==0) {
                cout << palabra1 << " y " << palabra2 << " son iguales";
        } else {
                cout << "Las palabras no son iguales";
        }

        cout << "Ingrese su nombre en MAYUSCULAS: ";
        cin.getline(nombre,100,'\n');

        if(strncmp(nombre,"A",1) == 0) { //Comprobacion de numeros de caracteres en una posicion)
                             strlwr(nombre);
                             cout << nombre << endl;
        } else {
                cout << "El nombre no comienza con la letra A" << endl;
        }
        return 0;
}
