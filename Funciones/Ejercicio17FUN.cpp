#include <iostream>
#include <math.h>
using namespace std;

struct Complejo {
  int real;
  int img;
}n1,n2;

void pedirDatos();
Complejo suma(Complejo, Complejo);
void muestra(Complejo);

int main() {
  pedirDatos();
  Complejo x = suma(n1,n2);
  muestra(x);
  return 0;
}

void pedirDatos() {
	cout << "Digite la parte real de un numero complejo: ";
	cin >> n1.real >> n2.real;
	cout << "Digite la parte imaginaria de un numero complejo: ";
	cin >> n1.img >> n2.img;
}

Complejo suma(Complejo n1, Complejo n2) {
  n1.real += n2.real;
  n1.img += n2.img;

  return n1;
}

void muestra(Complejo x) {
  cout << "Resultado de la suma: " << x.real << " , " << x.img << endl;
}
