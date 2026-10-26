/*5.3 Arreglos o Vectores
	Programa que permita ingresar un arreglo de numeros
	y que despues los muestre en orden respecto de sus indices */

//Librerias
 #include <iostream>

//Le indico al programa usar la salida standar de datos 
 using namespace std;

//Inicio del programa
 int main(){

	//Declarar variables locales
	int numero[100];
	int op;
	
	//Repetir iteracion....
	do{
		
		//Mostrar en pantalla		
		cout << "\tArreglos o Vectores" << endl;
		cout << "Numero de elementos que tendra el arreglo(1-100): "; cin >> op;
		
		//Si la opcion es menor a 1 o mayora 100, Entonces...
		if(1>op || op>100){

			//Mostrar en pantalla		
			cout << "\tSINTAX ERROR\n";
			cout << "Numero de elementos invalido\n" << endl;		
		}
		
	}while(1>op || op>100);	//Si la opcion es menor a 1 o mayor a 100
	
	//Repetir iteracion iniciando en 0; Siempre y cuando 
	//iteracion sea menor a opcion; Aumentando 1 en cada iteracion
	for(int i = 0; i < op; i++){
		
		//Pedir en pantalla
		cout << "Escribe el elemento " << i+1 << ": "; cin >> numero[i];
		
	}
	
	//Repetir iteracion iniciando en 0; Siempre y cuando 
	//iteracion sea menor a opcion; Aumentando 1 en cada iteracion
	for(int i = 0; i < op; i++){
		
		//Mostrar en pantalla
		cout << "\nEl valor del elemento " << i+1 << " es : " << numero[i];
		
	}

//Fin del programa
 return 1;
}

