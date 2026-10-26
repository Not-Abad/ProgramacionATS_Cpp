/*5.3.4	Cadenas
	Programa que convierta minusculas a mayusculas
	y viseversa (de mayusculas a minusculas)*/

//Librerias
 #include <iostream>
 #include <string.h>

//Le indico al programa usar la salida standar de datos 
 using namespace std;

//Inicio del programa
 int main(){

	//Declaro variables locales
	char texto[100];
	char mayus[100];
	char minus[100];

	//Pedir en pantalla
	cout << "\tCadenas" << endl;
	cout << "Programa que convierte minusculas a mayusculas" << endl;
	cout << "Escribe una oracion: ";	cin.getline(texto,100,'\n');
	
	//Le da a mayus el valor en mayusculas de la cadena texto
	strcpy(mayus,strupr(texto));
	strcpy(minus,strlwr(texto));
	
	//Mostrar en pantalla
	cout << "\nLa oracion en mayusculas es: " << mayus << endl;
	cout << "\nLa oracion en minusculas es: " << minus << endl;

//Fin del programa
 return 1;
}

