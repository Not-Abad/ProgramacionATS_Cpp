/*2.3.5 Programa que calcule el resultado de una ecuacion de 2 variables*/

//Librerias
 #include <iostream>
 #include <math.h>
 
//Le indico al programa usar la salida standar de datos 
 using namespace std;
 
 //Inicio del programa
int main(){

	//Declarar variables 
	float x, y, resultado;
	
	//Mostrar en pantalla
	cout << "Mostrar el resultado de la siguiente expresion\n" << endl;
	cout << "\t              ___ "    << endl;
	cout << "\t             / x "    << endl;
	cout << "\t  f(x,y) = --------- "   << endl;
	cout << "\t            y*y - 1 "    << endl;
	
	//Pedir en pantalla
	cout << "\n\tEcuaciones de 2 variables" << endl;
	cout << "Valor de la variable x :"; cin >> x;
	cout << "Valor de la variable y :"; cin >> y;
	
	//Formulario
	resultado = (sqrt(x))/(pow(y,2)-1);
	
	//Devolver en pantalla
	cout << "\nEl resultado de la ecuacion es: " << resultado << endl;
	

	//Fin del programa
	return 1;
}
