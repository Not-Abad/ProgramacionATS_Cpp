/*4.2.2  Sentecia Do While
	Programa que resiva valores hasta que le entren valores 
	entre 20-30 o el 0, y que entregue la suma total de los
	numeros mayores a 0*/

//Librerias
 #include <iostream>
 #include <conio.h>
 
//Le indico al programa usar la salida standar de datos 
 using namespace std;
 
 //Inicio del programa
int main(){

	//Declaramos las variables
	int numero;		int suma = 0;
	
	//Mostrar en pantalla
	cout << "\tSumas Iterativas " << endl;
	cout << "\nIngrese numeros que no esten " << endl;
	cout << "en el rango de 20 a 30 o sean " << endl;
	cout << "\tel numero 0\n" << endl;
	
	//Inicio del bucle (Estrutura iterativa)
	do{
		
		//Pedir al usuario
		cout << "Escribe un numero: "; cin  >> numero;
		
		//Si el numero es mayor a 0, Entonces...
		if(numero > 0)
		
			//Aumentale a suma el numero ingresado
			suma += numero;
			
	//Repetir si numero es menor a 20 y mayor a 30 y no sea 0		
	}while((numero < 20 || numero > 30) && numero != 0);
	
	//Mostrar en pantalla
	cout << "La suma total de los numeros aceptados en el rango es: " << suma << endl;
		
	/*Esta funcion de la libreria conio.h permite mostrar el .exe
	sin la necesidad de abrirlo en dev-c++*/
	getch();
	
	//Fin del programa
	return 1;
}
