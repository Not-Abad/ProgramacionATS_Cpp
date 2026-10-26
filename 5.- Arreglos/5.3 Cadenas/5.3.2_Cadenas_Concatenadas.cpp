/*5.3.2	Cadenas
	Programa que una 2 cadenas en 1 sola*/

//Librerias
 #include <iostream>
 #include <string.h>

//Le indico al programa usar la salida standar de datos 
 using namespace std;

//Inicio del programa
 int main(){

	//Declaro variables locales
	char text1[] = "Esto es una cadena";
	char text2[] = " de ejemplo";
	char text3[30];
	
	//Funciones
	strcpy(text3,text1);		//Copia la cadena de "texto1" a "texto3"
	strcat(text3,text2);		//Concatena la cadena de "texto2" a "texto3"
	
	//Muestra en pantalla
	cout << "\nLa cadena 1 es: " << text1;
	cout << "\nLa cadena 2 es: " << text2;
	cout << "\nLa cadena 3 es: " << text3;

//Fin del programa
 return 1;
}

