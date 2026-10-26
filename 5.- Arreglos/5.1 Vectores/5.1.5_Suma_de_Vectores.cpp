/*5.1.5 Arreglos o Vectores
	Programa que almacene el contenido de 2 vectores
	en 1 (que sean caracteres) */

//Librerias
 #include <iostream>

//Le indico al programa usar la salida standar de datos 
 using namespace std;

//Inicio del programa
 int main(){

	//Declarar variables locales
	char letras1[] = {'a','e','i','o','u'};
	char letras2[] = {'1','2','3','4','5'};
	char letras3[10];
	
	//copiar los elementos en la cadena 3
	for(int i=0; i<5;i++){
		
		letras3[i]   = letras1[i];
		letras3[i+5] = letras2[i];
	}
		
	//Mostrar en pantalla	
	for(int i = 0; i<10; i++){
		
		cout << letras3[i] << " ";
	}
	
//Fin del programa
 return 1;
}

