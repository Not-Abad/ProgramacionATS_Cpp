/*4.3.1  Sentecia For
	Programa que muestre la suma de los cuadrados de
	primeros 10 numeros mayores a 0*/

//Librerias
 #include <iostream>
 #include <conio.h>
 
//Le indico al programa usar la salida standar de datos 
 using namespace std;
 
 //Inicio del programa
int main(){

	//Declaramos las variables
	int cuadrado;
	int suma = 0;
	
	//Repetir siempre y cuando i sea menor o igual a 10,
	//iniciando en 1 aumentando 1 en cada iteracion
	for(int i=1; i <= 10; i++){
		
		//Formulario
		cuadrado = i * i;
		suma += cuadrado;

	}
	
	//Mostrar en pantalla
	cout << "El resultado es: " << suma << endl;
		
	/*Esta funcion de la libreria conio.h permite mostrar el .exe
	sin la necesidad de abrirlo en dev-c++*/
	getch();
	
	//Fin del programa
	return 1;
}
