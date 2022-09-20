#include <iostream>
#include <math.h>
using namespace std;

void tiempo(int,int&,int&,int&);

int main() {
	int totalSeg,hora,minutos,segundos;

	cout << "Digite el total de segundos: ";
	cin >> totalSeg;

	tiempo(totalSeg,hora,minutos,segundos);

	cout << "La cantidad de segundos transmitidos es en: " << endl;
	cout << "Horas: " << hora << endl;
	cout << "Minutos: " << minutos << endl;
	cout << "Segundos: " << segundos << endl;

	return 0;
}

void tiempo(int totalSeg,int& hora,int& minutos,int& segundos) {
	hora = totalSeg/3600;
	totalSeg %= 3600;
	minutos = totalSeg/60;
	segundos = totalSeg/60;
}
