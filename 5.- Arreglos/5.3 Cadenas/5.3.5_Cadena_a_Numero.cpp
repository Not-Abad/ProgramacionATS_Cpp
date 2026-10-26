/*5.3.5	Cadenas
	Programa que convierta una cadena a numeros*/

//Librerias
 #include <iostream>
 #include <stdlib.h>

//Le indico al programa usar la salida standar de datos 
 using namespace std;

//Inicio del programa
 int main(){

	//Declaro variables locales
	char  texto[100];
	float numero;

	//Pedir en pantalla
	cout << "\tCadenas" << endl;
	cout << "Programa que convierte cadenas a numeros" << endl;
	cout << "Escribe un numero entero: ";	cin.getline(texto,100,'\n');
	
	//Le da a numero el valor numerico de la cadena
	numero = atof(texto);
	
	//Mostrar en pantalla
	cout << "\nEl texto escrito es: "  << texto << endl;
	cout << "\nEl numero escrito es: " << numero << endl;

//Fin del programa
 return 1;
}

