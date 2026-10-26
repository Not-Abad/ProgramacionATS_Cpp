/*1.4.1 Programa que resiva una entrada estandar de 2 numeros
 y muestre de salida la suma, resta, multiplicaion y division*/

//Librerias
 #include <iostream>

 //Le indico al programa usar la salida standar de datos 
 using namespace std;

 //Inicio del programa
int main(){
	
	//Declaracion de variables
	int multi = 0, 	divi = 0;
	int resta = 0,	suma = 0;
	int n1 , n2;
	
	//Mostrar en pantalla
	cout << " Digite el 1er numero: ";	cin  >> n1;
	cout << " Digite el 2do numero: ";	cin  >> n2;
	
	//Asignar valores usando formulas
	suma  = n1 + n2;
	resta = n1 - n2;
	multi = n1 * n2;
	divi  = n1 / n2;
	
	//Mostrar en pantalla
	cout << "\n La suma de " << n1 << " y " << n2 << " es " << suma;
	cout << "\n La resta de " << n1 << " y " << n2 << " es " << resta;
	cout << "\n La multiplicacion de " << n1 << " y " << n2 << " es " << multi;
	cout << "\n La division de " << n1 << " y " << n2 << " es " << divi;

	//Fin del programa
	return 1;
}

