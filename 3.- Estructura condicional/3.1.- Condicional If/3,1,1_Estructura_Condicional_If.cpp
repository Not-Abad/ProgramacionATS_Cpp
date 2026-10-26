/*3.1.1 Estructura Condicional Sentencia If*/

//Librerias
 #include <iostream>
 
//Le indico al programa usar la salida standar de datos 
 using namespace std;
 
 //Inicio del programa
int main(){

	//Declarar variables
	int numero, constante = 5;
	
	//Pedir y mostrar en pantalla
	cout << "\tSentencia If" << endl;
	cout << "Digita un numero:"; cin >> numero;
	
	//Si el numero es igual a la constante, Entonces...
	if(numero == constante)
	
		//Muestra en pantalla
		cout << "El numero es igual a 5";
	//End If
	
	//Fin del programa
	return 1;
}

