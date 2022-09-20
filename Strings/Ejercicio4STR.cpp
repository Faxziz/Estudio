#include <iostream>
#include <string.h>
using namespace std;

int main() {
        char cad[] = "Hola que tal ";
        char cad1[] = "Cual es tu nombre?";
        char cad2[100];

        cout << cad1;
        cin.getline(cad1,100,'\n');

        strcpy(cad2,cad1);

        cout << strcat(cad,cad2);
        /* strcat (cad,cad2);
         * cout << cad << endl;
         * (OTRA OPCION) */
        return 0;
}
