#include <iostream>
using namespace std;

int main() {
	int nums[100],n;
	cout << "Digite el numero de elementos del arreglo: ";
	cin>>n;

	for(int i=0;i<n;i++) {
		cout << "Digite el numero: ";
		cin>>nums[i];
	} 

	for(int i=0;i<n;i++) {
		cout<<i<<" ->"<<nums[i]<<endl;
	}
	return 0;
}