/* Escrib un programa que lea dos numeros y determine el mayor*/


#include <iostream>

using namespace std;


int main(){

	int desicion;
	int n1,n2;
	
	start:
	cout<<"Que desea hacer? \n 1-Correr el programa \n 2-Salir \n";
	cin >> desicion;
	if(desicion > 2 || desicion < 0){
		cout << "Ingrese 1 o 2 \n \n";
		system("pause");
		system("cls");
		goto start;
	}
	
switch(desicion)
{
	case 1:
	cout << "Digite dos numeros: ";
	cin>>n1 >>n2;
	
	if(n1 == n2){
		cout << "Ambos numeros son iguales"<<"\n \n";
	}
	else if(n1>n2){
		cout<< " El mayor es: " << n1 <<"\n \n";
	}
 	else{
 		cout <<"El mayor es: "<< n2<<"\n \n";
	 }
	system("pause");
	system("cls");
	goto start;
}
return 0;
}
