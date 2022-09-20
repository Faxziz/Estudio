#include <iostream>
#include <math.h>
using namespace std;

void calcula_anio(int,int&,int&,int&);

int main() {
	int totalDias,anio, mes,dia;
	
	cout << "Digite el numero total de dias: ";
	cin >> totalDias;

	calcula_anio(totalDias,anio,mes,dia);

	cout << "Fecha actual: " << dia+1 << "/" << mes+1 << "/" << anio+2000;
	return 0;
}

void calcula_anio(int totalDias,int& anio,int& mes,int& dia) {
	anio = totalDias/365;
	totalDias %= 365;
	mes = totalDias/30;
	dia = totalDias%30;
}
