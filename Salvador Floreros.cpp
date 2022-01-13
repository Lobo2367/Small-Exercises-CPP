/* Asignación: Algoritmos-Salvador Floreros.cpp
Grupo #1
Fecha: 19 de noviembre del 2021
Materia: Estructuras de Datos y Algoritmos I */

/* Enunciado del Problema: Encontrar el numero de floreros vendidos en la 
primera semana y los que le quedaron al final a Salvador
*/

#include <iostream>

using namespace std;

int main()
{
int x=0, y=0,z = x;

while (x < 100)
{
	z = x;
	if(x%6==0)
		{
		if((x-8) % 11 == 0)
			{
			y= 100-x;
			cout << "En la semana pasada se vendieron " << y << " floreros.\n (Luego de esta venta quedaron " << x << " floreros).\n";
			z -=8;
			cout << "Salvador, actualmente se queda con " << z << " floreros, luego de haber vendido 8\n";
			cout << "\n";
			}
		}
	x++;
}
system("pause");
}

