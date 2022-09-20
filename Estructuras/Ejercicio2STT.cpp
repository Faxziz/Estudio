#include <iostream>
using namespace std;

struct alumno {
    char nombre[20];
    int edad;
    float promedio; 
} alumnos[3];

int main() {
    int mayor = 0;
    int pos;
    
    for(int i=0; i<3;i++) {
        fflush(stdin);
        cout << i+1 << "Digite su nombre: " << endl; 
        cin.getline(alumnos[i].nombre,20,'\n');
        cout << i+1 << "Digite su edad" << endl;
        cin >> alumnos[i].edad;
        cout << i+1 << "Digite su promedio: " << endl;
        cin >> alumnos[i].promedio;
    
    if (alumnos[i].promedio>mayor) {
        mayor = alumnos[i].promedio;
        pos = i;
        }
    }
    
    cout << "El mejor promedio es de: " << alumnos[pos].nombre << " y es de: " << alumnos[pos].promedio;
  return 0;  
}
    