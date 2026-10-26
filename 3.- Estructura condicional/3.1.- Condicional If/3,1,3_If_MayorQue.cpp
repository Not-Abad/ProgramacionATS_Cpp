/*3.1.3 Programa que indique que numero es mayo que el otro*/

//Librerias
 #include <iostream>
 
//Le indico al programa usar la salida standar de datos 
 using namespace std;
 
 //Inicio del programa
int main(){

	//Declarar variables
	int n1, n2;
	
	//Pedir y mostrar en pantalla
	cout << "\tSentencia If" << endl;
	cout << "Digita el 1er numero :"; cin >> n1;
	cout << "Digita el 2do numero:"; cin >> n2;
	
	//Si ambos numeros son iguales, Entonces...
	if(n1 == n2)

		//Mostrar en pantalla
		cout << "El numero " << n1 << " es igual a " << n2;
		
	//Si no es el caso, pero si n2 es mayor a n1, entonces...	
	else if(n1 < n2)	
	
			//Mostrar en pantalla
			cout << "El numero " << n2 << " es mayor a " << n1;
			
		//Si no es ninguno de los casos anteriores
		else	

			//Mostrar en pantalla
			cout << "El numero " << n1 << " es mayor a " << n2;
		//End If
	//End If	
	
	//Fin del programa
	return 1;
}
