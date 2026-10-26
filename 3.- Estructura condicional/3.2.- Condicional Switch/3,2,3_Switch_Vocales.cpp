/*3.2.3 Programa que diferencia las vocales del resto 
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
		
		//Opcion 1		//Opcion 2 		//Opcion 3
		case 'a': 		case 'e':		case 'i':
		
		//Opcion 4		//Opcion 5		//Opcion 6
		case 'o':		case 'u':		case 'A':
			
		//Opcion 7		//Opcion 8		//Opcion 9
		case 'E': 		case 'I': 		case 'O': 
		
		//Opcion 10
		case 'U':	cout << "Es una vocal "; break;
		
		//En caso que no sea ninguna opcion
		default: cout << "No es una vocal "; break;
	}

	//Fin del programa
	return 1;
}

