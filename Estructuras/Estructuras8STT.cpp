#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;

struct persona {
  char nombre[30];
  bool discapacidad;
}personas[100],personasSinD[100],personasConD[100];

int main() {
  int numero_personas,j=0,k=0;

  cout << "Ingrese un numero de personas: ";
  cin >> numero_personas;

  for(int i=0;i<numero_personas;i++) {
    fflush(stdin);
    cout << "Digite su nombre: ";
    cin.getline(personas[i].nombre,30,'\n');
    cout << "La persona tiene discapacidad(1/0): ";
    cin >> personas[i].discapacidad;
    //Personas con discapacidad
    if (personas[i].discapacidad == 1) {
      strcpy(personasConD[j].nombre,personas[i].nombre);
      j++;
    }
    else {
      strcpy(personasSinD[k].nombre,personas[i].nombre);
      k++;
    }
  }

  cout << "Mostrando las personas sin Discapacidad:\n";
  for(int i=0;i<k;i++) {
    cout << personasSinD[i].nombre << endl;
  }

  cout << "Mostrando las personas con Discapacidad: \n";
  for(int i=0;i<j;i++) {
    cout << personasConD[i].nombre << endl;
  }

  getch();
  return 0;
}
