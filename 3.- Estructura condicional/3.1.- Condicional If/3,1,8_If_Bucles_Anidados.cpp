/*3.1.8 Programa que detecte si el 4to numero es igual a los anteriores*/

//Librerias
 #include <iostream>
 
//Le indico al programa usar la salida standar de datos 
 using namespace std;
 
 //Inicio del programa
int main(){

	//Declarar variables
	int x1, x2, x3, x4;
	
	//Pedir y mostrar en pantalla
	cout << "\tSentencia If" << endl;
	cout << "\t  Igualdad\n" << endl;
	cout << "Escribe el 1er valor :"; cin >> x1;
	cout << "Escribe el 2do valor :"; cin >> x2;
	cout << "Escribe el 3er valor :"; cin >> x3;
	cout << "Escribe el 4to valor :"; cin >> x4;
	
	//Si el valor 1 es igual al 4, Entonces...
	if(x1 == x4)
		
		//Mostrar en pantalla
		cout << "El valor 1ro (" << x1 << "), es igual al 4to (" << x4 << ")"<< endl;
		
	 //Si no es el caso, pero el valor 2 es igual al 4, Entonces...	
	 else if(x2 == x4)
	
			 //Mostrar en pantalla
			 cout << "El valor 2do (" << x2 << "), es igual al 4to (" << x4 << ")"<< endl;
			
		 //Si no es el caso, pero el valor de 3 es igual al 4, Entonces...	
		 else if(x3 == x4)
		 
		 		//Mostrar en pantalla
				 cout << "El valor 3ro (" << x3 << "), es igual al 4to (" << x4 << ")"<< endl;
			 
			 //End If x3
		 //End If x2
	 //End If x1	 	  
			 
	
	//Fin del programa
	return 1;
}
