/*2.3.4 Programa que calcule la hipotenusa de un 
 .		triangulo rectangulo usando sus catetos*/

//Librerias
 #include <iostream>
 #include <cmath>
 
//Le indico al programa usar la salida standar de datos 
 using namespace std;
 
 //Inicio del programa
int main(){

	//Declarar variables
	float a, b, hipotenusa;
	
	//Pedir y mostrar en pantalla
	cout << "\tTriangulo Rectangulo" << endl;
	cout << "Valor del cateto A :"; cin >> a;
	cout << "Valor del cateto B :"; cin >> b;
	
	//Formulario
	a *= a;
	b *= b;
	hipotenusa = sqrt (a+b);
	
	//Devolver en pantalla
	cout << "\nLa hipotenusa del triangulo es: " << hipotenusa << endl;
	

	//Fin del programa
	return 1;
}

