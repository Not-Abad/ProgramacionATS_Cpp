/*3.2.1 Condicional Switch*/

//Librerias
 #include <iostream>
 
//Le indico al programa usar la salida standar de datos 
 using namespace std;
 
 //Inicio del programa
int main(){

	//Declarar variables
	int numero;
	
	//Pedir y mostrar en pantalla
	cout << "\tSentencia Switch" << endl;
	cout << "\t   Opciones\n" << endl;
	cout << "Digita un numero entre 1-5: ";	cin >> numero;
	
	//Definir a la variable dependiente de las opciones
	switch(numero){
		
		//Opcion 1
		case 1: cout << "Es el numero 1"; break;
		//Opcion 2
		case 2: cout << "Es el numero 2"; break;
		//Opcion 3
		case 3: cout << "Es el numero 3"; break;
		//Opcion 4
		case 4: cout << "Es el numero 4"; break;
		//Opcion 5
		case 5: cout << "Es el numero 5"; break;
		//En caso que no sea ninguna opcion
		default: cout << "No esta en el rango de 1-5"; break;
	}

	//Fin del programa
	return 1;
}

