#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include <windows.h> 
#include <time.h>
#include <sstream>
#include <tgmath.h>
#include <string>
#include <cmath>
#define N 11 //define la longitud maxima que es posible para el numero
using namespace std;
//PROTOTIPOS
void unidades(char num[N],int x);
void unidades2(char num[N],int x);
bool decenas(char num[N],int x);
void centenas(char num[N],int x);
void miles(char num[N],int x);
bool dec_miles(char num[N],int x);
void cent_dmiles(char num[N],int x);
void millones(char num[N],int x);
bool decenas_mill(char num[N],int x);
void cent_mill(char num[N],int x);
void gotoxy(int x, int y);
int main(){
	string num1;
	int number;
	float numero;
	stringstream ss;
	char num[N];
	bool b,a;
	int x,y=-1,i;
	system("color 1f");
	do{
		system("title Conversor de Numeros a letras");
		system("cls");
		fflush(stdin);
		
		do{
		a=true;
		b=true;
		numero= 0;
		ss.str("");
		number=0;
		cout<<"\nIngrese el numero: ";
		cin>>numero;
		number = floor(numero);
		ss << number;
		num1 = ss.str();
		cout << num1;
		strcpy(num, num1.c_str());
		x=strlen(num);
		}while(x<1||x>10);
		
		fflush(stdin);
		cout<<"\n\n";
		
		while(x>=1){
			y++;
			fflush(stdin);
			switch(x){
			case 1:if(a==true&&b==true)unidades(num,y);a++;if(num[0]=='0'){x=1;}break;
			case 2:b=decenas(num,y);if(num[y+1]=='0'){x=1;}break;
			case 3:centenas(num,y);break;
			case 4:if(b==true)miles(num,y);break;
			case 5:b=dec_miles(num,y);break;
			case 6:cent_dmiles(num,y);break;
			case 7:millones(num,y);break;
			case 8:b=decenas_mill(num,y);break;
			case 9:cent_mill(num,y);break;
			case 10: cout<<"Lo siento pero puedo convertir hasta 999,999,999";x=1;break;
			}//cout<<"["<<x<<"]";
			--x;
			fflush(stdin);
		}y=-1;
		fflush(stdin);
		cout<<"\n\n\nSalir 0: ";cin>>i;}while(i!=0);
}

void unidades(char num[N],int x){
	switch(num[x]){//UNIDADES
	case '0':cout<<"cero"<<" ";break;
	case '1':cout<<"uno"<<" ";break;
	case '2':cout<<"dos"<<" ";break;
	case '3':cout<<"tres"<<" ";break;
	case '4':cout<<"cuatro"<<" ";break;
	case '5':cout<<"cinco"<<" ";break;
	case '6':cout<<"seis"<<" ";break;
	case '7':cout<<"siete"<<" ";break;
	case '8':cout<<"ocho"<<" ";break;
	case '9':cout<<"nueve"<<" ";break;
	}
}
void unidades2(char num[N],int x){
	switch(num[x]){//UNIDADES
	case '1':cout<<"once"<<" ";break;
	case '2':cout<<"doce"<<" ";break;
	case '3':cout<<"trece"<<" ";break;
	case '4':cout<<"catorce"<<" ";break;
	case '5':cout<<"quince"<<" ";break;
	case '6':cout<<"dieciseis"<<" ";break;
	case '7':cout<<"diecisiete"<<" ";break;
	case '8':cout<<"dieciocho"<<" ";break;
	case '9':cout<<"diecinueve"<<" ";break;
	}
}
bool decenas(char num[N],int x){
	bool r=true;
	switch(num[x]){//DECENAS
	case '1':if(num[x+1]!='0'){unidades2(num,x+1);r=false;}else{cout<<"diez"<<" ";}break;
	case '2':cout<<"veinte";if(num[x+1]!='0'){cout<<" y"<<" ";}break;
	case '3':cout<<"treinta";if(num[x+1]!='0'){cout<<" y"<<" ";}break;
	case '4':cout<<"cuarenta";if(num[x+1]!='0'){cout<<" y"<<" ";}break;
	case '5':cout<<"cincuenta";if(num[x+1]!='0'){cout<<" y"<<" ";}break;
	case '6':cout<<"sesenta";if(num[x+1]!='0'){cout<<" y"<<" ";}break;
	case '7':cout<<"setenta";if(num[x+1]!='0'){cout<<" y"<<" ";}break;
	case '8':cout<<"ochenta";if(num[x+1]!='0'){cout<<" y"<<" ";}break;
	case '9':cout<<"noventa";if(num[x+1]!='0'){cout<<" y"<<" ";}break;
	}
	return r;
}
void centenas(char num[N],int x){
	switch(num[x]){
	case '1':(num[x+2]!='0')?cout<<"ciento"<<" ":cout<<"cien"<<" ";break;
	case '2':cout<<"doscientos"<<" ";break;
	case '3':cout<<"trescientos"<<" ";break;
	case '4':cout<<"cuatrocientos"<<" ";break;
	case '5':cout<<"quinientos"<<" ";break;
	case '6':cout<<"seiscientos"<<" ";break;
	case '7':cout<<"setecientos"<<" ";break;
	case '8':cout<<"ochocientos"<<" ";break;
	case '9':cout<<"novecientos"<<" ";break;

	}
}
void miles(char num[N],int x){
	switch(num[x]){
	case '1':cout<<"un mil"<<" ";break;
	case '2':cout<<"dos mil"<<" ";break;
	case '3':cout<<"tres mil"<<" ";break;
	case '4':cout<<"cuatro mil"<<" ";break;
	case '5':cout<<"cinco mil"<<" ";break;
	case '6':cout<<"seis mil"<<" ";break;
	case '7':cout<<"siete mil"<<" ";break;
	case '8':cout<<"ocho mil"<<" ";break;
	case '9':cout<<"nueve mil"<<" ";break;
	}
}
bool dec_miles(char num[N],int x){
	bool r=true;
	switch(num[x]){
	case '1':if(num[x+1]!='0'){unidades2(num,x+1);r=false;cout<<"mil ";}else{cout<<"diez mil"<<" ";}break;
	case '2':cout<<"veinte";if(num[x+1]!='0'){cout<<" y"<<" ";}else{cout<<" mil ";}break;
	case '3':cout<<"treinta";if(num[x+1]!='0'){cout<<" y"<<" ";}else{cout<<" mil ";}break;
	case '4':cout<<"cuarenta";if(num[x+1]!='0'){cout<<" y"<<" ";}else{cout<<" mil ";}break;
	case '5':cout<<"cincuenta";if(num[x+1]!='0'){cout<<" y"<<" ";}else{cout<<" mil ";}break;
	case '6':cout<<"sesenta";if(num[x+1]!='0'){cout<<" y"<<" ";}else{cout<<" mil ";}break;
	case '7':cout<<"setenta";if(num[x+1]!='0'){cout<<" y"<<" ";}else{cout<<" mil ";}break;
	case '8':cout<<"ochenta";if(num[x+1]!='0'){cout<<" y"<<" ";}else{cout<<" mil ";}break;
	case '9':cout<<"noventa";if(num[x+1]!='0'){cout<<" y"<<" ";}else{cout<<" mil ";}break;
	}
	return r;
}
void cent_dmiles(char num[N],int x){
	switch(num[x]){
	case '1':(num[x+2]!='0')?cout <<"ciento"<" " : cout<<"cien mil"<<" ";break;
	case '2':cout<<"doscientos";if(num[x+1]!='0'){cout<<" ";}else{cout<<" mil ";}break;
	case '3':cout<<"trescientos";if(num[x+1]!='0'){cout<<" ";}else{cout<<" mil ";}break;
	case '4':cout<<"cuatrocientos";if(num[x+1]!='0'){cout<<" ";}else{cout<<" mil ";}break;
	case '5':cout<<"quinientos";if(num[x+1]!='0'){cout<<" ";}else{cout<<" mil ";}break;
	case '6':cout<<"seiscientos";if(num[x+1]!='0'){cout<<" ";}else{cout<<" mil ";}break;
	case '7':cout<<"setecientos";if(num[x+1]!='0'){cout<<" ";}else{cout<<" mil ";}break;
	case '8':cout<<"ochocientos";if(num[x+1]!='0'){cout<<" ";}else{cout<<" mil ";}break;
	case '9':cout<<"novecientos";if(num[x+1]!='0'){cout<<" ";}else{cout<<" mil ";}break;
}
}

void millones(char num[N],int x)
{
	switch(num[x]){
	case '1':cout<<"un millon";break;
	default: if(num[x]!='0'){unidades(num,x);if(num[x-1]!='0')cout<<" millones ";}break;
	}
}
bool decenas_mill(char num[N],int x){
	bool r=true;
	switch(num[x]){
	case '1':if(num[x+1]!='0'){unidades2(num,x+1);r=false;cout<<"millones ";}else{cout<<"diez millones"<<" ";}break;
	case '2':cout<<"veinte";if(num[x+1]!='0'){cout<<" y"<<" ";}else{cout<<" millones ";}break;
	case '3':cout<<"treinta";if(num[x+1]!='0'){cout<<" y"<<" ";}else{cout<<" millones ";}break;
	case '4':cout<<"cuarenta";if(num[x+1]!='0'){cout<<" y"<<" ";}else{cout<<" millones ";}break;
	case '5':cout<<"cincuenta";if(num[x+1]!='0'){cout<<" y"<<" ";}else{cout<<" millones ";}break;
	case '6':cout<<"sesenta";if(num[x+1]!='0'){cout<<" y"<<" ";}else{cout<<" millones ";}break;
	case '7':cout<<"setenta";if(num[x+1]!='0'){cout<<" y"<<" ";}else{cout<<" millones ";}break;
	case '8':cout<<"ochenta";if(num[x+1]!='0'){cout<<" y"<<" ";}else{cout<<" millones ";}break;
	case '9':cout<<"noventa";if(num[x+1]!='0'){cout<<" y"<<" ";}else{cout<<" millones ";}break;
	}
	return r;
}
void cent_mill(char num[N],int x){
	bool r=true;
	switch(num[x]){
	case '1':if(num[x+1]!='0'){unidades2(num,x+1);r=false;cout<<"millones ";}else{cout<<"cien millones"<<" ";}break;
	case '2':cout<<"doscientos";if(num[x+1]!='0'){cout<<" y"<<" ";}else{cout<<" millones ";}break;
	case '3':cout<<"trescientos";if(num[x+1]!='0'){cout<<" y"<<" ";}else{cout<<" millones ";}break;
	case '4':cout<<"cuatrocientos";if(num[x+1]!='0'){cout<<" y"<<" ";}else{cout<<" millones ";}break;
	case '5':cout<<"quinientos";if(num[x+1]!='0'){cout<<" y"<<" ";}else{cout<<" millones ";}break;
	case '6':cout<<"seiscientos";if(num[x+1]!='0'){cout<<" y"<<" ";}else{cout<<" millones ";}break;
	case '7':cout<<"setecientos";if(num[x+1]!='0'){cout<<" y"<<" ";}else{cout<<" millones ";}break;
	case '8':cout<<"ochocientos";if(num[x+1]!='0'){cout<<" y"<<" ";}else{cout<<" millones ";}break;
	case '9':cout<<"novecientos";if(num[x+1]!='0'){cout<<" y"<<" ";}else{cout<<" millones ";}break;
}
}
void gotoxy(int x, int y){
	COORD coord={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
} 
