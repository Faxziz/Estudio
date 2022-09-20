#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main () {
        char palabra[100];
        char palabra2[100];

        cout << "Ingrese una palabra: ";
        cin.getline(palabra,100,'\n');

        strcpy(palabra2,palabra);
        strrev(palabra2);

        if (strcmp(palabra,palabra2) == 0) {
                cout << "La palabra es palindroma";
        } else {
                cout << "La palabra no es palindroma";
        }
        return 0;
}
