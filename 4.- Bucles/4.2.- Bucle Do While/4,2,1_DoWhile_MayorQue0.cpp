/*4.2.1 Do while:
	Programa que cuente los numeros mayores a 0
	hasta que se ingrese el 0 */

//Librerias
 #include <iostream>
 #include <conio.h>
 
//Le indico al programa usar la salida standar de datos 
 using namespace std;
 
 //Inicio del programa
int main(){
	
	//Declarar variables locales
	int numero;
	int i = 0;
	
	//Mostrar en pantalla
	cout << "\tContador de numeros" << endl;
	do{
		
		//Mostrar en pantalla
		cout << "Escribe un numero: "; cin >> numero;
			
		if(numero > 0)
			i++;		
	//Repetir Si numero no es 0		
	}while(numero != 0);

	//Mostrar en pantalla
	cout << "La cantidad de veces que se ingresaron numeros mayores a 0 fueron: " << i ;


	/*Esta funcion de la libreria conio.h permite mostrar el .exe
	sin la necesidad de abrirlo en dev-c++*/
	getch();
	
	//Fin del programa
	return 1;
}
