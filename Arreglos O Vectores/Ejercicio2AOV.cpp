#include <iostream>
using namespace std;

int main() {
	int nums[5] = {1,2,3,4,5}, mult=1;
	for(int i=0;i<5;i++){
		mult *= nums[i];
	}

	cout << "La multiplicacion acumulada de sus elementos es: " << mult;
	return 0;
}