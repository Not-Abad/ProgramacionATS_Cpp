/*3.1.5 Programa que indique si el numero es par o impar*/

//Librerias
 #include <iostream>
 
//Le indico al programa usar la salida standar de datos 
 using namespace std;
 
 //Inicio del programa
int main(){

	//Declarar variables
	int numero;
	
	//Pedir y mostrar en pantalla
	cout << "\tSentencia If" << endl;
	cout << "\tPar o Impar" << endl;
	cout << "Escribe un numero :"; cin >> numero;
	
	//Si el numero es 0
	if(numero == 0)
		
		//Mostrar en pantalla
		cout << "El numero es 0";
		
		 //Si el residuo del numero entre 2 da 0, Entonces...
	else if(numero % 2 == 0)

			//Mostrar en pantalla
			cout << numero << " Es un numero par";
		
		 //Sino	
		 else 
		 
			//Mostrar en pantalla
			cout << numero << " Es un numero impar";
		
		//End If	
	//End If
	
	//Fin del programa
	return 1;
}
