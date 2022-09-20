#include <iostream>
using namespace std;

int main() {
	float a,b,c,d;
	
	cout << "Digite el primer numero: ? " << endl; cin >> a;
	cout << "Digite el segundo numero: ? " << endl; cin >> b;
	cout << "Digite el tercer numero: ? " << endl; cin >> c;
	cout << "Digite el cuarto numero: ? " << endl; cin >> d;
	
	if ((a==d) || (b==d) || (c==d)) {
		cout << "El cuarto numero coincide con un numero";
	} else {
		cout << "El cuarto numero no coincide con algun numero";
	}
	return 0;	
}
