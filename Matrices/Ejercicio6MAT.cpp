#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
        int mat1[3][3] = {{1,0,4},{2,3,2},{1,2,3}};
        int mat2[3][3] = {{1,2,4},{5,3,2},{7,2,3}};

        //MAT 1
        cout << "Matriz 1\n";
         for(int i=0;i<3;i++) {
                for(int j=0;j<3;j++) {
                        cout << mat1[i][j] << " ";
                }
                cout << "\n";
        }

        //MAT 2
        cout << "Matriz 2\n";
        for(int i=0;i<3;i++) {
                for(int j=0;j<3;j++) {
                        cout << mat2[i][j] << " ";
                }
                cout << "\n";
        }

        //SUMA DE MATRICES
        cout << "Suma de matrices\n";
        for(int i=0;i<3;i++) {
                for(int j=0;j<3;j++) {
                        cout << mat1[i][j] +  mat2[i][j] << " ";
                }
                cout << "\n";
        }

        cout << "\n";
        return 0;
}
