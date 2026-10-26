/*4.3.2  Sentecia For
	Programa que resiva 4 temperaturas y que muestre
	La mayor, la menor y el promedio*/

//Librerias
 #include <iostream>
 #include <conio.h>
 
//Le indico al programa usar la salida standar de datos 
 using namespace std;
 
 //Inicio del programa
int main(){

	//Declaramos las variables
	int temperatura, t_maxima, t_minima;
	float promedio = 0;
	
	//Repetir siempre y cuando i sea menor o igual a 10,
	//iniciando en 1 aumentando 1 en cada iteracion
	for(int i=1; i <= 4; i++){
		
		//Pedir al usuario
		cout << "Escribe el temperatura " << i << ": " ; cin  >> temperatura;
		
		//Formulario
		promedio += temperatura;
		
		/*Si es la primer repeticion o temperatura es mayor 
		a la temperatura maxima, Entonces...*/
		if(i == 1 || temperatura > t_maxima)
			t_maxima = temperatura;
		
		/*Si es la primer repeticion o temperatura es menor 
		a la temperatura minima, Entonces...*/
		if(i == 1 || temperatura < t_minima)
			t_minima = temperatura;
		
	}
	
	//Formulario
	promedio /= 4;
	
	/*Este comando nos permite indicar cuantos caracteres mostar
	del valor que tiene cout*/
	cout.precision(4);
	
	//Mostrar en pantalla
	cout << "La temperatura promedio es: " << promedio << endl;
	cout << "La temperatura maxima es: "   << t_maxima << endl;
	cout << "La temperatura minima es: "   << t_minima << endl;
		
	/*Esta funcion de la libreria conio.h permite mostrar el .exe
	sin la necesidad de abrirlo en dev-c++*/
	getch();
	
	//Fin del programa
	return 1;
}
