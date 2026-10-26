/*2.3.1 Programa que itercambie los valores de 2 variables*/

//Librerias
 #include <iostream>
 
//Le indico al programa usar la salida standar de datos 
 using namespace std;
 
 //Inicio del programa
int main(){

	//Declarar variables
	int x,y,aux;
	
	//Pedir y mostrar en pantalla
	cout << "Digite el valor de x: "; cin >> x;
	cout << "Digite el valor de y: "; cin >> y;
	
	//Formulario
	aux = x;
	x = y;
	y = aux;
	
	//Devolver en pantalla
	cout << "\nEl nuevo valor de x es: " << x;
	cout << "\nEl nuevo valor de y es: " << y << endl;
	

	//Fin del programa
	return 1;
}

