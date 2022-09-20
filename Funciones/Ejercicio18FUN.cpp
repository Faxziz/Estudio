#include <iostream>
#include <math.h>
using namespace std;

struct fecha {
  int dia;
  int mes;
  int year;
}f1,f2;

void pedirDatos();
fecha mayor(fecha, fecha);
void muestra(fecha);

int main() {
  pedirDatos();
  fecha x = mayor(f1,f2);
  muestra(x);

  return 0;
}

void pedirDatos() {
  cout << "Ingrese un dia de la primera fecha: ";
  cin >> f1.dia;
  cout << "Ingrese el mes de la primera fecha: ";
  cin >> f1.mes;
  cout << "Ingrese el year de la primera fecha: ";
  cin >> f1.year;

  cout << "Ingrese un dia de la segunda fecha: ";
  cin >> f2.dia;
  cout << "Ingrese el mes de la segunda fecha: ";
  cin >> f2.mes;
  cout << "Ingrese el year de la segunda fecha: ";
  cin >> f2.year;
}

int auxD = 0;
int auxM = 0;
int auxY = 0;

fecha mayor(fecha f1, fecha f2) {
  fecha mayorFecha;
  
  if ((f1.year >= f2.year) && (f1.mes >= f2.mes) && (f1.dia >= f2.dia)) {
	mayorFecha = f1;
  } else {
	mayorFecha = f2;
  }

  return mayorFecha;
}

void muestra(fecha x) {
  cout << "La fecha mas reciente es: " << x.dia << "/" << x.mes << "/" << x.year << endl;
}

