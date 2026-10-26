/*4.1.2  Sentecia While
	Programa que calcule el valor de 1+2+3..n*/

//Librerias
 #include <iostream>
 #include <conio.h>
 
//Le indico al programa usar la salida standar de datos 
 using namespace std;
 
 //Inicio del programa
int main(){

	//Declaramos las variables
	int suma = 1;		int i = 1;
	int numero;	
	
	//Mostrar en pantalla
	cout << "    Sucesion Aritmetica" << endl;
	cout << "    1 + 2 +3 + ... + n\n" << endl;
	
	//Pedir al usuario
	cout << "Digita el numero de elementos: "; cin  >> numero;
	cout << i;
	//Repetir siempre y cuando i sea menor o igual al exponente
	while(i < numero && numero > 0){
		
		i++;	suma += i;
		cout << " + " << i;
	}

	//Mostrar en pantalla
	cout << " = " << suma << endl;
		
	/*Esta funcion de la libreria conio.h permite mostrar el .exe
	sin la necesidad de abrirlo en dev-c++*/
	getch();
	
	//Fin del programa
	return 1;
}
