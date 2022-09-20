#include <iostream>
using namespace std;

int main() {
	int n;

	cout << "Digite un numero a factorizar: "; cin>>n;
	for(int i=2;n>1;i++) {
		while(n%i == 0) {
			cout << i << " ";
			n /= i;
		}
	}
	return 0;
}