/*3.1.6 Programa que indique si el numero es positivo o negativo*/

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
	cout << "    Positivo o negativo\n" << endl;
	cout << "Escribe un numero :"; cin >> numero;
	
	//Si el numero es menor a 0, Entonces...
	if(numero < 0)
		
		//Mostrar en pantalla
		cout << "El numero " << numero << " es negativo";
		
		 //Si el numero es mayor a 0, Entonces...
	 else if(numero > 0)

			//Mostrar en pantalla
			cout << "El numero " << numero << " es positivo";
		
		 //Sino	es ni positivo ni negativo entonces es 0
		 else 
		 
			//Mostrar en pantalla
			cout << " Es un numero es 0";
		
		 //End If	
	//End If
	
	//Fin del programa
	return 1;
}
