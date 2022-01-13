/* Asignación: Arreglos- Mastermind.cpp
Autor: José Ernesto González Fals ID-1100263
Fecha: 11 de noviembre del 2021
Materia: Estructuras de Datos y Algoritmos I */


// Librerías y paquetes

#include <iostream> // Uso de cout() y cin()
#include <sstream>	// Uso de stringstream()
#include <string>	// Conversión sstream() a string
#include <cstdlib>	// Uso de clase rand()
#include <time.h>	//Uso de clase time()
//-----------------------------------------------------------------------------Declaración de variables y funciones-----------------------------------------------------------

// Declaracion de la clase
using namespace std;

//función main()
int main(int argc, const char * argv[]) {
	
    stringstream clave; //Declaración de la clave conmo una variable de tipo sstream()
    int digitos[4] = {}; //4 dígitos por clave
    string intento;	//Intento de descifrado
    int intentosPermitidos = 12; //Número de intentos permitidos
    
    
    srand( time(NULL) );
    digitos[0] = rand() % 9 + 1;
    digitos[1] = rand() % 9 + 1;
    digitos[2] = rand() % 9 + 1; // Números aleatorios de la clave, del 1 al 9 (Dígitos de la clave)
    digitos[3] = rand() % 9 + 1;
    
    
    
    for(int i = 0; i < 4; ++i) {
        clave << digitos[i]; // Inserta cada dígito en la variable stringstream(clave)
    }
    
    
    
    string fullString = clave.str(); // Convierte la variable sstream a string  (clave >> fullString)
    cout << fullString << endl; // Función para demostración (Muestra el código)
    
    //-------------------------------------------------------------------Bucle de juego-----------------------------------------------------------------------------------------
    
    for(int i = 0; i < intentosPermitidos ; ++i) {
    	//Intento del jugador
    	
        int adivinado = 0;																		// Declaración dígitos adivinados
        cout << "Introduzca una clave de cuatro digitos (xxxx): "; 								// Petición ylectura del intento
        getline(cin, intento);
        
        //Solo se permiten 4 dígitos
        if(intento.size() != 4) { 
            cout << "Por favor introduzca solo cuatro numeros:" << endl;
            i--;
            continue; // No cuenta como un intento
        }
        
        /*
        Si el dígito del intento concidiera con el valor y posición el de la clave generada aleatoriamente, se notificará con un mensaje: # dígito caliente/correcto (C)
        Asimismo, si el dígito coincide con el valor de alguno de la clave mas no con su posición, se notificará con un mensaje: # dígito frío/malposicionado (F)
        Si el valor introducido en el intento no esta en ninguno de los dígitos de la clave, se notificará con un mensaje: # dígito inexistente(X)
        */
        
        
        if(intento[0] == fullString[0]) {
            cout << "Primer dígito correcto (C)" << endl;
            adivinado++;}
        else if(intento[0] == fullString[1] || intento[0] == fullString[2] || intento[0] == fullString[3]) {
            cout << "Primer dígito malposicionado (F)" << endl;}
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
            cout << "Cuarto dígito correcto (C)" << endl;
            adivinado++;}
            else if(intento[3] == fullString[1] || intento[3] == fullString[2] || intento[3] == fullString[0]) {
            cout << "Primer digito malposicionado (F)" << endl;}
    	else cout << "Cuarto digito inexistente (X)" << endl;
    	
    	// Mensaje de victoria (Se adivinan los 4 dígitos)
        if(adivinado == 4) {
            cout << "Felicidades, haz ganado!! :D " << endl;
            exit(0);
        }
        // Si en un intento no se adivina ningun dígito
        if(adivinado == 0) cout << "Ninguna es correcta!"<< endl;
    }
    //Si no se adivina la clave en el numero de intentos establecido
    cout << " Game Over D:" << endl;
    return 0;
}

//Fin del Código
