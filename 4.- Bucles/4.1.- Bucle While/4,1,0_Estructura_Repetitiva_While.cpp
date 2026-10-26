/*4.1 Estructuras Repetitivas: Sentecia While*/

//Librerias
 #include <iostream>
 #include <conio.h>
 
//Le indico al programa usar la salida standar de datos 
 using namespace std;
 
 //Inicio del programa
int main(){

	//Declarar variables
	int i = 1;
	
	//Repetir siempre y cuando (i sea menor o igual a 10)
	while(i <= 10){
		
		//Mostrar en pantalla
		cout << i << endl;
		
		//Suma 1 al valor de i
		i++;
	}
	
	/*Esta funcion de la libreria conio.h permite mostrar el .exe
	sin la necesidad de abrirlo en dev-c++*/
	getch();
	
	//Fin del programa
	return 1;
}

