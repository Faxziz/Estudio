#include <iostream>
#include <stdlib.h>
using namespace std;

// PROTOTIPOS 
// Estructura de un arbol
// Un puntero apuntando a ambos lados.
struct Nodo {
	int dato;
	Nodo* der;
	Nodo* izq;
	Nodo *padre; //Esta variable es añadida luego de crear PostOrden
	//Para eliminar un nodo es muy bueno que cada Nodo "sepa" quien es su papa (xd)
};

void menu();
Nodo *crearNodo(int, Nodo*);
void insertar(Nodo *&arbol,int, Nodo*);
void mostrarArbol(Nodo *arbol,int);
bool busqueda(Nodo *arbol,int);
void preOrden(Nodo *arbol);
void inOrden(Nodo *arbol);
void postOrden(Nodo *arbol);
void eliminarNodo(Nodo *arbol, int);
void eliminar(Nodo *); //funcion que elimina el nodo
Nodo *minimo(Nodo *); //funcion para hallar el nodo mas izquierdo posible
//Necesitamos "reemplazar" un nodo por si un nodo tiene solo 1 hijo
void reemplazar(Nodo *, Nodo *);
void destruirNodo(Nodo *);

// -------------------------------
Nodo *arbol = NULL;

int main() {
	menu();
	return 0;
}

void menu() {
	int dato;
	int opcion;
	int contador = 0;
	
	do {
		cout << "\n :MENU: . " << endl;
		cout << "1.Insertar un nuevo nodo" << endl;
		cout << "2.Mostrar el arbol" << endl;
		cout << "3.Buscar un elemento" << endl;
		cout << "4.Recorrer el arbol en PreOrden" << endl;
		cout << "5.Recorrer el arbol en InOrden" << endl;
		cout << "6.Recorrer el arbol en PostOrden" << endl;
		cout << "7. Eliminar un nodo del arbol" << endl;
		cout << "8.Salir";
		cout << "Opcion: "; cin >> opcion;
		
		switch(opcion) {
			case 1:
			cout << "\nDigite un numero: ";
			cin >> dato;
			insertar(arbol,dato, NULL); //agregado luego de postorden
			cout << "\n";
			system("pause");
			break;
			case 2:
			cout << "\n Mostrando el arbol completo: \n\n";
			mostrarArbol(arbol, contador);
			cout << "\n";
			system("pause");
			break;
			case 3:
			int aux;
			cout << "\n Que numero quiere buscar? \n";
			cin >> aux;
			if (busqueda(arbol,aux) == true) {
				cout << "\nEl elemento se encuentra en el arbol\n";
			} else {
				cout << "\nEl elemento no se encuentra en el arbol\n";
			}
			system("pause");
			break;
			case 4:
			cout << "\n Recorrido en PreOrden - \n" << endl;
			preOrden(arbol);
			cout << "\n\n";
			system("pause");
			break;
			case 5:
			cout << "\n Recorrido en InOrden - \n" << endl;
			inOrden(arbol);
			cout << "\n\n";
			system("pause");
			break;
			case 6:
			cout << "\n Recorrido en PostOrden - \n" << endl;
			postOrden(arbol);
			cout << "\n\n";
			system("pause");
			case 7:
			int aux2;
			cout << "\n Ingrese el nodo a eliminar:";
			cin >> aux2;
			eliminarNodo(arbol,aux2);
			cout << "\n";
			system("pause");
			break;
		}
		system("cls");
	} while (opcion != 8);
}

// Propiedades de los arboles

//Longitud del camino -> son la cantidad de ramas hacia una hoja
//Altura de un nodo -> son la cantidad de ramas desde una hoja hacia un nodo

/* Profundidad de un arbol:
 * 
 * Los arboles tienen niveles, comenzando desde el nivel 0.
 * Empezando desde el nodo mas arriba hacia las hojas.
 * */

//Los nodos hermanos son los nodos que estan en el mismo nivel y tienen
//el mismo padre

/* Orden de un arbol:
 * 
 * Es la maxima cantidad de hijos que puede tener un arbol.
 * Ejemplo: un arbol de orden 3, puede tener 0,1,2,3 hijos.
 * */

// UN ARBOL BINARIO ES DE ORDEN 2. SE CONOCE EL NODO DE LA IZQUIERDA COMO 
// HIJO IZQUIERDO Y EL NODO DE LA DERECHA COMO HIJO DERECHO.
/* Un arbol binario se divide en tres subconjunyos disjuntos:
 * - Nodo raiz
 * - Subarbol izquierdo
 * - Subarbol derecho
 * 
 * Un arbol lleno es aquel donde todos sus nodos tienen 2 hijos excepto
 * su ultimo nivel, y todos los ultimos nodos estan exactos.
 * 
 * Un arbol completo es aquel donde sus ultimas hojas estan exactos
 * pero en un subarbol faltan hijos.
 * 
 * Un arbol degenerado, cuando no es lleno, ni completo. Existe solo un nodo
 * que tiene un hijo.
 * */

/* Un arbol binario de busqueda es aquel que dado un nodo, todos los datos
 * del subarbol izquierdo son menores, mientras que todos los datos del 
 * subarbol derecho son mayores.
 * 
 * Ejemplo:                  10
 *                         5    15
 *                       4  8      20
 * */

// Programaremos una funcion que inserta nodos en un arbol

//Funcion CrearNodo
Nodo *crearNodo(int n, Nodo *padre) {
	Nodo *nuevoNodo = new Nodo();
	
	nuevoNodo->dato = n;
	nuevoNodo->der = NULL;
	nuevoNodo->izq = NULL;
	nuevoNodo->padre = padre; // AÑADIDO LUEGO DE POSTORDEN
	return nuevoNodo;
}

//Funcion insertar
void insertar(Nodo *&arbol,int n, Nodo *padre) {
	// Hay que tener en cuenta 2 cosas:
	// Si el arbol esta vacio
	if (arbol == NULL) {
		Nodo *nuevoNodo = crearNodo(n, padre);
		arbol = nuevoNodo; // Nuestro nodo Raiz es n
	} else { //Si no esta vacio, puede tener uno o mas nodos.
		int valorRaiz = arbol->dato; //asignamos el valor de la raiz
		if (n < valorRaiz) { //Comparamos si el valor de la raiz es mayor o menor
			insertar(arbol->izq,n, arbol);
		} else {
			insertar(arbol->der,n, arbol);
		}
	}
}

void mostrarArbol(Nodo *arbol, int contador) {
	if (arbol == NULL) return;
	else {
		mostrarArbol(arbol->der, contador+1);
		for(int i=0;i<contador;i++) {
			cout << " ";
		}
		cout << arbol->dato << endl;
		mostrarArbol(arbol->izq, contador+1);
	}
}

bool busqueda(Nodo *arbol, int n) {
	if (arbol == NULL) {
		return false;
	} else if (arbol->dato == n) {
		return true;
	} else if (n < arbol->dato) {
		return busqueda(arbol->izq,n);
	} else {
		return busqueda(arbol->der,n);
	}
}

/* Recorrido en PreOrden:
 * (raiz,izquierdo,derecho) Para recorrer un arbol binario no vacio en PreOrden
 * hay que realizar las siguientes operaciones recursivamente en cada nodo
 * comenzando con el nodo de raiz:
 * -Visite la raiz
 * -Atraviese el sub-arbol izquierdo
 * -Atraviese el sub-arbol derecho
 * */
void preOrden(Nodo *arbol) {
	if (arbol == NULL) {
		return;
	} else {
		cout << arbol->dato << " - ";
		preOrden(arbol->izq);
		preOrden(arbol->der);
	}
}

/* Recorrido en InOrden:
 * (izquierdo, raiz, derecho) Para recorrer un arbol binario no vacio en InOrden
 * hay que realizar las siguientes operaciones recursivamente en cada nodo
 * comenzando con el nodo de raiz:
 * -Atraviese el sub-arbol izquierdo
 * -Visite la raiz
 * -Atraviese el sub-arbol derecho
 * */
 void inOrden(Nodo *arbol) {
	if (arbol == NULL) {
		return;
	} else {
		inOrden(arbol->izq);
		cout << arbol->dato << " - ";
		inOrden(arbol->der);
	}
}
 
/* Recorrido en postOrden:
 * (izquierdo, derecho, raiz) Para recorrer un arbol binario no vacio en InOrden
 * hay que realizar las siguientes operaciones recursivamente en cada nodo
 * comenzando con el nodo de raiz:
 * -Atraviese el sub-arbol izquierdo
 * -Atraviese el sub-arbol derecho
 * -Visite la raiz
 * */
void postOrden(Nodo *arbol) {
	if (arbol == NULL) {
		return;
	} else {
		postOrden(arbol->izq);
		postOrden(arbol->der);
		cout << arbol->dato << " - ";
	}
}

void eliminarNodo(Nodo *arbol, int n) { //eliminar un nodo del arbol
	if (arbol == NULL) {
		return; //no hago nada
	}
	else if (n < arbol->dato) { // si el valor es menor busca por la izquierda
		eliminarNodo(arbol->izq,n);
	} else if (n > arbol->dato) { // si el valor es mayor busca por la derecha
		eliminarNodo(arbol->der,n);
	} else { //encontre el elemento
		eliminar(arbol);
	}
}

//Funcion minimo
Nodo *minimo(Nodo *arbol) {
	if (arbol == NULL) {
		return NULL;
	} 
	if (arbol->izq) { //si tiene hijo izq
		return minimo(arbol->izq); //buscamos la parte mas izquierda posible
	} else { //si no tiene hijo izq, retornamos el mismo nodo
		return arbol;
	}
}

//Funcion reemplazar
void reemplazar(Nodo *arbol, Nodo *nuevoNodo) {
	if (arbol->padre) {
		//arbol->padre hay que asignarle su nuevo hijo
		if (arbol->dato == arbol->padre->izq->dato){
			arbol->padre->izq = nuevoNodo;
		}
	else if (arbol->dato == arbol->padre->der->dato) {
		arbol->padre->der = nuevoNodo;
	}
	}
	if (nuevoNodo) {
		//asignamos el nuevo padre
		nuevoNodo->padre = arbol->padre;
	}
}

//Funcion destruir
void destruirNodo(Nodo *nodo) {
	nodo->izq = NULL;
	nodo->der = NULL;
	
	delete nodo;
}
void eliminar(Nodo *arbol) {
	// Hay que ver si ese nodo es hoja, o si es un nodo derecho/izquierdo, etc
	if (arbol->izq &&  arbol->der) { //Si el nodo tiene hijo izq y der
		Nodo *menor = minimo(arbol->der);
		arbol->dato = menor->dato; 
		eliminar(menor);
	}
	//Si el nodo tiene solo un hijo
	else if (arbol->izq) { //si tiene hijo izq
		reemplazar(arbol, arbol->izq);
		destruirNodo(arbol);
	} else if (arbol->der) { //si tiene hijo der
		reemplazar(arbol, arbol->der);
		destruirNodo(arbol);
	} else { //Que un nodo no tiene hijos
		reemplazar(arbol, NULL);
		destruirNodo(arbol);
	}
}
