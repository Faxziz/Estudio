#include <iostream>
using namespace std;

int main() {
  int num,*dir_num;

  dir_num = &num;

  cout << "Digite un numero a comprobar paridad: ";
  cin >> num;

  if(*dir_num % 2 == 0) {
	cout << "El numero es par" << endl;
  } else {
	cout << "El numero es impar" << endl;
  }

  cout << "Direccion de memoria: " << dir_num << endl;


  return 0;
}

  
