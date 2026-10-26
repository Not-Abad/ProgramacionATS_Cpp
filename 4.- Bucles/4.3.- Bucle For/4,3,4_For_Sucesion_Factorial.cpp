/*4.3.4  Sentecia For
	Programa que calcule la suma de una sucesion 
	factorial usando un solo for*/

//Librerias
 #include <iostream>
 
//Le indico al programa usar la salida standar de datos 
 using namespace std;
 
 //Inicio del programa
int main(){

	//Declaramos las variables
	int num, resultado = 0;
	int factorial = 1;
	
	//Pedir al usuario
	cout << "\tSuma Fatorial\n" << endl;
	cout << "Escribe el numero de final de la sucesion: "; cin  >> num;
	cout <<"0 " ;
		
	//Repetir siempre y cuando i sea menor o igual al numero digitado,
	//iniciando en 1 aumentando 1 en cada iteracion
	for(int i = 1; i <= num; i++){
		
		//Formulario
		factorial *= i;
		resultado += factorial;

		cout << "+ " << i << "! ";
	}
	
	//Mostrar en pantalla
	cout << endl << endl << "La factorial de " <<  num << " es: " << resultado << endl;
	
	//Fin del programa
	return 0;
}
