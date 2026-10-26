/*4.1.4 Sentencia While
Programa que calcule la sucesion 
	1-2+3-4+5-6...n  */

//Librerias
 #include <iostream>

//Le indico al programa usar la salida standar de datos 
 using namespace std;
 
//Inicio del programa
 int main(){

	//Variables locales
	int numero, base, i = 1;
	int multiplicador = -1, resultado = 0;
	
	//Pedir en pantalla
	cout << "\tSucesion aritmetica" <<  endl;
	cout << "\t  0+1-2+3-4+5...n \n" << endl;
	cout << "Escribe el numero final de la sucesion a mostrar: "; cin >> numero;
	cout << "0";
	
	//Repetir siempre y cuando i sea menor o igual a numero
	while(i <= numero){
		
		//Formulario
		multiplicador *= -1;			//Multiplicador es igual a el mismo por -1
		base = i * multiplicador;		//Le da el signo del multiplicador al numero actual 
		resultado += base;
		
		//Si multiplicador es positivo, Entonces...
		if(multiplicador == 1)
		
			//Mostrar en pantalla signo positivo
			cout << " + ";
			
		else		//Si no es positivo, Entonces...
		
			//Mostrar en pantalla
			cout << " - ";	
		
		//End If
		
		//Mostrar en pantalla
		cout << i ;
		
		//Aumentar 1 iteracion
		i++;
	}

	//Mostrar en pantalla
	cout << " = " << resultado;
	
//Fin del programa
 return 1;
 }
 
 
 

