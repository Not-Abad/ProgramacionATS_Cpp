/*3.1.4 Programa que indique que numero es mayor entre 3 numeros*/

//Librerias
 #include <iostream>
 
//Le indico al programa usar la salida standar de datos 
 using namespace std;
 
 //Inicio del programa
int main(){

	//Declarar variables
	int n1, n2, n3;
	
	//Pedir y mostrar en pantalla
	cout << "\tSentencia If" << endl;
	cout << "Digita el 1er numero :"; cin >> n1;
	cout << "Digita el 2do numero:"; cin >> n2;
	cout << "Digita el 3er numero:"; cin >> n3;
	
	//Si todos los numeros son iguales, Entonces...
	if(n1 == n2 && n2 == n3)

		//Mostrar en pantalla
		cout << "Los 3 numeros son iguales ";
		
	//Si no es el caso, pero n1 es el mayor, entonces...	
	else if(n1 > n2 && n1 > n3)	
	
			//Mostrar en pantalla
			cout << "El numero mayor es " << n1;
		
		//Si no es el caso, pero n2 es el mayor, entonces...	
		else if (n2 > n1 && n2 > n3)	

				//Mostrar en pantalla
				cout << "El numero mayor es " << n2;
				
			 //Si no es ninguno de los casos anteriores	
			 else
			 	
				 //Mostrar en pantalla
				 cout << "El numero mayor es " << n3;	
			 //End If	
		//End If
	//End If	
	
	//Fin del programa
	return 1;
}
