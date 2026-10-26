/*3.2.2 Programa que diferencia las vocales minusculas del resto 
.		 de caracteres del teclado*/

//Librerias
 #include <iostream>
 
//Le indico al programa usar la salida standar de datos 
 using namespace std;
 
 //Inicio del programa
int main(){

	//Declarar variables
	char letra;
	
	//Pedir y mostrar en pantalla
	cout << "\tSentencia Switch" << endl;
	cout << "\t  Abecedario\n" << endl;
	cout << "Digita un caracter: ";	cin >> letra;
	
	//Definir a la variable dependiente de las opciones
	switch(letra){
		
		//Opcion 1
		case 'a': 
		//Opcion 2
		case 'e': 
		//Opcion 3
		case 'i': 
		//Opcion 4
		case 'o': 
		//Opcion 5
		case 'u': cout << "Es una vocal minuscula"; break;
		//En caso que no sea ninguna opcion
		default: cout << "No es una vocal minuscula"; break;
	}

	//Fin del programa
	return 1;
}

