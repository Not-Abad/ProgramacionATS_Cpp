/*4.1.3  Sentecia While
	Programa que calcule el valor de 1+3+5+...+2n-1*/

//Librerias
 #include <iostream>
 
//Le indico al programa usar la salida standar de datos 
 using namespace std;
 
 //Inicio del programa
int main(){

	//Declaramos las variables
	int i = 1;		int suma = i;
	int numero;	 	int valor;
	
	//Mostrar en pantalla
	cout << "    Sucesion Aritmetica" << endl;
	cout << "    1 + 3 + 5 + ... + 2n-1\n" << endl;
	
	//Pedir al usuario
	cout << "Digita el numero de elementos: "; cin  >> numero;
	cout << endl <<i;
	
	/*Repetir siempre que i sea menor que numero y
	y que numero sea mayor a 1*/
	while (i < numero ){
		
		//Formulario
		i++;	valor = (2 * i) - 1;
		suma += valor;
		
		//Mostrar en pantalla
		cout << " + " << valor;
		
	}

	//Mostrar en pantalla
	cout << " = " << suma << endl;
	
	//Fin del programa
	return 1;
}
