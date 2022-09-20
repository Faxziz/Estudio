#include <iostream>
#include <string.h>
using namespace std;

int main() {
        char palabra[100], palabra2[100];

        cout << "Digite una cadena de caracteres: ";
        cin.getline(palabra,100,'\n');
        cout << "Digite otra cadena de caracteres: ";
        cin.getline(palabra2,100,'\n');

        if (strcmp(palabra,palabra2) == 0) {
                cout << "Las cadenas son iguales";
        } else if (strcmp(palabra,palabra2) > 0) {
                cout <<palabra<<" es mas chica alfabeticamente";
        } else {
                cout <<palabra2<<" es mas chica alfabeticamente";
        }
        return 0;
}
