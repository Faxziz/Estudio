#include <iostream>
using namespace std;

struct atleta {
    char nombre[20];
    int n_medallas;
    char pais[20];
} atletas[100];

int main() {
    int pos, mayor = 0;
    int n_atletas;
    
    cout << "Cuantos atletas va a ingresar? "; cin >> n_atletas;
    
    for(int i=0;i<n_atletas;i++) {
        fflush(stdin);
        cout << i+1 << ".Digite el nombre: ";
        cin.getline(atletas[i].nombre,20,'\n');
        cout << i+1 << ".Digite el numero de medallas: "; cin >> atletas[i].n_medallas;
        fflush(stdin);
        cout << i+1 << ".Digite el pais del atleta:"; cin.getline(atletas[i].pais,20,'\n');
        
        
        if(atletas[i].n_medallas > mayor) {
            mayor = atletas[i].n_medallas;
            pos = i;
        }
    }
    cout << "El atleta con mas medallas es: " << atletas[pos].nombre << " con " << atletas[pos].n_medallas;
    
    return 0;
}