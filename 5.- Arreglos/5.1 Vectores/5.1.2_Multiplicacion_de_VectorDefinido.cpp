/*5.2 Arreglos o Vectores
	Programa que multiplique los elementos 
	de un vectore definido */

//Librerias
 #include <iostream>

//Le indico al programa usar la salida standar de datos 
 using namespace std;

//Inicio del programa
 int main(){

	//Declarar variables locales
	int numeros[] = {1,2,3,4,5};
	int multiplicacion = 1;
	
	//Mostrar en pantalla
	cout << "\t\tArreglos o Vectores" << endl;
	cout << "La multiplicacion de : 1";
	
	//Repetir iteracion iniciando en 0; Siempre y cuando 
	//iteracion sea menor a 5; Aumentando 1 en cada iteracion
	for(int i = 0; i < 5; i++){
		
		//Mostrar en pantalla
		cout << " X " << numeros[i];
		
		//multi es igual a multi por posicion actual del arreglo
		multiplicacion *= numeros[i];	
	}
	
	cout << " = " << multiplicacion;

//Fin del programa
 return 1;
}
