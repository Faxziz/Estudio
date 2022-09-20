#include <iostream>
using namespace std;

struct empleado {
    char nombre[20];
    float salario;
}empleados[100];

int main() {
    int mayor=0, n_empleados;
    int menor=9999999;
    int posM,posm;
    
    cout << "Cuantos empleados va a ingresar? "; cin >> n_empleados;
    
    for(int i=0;i<n_empleados;i++) {
        fflush(stdin);
        cout << i+1 << ". Digite el nombre del empleado: ";
        cin.getline(empleados[i].nombre,20,'\n');
        cout << i+1 << ". Digite el salario: ";
        cin >> empleados[i].salario;
        
        if (empleados[i].salario>mayor) {
            mayor = empleados[i].salario;
            posM = i;
        } else if(empleados[i].salario<menor) {
            menor = empleados[i].salario;
            posm = i;
        }
    }
    
    cout << "El menor salario es de: " << empleados[posm].nombre << " y es de: " << empleados[posm].salario;
    
    cout << "El mayor salario es de: " << empleados[posM].nombre <<" y es de: " <<
    empleados[posM].salario;
    return 0;
}