/* Asignaci�n: Arreglos- Mastermind.cpp
Autor: Jos� Ernesto Gonz�lez Fals ID-1100263
Fecha: 11 de noviembre del 2021
Materia: Estructuras de Datos y Algoritmos I */


// Librer�as y paquetes

#include <iostream> // Uso de cout() y cin()
#include <sstream>	// Uso de stringstream()
#include <string>	// Conversi�n sstream() a string
#include <cstdlib>	// Uso de clase rand()
#include <time.h>	//Uso de clase time()
//-----------------------------------------------------------------------------Declaraci�n de variables y funciones-----------------------------------------------------------

// Declaracion de la clase
using namespace std;

//funci�n main()
int main(int argc, const char * argv[]) {
	
    stringstream clave; //Declaraci�n de la clave conmo una variable de tipo sstream()
    int digitos[4] = {}; //4 d�gitos por clave
    string intento;	//Intento de descifrado
    int intentosPermitidos = 12; //N�mero de intentos permitidos
    
    
    srand( time(NULL) );
    digitos[0] = rand() % 9 + 1;
    digitos[1] = rand() % 9 + 1;
    digitos[2] = rand() % 9 + 1; // N�meros aleatorios de la clave, del 1 al 9 (D�gitos de la clave)
    digitos[3] = rand() % 9 + 1;
    
    
    
    for(int i = 0; i < 4; ++i) {
        clave << digitos[i]; // Inserta cada d�gito en la variable stringstream(clave)
    }
    
    
    
    string fullString = clave.str(); // Convierte la variable sstream a string  (clave >> fullString)
    cout << fullString << endl; // Funci�n para demostraci�n (Muestra el c�digo)
    
    //-------------------------------------------------------------------Bucle de juego-----------------------------------------------------------------------------------------
    
    for(int i = 0; i < intentosPermitidos ; ++i) {
    	//Intento del jugador
    	
        int adivinado = 0;																		// Declaraci�n d�gitos adivinados
        cout << "Introduzca una clave de cuatro digitos (xxxx): "; 								// Petici�n ylectura del intento
        getline(cin, intento);
        
        //Solo se permiten 4 d�gitos
        if(intento.size() != 4) { 
            cout << "Por favor introduzca solo cuatro numeros:" << endl;
            i--;
            continue; // No cuenta como un intento
        }
        
        /*
        Si el d�gito del intento concidiera con el valor y posici�n el de la clave generada aleatoriamente, se notificar� con un mensaje: # d�gito caliente/correcto (C)
        Asimismo, si el d�gito coincide con el valor de alguno de la clave mas no con su posici�n, se notificar� con un mensaje: # d�gito fr�o/malposicionado (F)
        Si el valor introducido en el intento no esta en ninguno de los d�gitos de la clave, se notificar� con un mensaje: # d�gito inexistente(X)
        */
        
        
        if(intento[0] == fullString[0]) {
            cout << "Primer d�gito correcto (C)" << endl;
            adivinado++;}
        else if(intento[0] == fullString[1] || intento[0] == fullString[2] || intento[0] == fullString[3]) {
            cout << "Primer d�gito malposicionado (F)" << endl;}
        else cout << "Primer digito inexistente (X)" << endl;
        
        
        if(intento[1] == fullString[1]) {
            cout << "Segundo digito correcto (C)" << endl;
            adivinado++;}
        else if(intento[1] == fullString[0] || intento[1] == fullString[2] || intento[1] == fullString[3]) {
            cout << "Segundo digito malposicionado (F)" << endl;}
        else cout << "Segundo digito inexistente (X)" << endl;
        
        
        if(intento[2] == fullString[2]) {
            cout << "Tercer digito correcto (C)" << endl;
            adivinado++;}
        else if(intento[2] == fullString[1] || intento[2] == fullString[0] || intento[2] == fullString[3]) {
            cout << "Primer digito malposicionado (F)" << endl;}
        else cout << "Tercer digito inexistente (X)" << endl;
        
        
        if(intento[3] == fullString[3]) {
            cout << "Cuarto d�gito correcto (C)" << endl;
            adivinado++;}
            else if(intento[3] == fullString[1] || intento[3] == fullString[2] || intento[3] == fullString[0]) {
            cout << "Primer digito malposicionado (F)" << endl;}
    	else cout << "Cuarto digito inexistente (X)" << endl;
    	
    	// Mensaje de victoria (Se adivinan los 4 d�gitos)
        if(adivinado == 4) {
            cout << "Felicidades, haz ganado!! :D " << endl;
            exit(0);
        }
        // Si en un intento no se adivina ningun d�gito
        if(adivinado == 0) cout << "Ninguna es correcta!"<< endl;
    }
    //Si no se adivina la clave en el numero de intentos establecido
    cout << " Game Over D:" << endl;
    return 0;
}

//Fin del C�digo
