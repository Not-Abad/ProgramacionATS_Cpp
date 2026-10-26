/*4.2.4 Estructuras Repetitiva Do-While:
	Programa que solo muestre las tablas de multiplicar
	del 1 hasta el 10 */

//Librerias
 #include <iostream>
 #include <conio.h>
 
//Le indico al programa usar la salida standar de datos 
 using namespace std;
 
 //Inicio del programa
int main(){
	
	//Declarar variables locales
	int numero;
	do{
		
		//Mostrar en pantalla
		cout << "Escribe un numero: "; cin >> numero;
			
	//Repetir Si numero es menor a 1 o numero es mayor a 10			
	}while(numero < 1 || numero > 10);

	//Mostrar en pantalla
	cout << "La tabla de multiplicar de " << numero << " es:\n";

	//Repetir siempre y cuando i sea menor o igual a 10,
	//iniciando en 1 aumentando 1 en cada iteracion
	for(int i=1; i <= 10; i++){
		
		//Mostrar en pantalla
		cout << numero << " X " << i << " =" << numero*i << endl;
		
	}
	
	/*Esta funcion de la libreria conio.h permite mostrar el .exe
	sin la necesidad de abrirlo en dev-c++*/
	getch();
	
	//Fin del programa
	return 1;
}
