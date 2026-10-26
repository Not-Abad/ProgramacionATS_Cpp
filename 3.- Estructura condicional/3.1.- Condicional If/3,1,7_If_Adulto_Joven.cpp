/*3.1.7 Programa que indique si la persona es un adulto joven (Edad entre 18 a 25)*/

//Librerias
 #include <iostream>
 
//Le indico al programa usar la salida standar de datos 
 using namespace std;
 
 //Inicio del programa
int main(){

	//Declarar variables
	int edad;
	
	//Pedir y mostrar en pantalla
	cout << "\tSentencia If" << endl;
	cout << "    Adulto Joven\n" << endl;
	cout << "Escribe la edad que tienes :"; cin >> edad;
	
	//Si el numero es menor a 0, Entonces...
	if(edad >= 18  && edad <= 25)
		
		//Mostrar en pantalla
		cout << "Al tener la edad de " << edad << ", eres un adulto joven";
		
	 //Si no tienes ese margen de edad, Entonces...
	 else 
	
		//Mostrar en pantalla
		cout << "Al tener la edad de " << edad << ", no eres un adulto joven";
			  	
	//End If
	
	//Fin del programa
	return 1;
}
