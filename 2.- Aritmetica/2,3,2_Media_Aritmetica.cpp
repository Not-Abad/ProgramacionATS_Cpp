/*2.3.2 Programa que calcule la media de 4 valores*/

//Librerias
 #include <iostream>
 
//Le indico al programa usar la salida standar de datos 
 using namespace std;
 
 //Inicio del programa
int main(){

	//Declarar variables
	int v1, v2, v3, v4, media;
	
	//Pedir y mostrar en pantalla
	cout << "Digite el valor 1: "; cin >> v1;
	cout << "Digite el valor 2: "; cin >> v2;
	cout << "Digite el valor 3: "; cin >> v3;
	cout << "Digite el valor 4: "; cin >> v4;
	
	//Formulario
	media = (v1 + v2 + v3 +v4) / 4;
	
	//Devolver en pantalla
	cout << "\nLa media de los 4 valores es: " << media << endl;
	

	//Fin del programa
	return 1;
}

