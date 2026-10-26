/*5.1 Arreglos o Vectores
	Programa que sume los elementos 
	de un vectore definido */

//Librerias
 #include <iostream>

//Le indico al programa usar la salida standar de datos 
 using namespace std;

//Inicio del programa
 int main(){

	//Declarar variables locales
	int numeros[] = {1,2,3,4,5};
	int suma = 0;
	
	//Mostrar en pantalla
	cout << "\tArreglos o Vectores" << endl;
	cout << "La suma de : 0";
	
	//Repetir iteracion iniciando en 0; Siempre y cuando 
	//iteracion sea menor a 5; Aumentando 1 en cada iteracion
	for(int i = 0; i < 5; i++){
		
		//Mostrar en pantalla
		cout << " + " << numeros[i];
		
		//Suma es igual a suma posicion actual del arreglo
		suma += numeros[i];	
	}
	
	cout << " = " << suma;

//Fin del programa
 return 1;
}

