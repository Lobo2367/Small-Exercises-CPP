/* Asignación: Algoritmos-Pilas PushPop.cpp
Grupo #1
Fecha: 19 de noviembre del 2021
Materia: Estructuras de Datos y Algoritmos I */

/* Enunciado del Problema: Cree un programa que permita insertar 
y extraer nodos de una pila*/


#include <iostream>

using namespace std;

int stack[100], n=100, top=-1;

void push(int val) {
   if(top>=n-1)
   cout<<" Pila Saturada"<<endl;
   else {
      top++;
      stack[top]=val;
   }
}


void pop() {
   if(top<=-1)
   cout<<"Valor indeterminado"<<endl;
   else {
      cout<<"El elemento sacado es "<< stack[top] <<endl;
      top--;
   }
}


void display() {
   if(top>=0) {
      cout<<"Los elementos de la pila son:";
      for(int i=top; i>=0; i--)
      cout<<stack[i]<<" ";
      cout<<endl;
   } else
   cout<<"La pila está vacía";
}


int main() {
   int ch, val;
   cout<<"1) Insertar un valor en la pila"<<endl;
   cout<<"2) Retirar un valor de la pila"<<endl;
   cout<<"3) Mostrar la pila"<<endl;
   cout<<"4) Salir"<<endl;
   do {
      cout<<"Escoja una acción: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
            cout<<"Escriba el valor a ser insertado:"<<endl;
            cin>>val;
            push(val);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            display();
            break;
         }
         case 4: {
            cout<<"Salir"<<endl;
            break;
         }
         default: {
            cout<<"Opción inválida"<<endl;
         }
      }
   }while(ch!=4);
   return 0;
}


