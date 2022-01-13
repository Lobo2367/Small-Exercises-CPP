/* Asignación: Algoritmos-Persistencia.cpp
Grupo #1
Fecha: 19 de noviembre del 2021
Materia: Estructuras de Datos y Algoritmos I */

/* Enunciado del Problema: Encontrar el numero de solo dos
dígitos que tenga persistencia mayor 3
*/

#include <iostream> // Uso de cout() y cin()

int n= 10;

using namespace std;

//función main()
int main(int argc, const char * argv[]) {
int num = n;

while(n < 100) {
int cont = 0;
int per = 11;
int num = n;



 while(per > 10) {
 per = (num /10) * (num % 10);
 cont++;
 num = per;
 }
 
 
 
if(cont > 3) {
	cout << "La persistencia de " << n << " es " << cont <<endl;
}


 n++;
}


 return 0;
}
