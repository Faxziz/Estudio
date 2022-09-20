#include <iostream>
using namespace std;

struct promedio {
    float nota1;
    float nota2;
    float nota3;
};

struct alumno{
    char nombre[20];
    int edad;
    char sexo[20];
    struct promedio prom;
} alumno1;

int main() {
    int nAlumnos;
    float calcProm;
        cout << "Ingrese el nombre: ";
        cin.getline(alumno1.nombre,20,'\n');
        cout << "Ingrese el sexo: ";
        cin.getline(alumno1.sexo,20,'\n');
        cout << "Ingrese la edad: ";
        cin >> alumno1.edad;
        
        cout << "Digite las notas: ";
        cout <<"Nota 1: "; 
        cin >> alumno1.prom.nota1;
        cout <<"Nota 2: ";
        cin >> alumno1.prom.nota2;
        cout <<"Nota 3: ";
        cin >> alumno1.prom.nota3;
        
         calcProm = (alumno1.prom.nota1 + alumno1.prom.nota2 + alumno1.prom.nota3)/3;
         
         cout << "Datos: " << endl;
         cout << "Nombre: " << alumno1.nombre;
         cout << "Edad: " << alumno1.edad;
         cout << "Sexo: " << alumno1.sexo;
         cout << "Promedio: " << calcProm;
    return 0;
}
