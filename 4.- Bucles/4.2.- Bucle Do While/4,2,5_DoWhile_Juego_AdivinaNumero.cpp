/*4.2.5 Do-While
	Programa que calcule un numero al Azar entre 1 al 100
	y que el usuario tenga que adivinar, teniendo como pistas las frases
	muy alto y muy bajo conforme al contexto*/

//Librerias
 #include <iostream>
 #include <cstdlib> 
 #include <time.h>

//Le indico al programa usar la salida standar de datos 
 using namespace std;
 
//Inicio del programa
 int main(){
	
	//Declarar variables locales
	int random, numero, contador = 0;
	
	//Funcion de aleatoriedad
	srand(time(NULL));				//Semilla de aleatoriedad respecto al tiempo	
	random = 1 + rand() % (100);	//Crea un numero aleatorio entre 1 al 100
	
	//Mostrar en pantalla
	cout << "Adivina el Numero" << endl;
	cout << "    (1-100)\n"		<< endl;
	
	//Repetir iteracion...
	do{
		
		//Pedir en pantalla
		cout << "Digita un numero: "; cin >> numero;
		
		//Si numero es menor al numero random, Entonces...
		if(numero < random)
			cout << "Muy bajo\n";	//Mostrar en pantalla
		
		//Si numero es mayor al numero random, Entonces..
		if(numero > random)	
			cout << "Muy alto\n";	//Mostrar en pantalla
			
		//Aumentar 1 en cada iteracion
		contador++;	
		
	}//Siempre y cuando numero NO sea igual al numero random
	while(numero != random);
	
	//Mostrar en pantalla
	cout << "\nFELICIDADES, ADIVINASTE EL NUMERO";
	cout << "\nNumero de intentos: " << contador;
	
//Fin del programa
 return 1;
}

