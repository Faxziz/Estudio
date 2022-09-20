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
} alumno[100];

int main() {
    int nAlumnos,mayor = 0,pos;
    float calcProm;
    float promAlumno[100];
    
    cout << "Cuantos alumnos va a ingresar? "; cin >> nAlumnos;
    
    for (int i=0;i<nAlumnos;i++) {
        fflush(stdin);
        cout << i+1 << ".Digite el nombre de un alumno: "; 
        cin.getline(alumno[i].nombre,20,'\n');
        fflush(stdin);
        cout << i+1 << ".Digite la edad del alumno: "; cin >> alumno[i].edad;
        fflush(stdin);
        cout << i+1 << ".Digite el sexo del alumno: ";
        cin.getline(alumno[i].sexo,20,'\n');
        
        fflush(stdin);
        cout << "Ingrese las notas del alumno: ";
        cout << "Nota 1: "; cin >> alumno[i].prom.nota1;
        fflush(stdin);
         cout << "Ingrese las notas del alumno: ";
        cout << "Nota 2: "; cin >> alumno[i].prom.nota2;
        fflush(stdin);
         cout << "Ingrese las notas del alumno: ";
        cout << "Nota 3: "; cin >> alumno[i].prom.nota3;
        fflush(stdin);
        
        promAlumno[i] = (alumno[i].prom.nota1+alumno[i].prom.nota2+alumno[i].prom.nota3)/3;
        
        
        if (promAlumno[i]>mayor) {
            mayor = promAlumno[i];
            pos = i;
        }
    }
    
    cout << "Alumno con mejor promedio" << endl;
    cout << "Nombre: " <<alumno[pos].nombre << endl;
    cout << "Edad: " << alumno[pos].edad<<endl;
    cout << "Sexo: " << alumno[pos].sexo << endl;
    cout << "Promedio: " << promAlumno[pos];
    return 0;
}
    
        
    