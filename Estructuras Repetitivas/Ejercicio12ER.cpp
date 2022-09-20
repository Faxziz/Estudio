#include <iostream>
using namespace std;

int main() {
	int n, sumaPar = 0, sumaImpar = 0,par, sumaTotal=0;;
	cout << "Digite el numero a ser utilizado en la expresion: "; cin>>n;
	for(int i=0;i<=n;i++){
		if(i%2 == 0) {
			par = i*-1;
			sumaPar += par;
		}
		else {
			sumaImpar += i;
		}
	}
	sumaTotal = sumaPar+sumaImpar;
	cout << "La suma total es: " << sumaTotal;
	return 0;
}