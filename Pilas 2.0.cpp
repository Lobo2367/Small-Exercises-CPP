/* Asignación: Algoritmos-Pilas PushPop.cpp
Grupo #1
Fecha: 19 de noviembre del 2021
Materia: Estructuras de Datos y Algoritmos I */

/* Enunciado del Problema: Cree un programa que permita insertar 
y extraer nodos de una pila*/


#include<iostream>
using namespace std;
struct Nodo {
	int dato;
	Nodo* siguiente;
};


void agregarPila(Nodo*&, int);
void sacarPila(Nodo*&, int&);


int main() {
	Nodo* pila = NULL;
	int dato;
	int desicion;
	do { 
		cout << "Inserte un numero: ";
		cin >> dato;
		agregarPila(pila, dato);
		cout << "\nDigite 1 si desea agregar otro numero. 2 si desea terminar: ";
		cin >> desicion;
	} while ((desicion == 1));

	cout << "\nEstos son los elementos de la pila: ";
	
	
	while (pila != NULL) {
		sacarPila(pila, dato);
		if (pila != NULL) {
			cout << dato << " , ";
		}
		else {
			cout << dato << ".";
		}
	}
	
	
	
	return 0;
}


void agregarPila(Nodo*& pila, int n) {
	Nodo* nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = pila;
	pila = nuevo_nodo;
	cout << "\nEl numero " << n << " ha sido agregado sin inconvenientes.";
}


void sacarPila(Nodo*& pila, int& n) {
	Nodo* aux = pila;
	n = aux->dato;
	pila = aux->siguiente;
	delete aux;
}
