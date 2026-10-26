/*4.3 Estructuras Repetitivas: Sentecia For*/

//Librerias
 #include <iostream>
 #include <conio.h>
 
//Le indico al programa usar la salida standar de datos 
 using namespace std;
 
 //Inicio del programa
int main(){

	//Repetir siempre y cuando i sea menor o igual a 10,
	//iniciando en 1 aumentando 1 en cada iteracion
	for(int i=1; i <= 10; i++){
		
		//Mostrar en pantalla
		cout << i << endl;
		
	}
	
	/*Esta funcion de la libreria conio.h permite mostrar el .exe
	sin la necesidad de abrirlo en dev-c++*/
	getch();
	
	//Fin del programa
	return 1;
}
