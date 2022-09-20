#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main() {
        char cad1[100], cad2[100];
        float suma;

        cout << "Ingrese un numero entero: ";
        cin.getline(cad1,100,'\n');
        cout << "Ingrese un numero real: ";
        cin.getline(cad2,100,'\n');
        
        
        suma = atoi(cad1) + atof(cad2);
        cout << "La suma de los numeros es: " << suma << endl;
        return 0;
}
