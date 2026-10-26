/*4.1.1  Sentecia While
	Programa que calcule el valor de x elevado a y
	(Valores dados por el usuario)*/

//Librerias
 #include <iostream>
 #include <conio.h>
 
//Le indico al programa usar la salida standar de datos 
 using namespace std;
 
 //Inicio del programa
int main(){

	//Declaramos las variables
	int numero;		int exponente;
	int i = 0;		float base = 1;
	
	//Mostrar en pantalla
	cout << "    Numeros Elevados\n" << endl;
	
	//Pedir al usuario
	cout << "Escribe el numero base: "; cin  >> numero;
	cout << "Escribe el exponente: ";   cin  >> exponente;
	cout << endl;
	
	//Si el exponente es mayor a 0, Entoncs
	if(exponente > 0){
		
		//Repetir siempre y cuando i sea menor al exponente
		while(i < exponente){
		
			//Formulario
			base *= numero;		//Multiplica a la base por el numero
			i++;				//Aumenta 1 en cada repeticion
			
		}
	}else{
		
		//Repetir siempre y cuando i sea mayor o igual al exponente
		while(i > exponente){
			
			base /= numero;		//Divide a la base por el numero
			i--;				//Disminuye 1 en cada repeticion
		}
	}
	
	//Mostrar en pantalla
	cout << "El resultado es: " << base << endl;
		
	/*Esta funcion de la libreria conio.h permite mostrar el .exe
	sin la necesidad de abrirlo en dev-c++*/
	getch();
	
	//Fin del programa
	return 1;
}
