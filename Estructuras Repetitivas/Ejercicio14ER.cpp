#include <iostream>
using namespace std;

int main() {
	float examen1, examen2, examen3;
	int aprobadosTodos=0,aprobadosUno=0,aprobaronUltimo=0;
	for(int i=1;i<=5;i++) {
		cout << i << ". Digite la nota del primer examen: " << examen1;cin>>examen1;
		cout << i << ". Digite la nota del segundo examen: " << examen2;cin>>examen2;
		cout << i << ". Digite la nota del tercer examen: " << examen3;cin>>examen3;
		cout << "\n";

		if((examen1>5)&&(examen2>5)&&(examen3>5)) {
			aprobadosTodos++;
		}
		if((examen1>5)||(examen3>5)||(examen3>5)) {
			aprobadosUno++;
		}
		if((examen1<6)&&(examen2<6)&&(examen3>6)) {
			aprobaronUltimo++;
		}
	}
	cout << "\nAlumnos que aprobaron todos los examenes: " << aprobadosTodos << endl;
	cout << "Alumnos que aprobaron al menos un examen: " << aprobadosUno << endl;
	cout << "Alumnos que aprobaron solo el ultimo examen: " << aprobaronUltimo << endl;
	return 0;
}