#include <iostream>
using namespace std;

int main() {
	int nums[5] = {1,2,3,4,5};
	int nArr[5];
	for(int i=0;i<5;i++) {
		nArr[i] = nums[i]*2;
	}
	for(int i=0;i<5;i++) {
		cout << nArr[i] << " ";
	}
}