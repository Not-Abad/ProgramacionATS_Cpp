/*4.1.5 Sentencia While
	Programa que descomponga enteros a sus
	factores primos */

//Librerias
 #include <iostream>

//Le indico al programa usar la salida standar de datos 
 using namespace std;
 
//Inicio del programa
 int main(){
 	
	//Declarar variables locales
	int numero;
	int factor = 2;
	
	//Pedir en pantalla
	cout << "Escribe un numero : "; cin >> numero;
	
	//Mostrar en pantalla
	cout << "Los factores primos de " << numero << " son : ";
	
	//Repetir siempre que numero no sea igual a 1
	while(numero != 1){
		
		//Si el residuo de numero entre factor es 0, entonces...
		if(numero % factor == 0){
			
			//Ejecutar
			cout << factor << " ";		//Mostrar en pantalla al factor
			numero /= factor;			//Numero es igual a Numero entre factor
			 
		}else	//Si el residuo no es 0, Entonces...	
			
			factor++;		//Auemnta 1 al factor
			
	}
	
//Fin del programa
 return 1;
}

