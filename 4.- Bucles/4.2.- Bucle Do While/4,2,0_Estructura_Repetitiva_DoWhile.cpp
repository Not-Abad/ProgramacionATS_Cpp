/*4.1 Estructuras Repetitivas: Sentecia do-while*/

//Librerias
 #include <iostream>
 #include <stdlib.h>
 
//Le indico al programa usar la salida standar de datos 
 using namespace std;
 
 //Inicio del programa
int main(){

	//Declarar variables
	int i = 1;
	
	//Inicio del bucle (Estrutura iterativa)
	do{
		//Mostrar en pantalla
		cout << i << endl;
		
		//Aumenta el iterador de 1 en 1
		i++;
		
	} while(i <= 10); 	//Exprecion logica
	
	/*Esta funcion de la libreria stdlib.h permite mostrar el .exe
	sin la necesidad de abrirlo en dev-c++*/
	system("pause");
	
	//Fin del programa
	return 1;
}

