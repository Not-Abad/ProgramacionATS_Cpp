/*3.2.4 Programa que convierta numeros decimales a Romanos*/

//Librerias
 #include <iostream>
 
//Le indico al programa usar la salida standar de datos 
 using namespace std;
 
 //Inicio del programa
int main(){

	//Declarar variables
	int unidades, decenas, centenas, millares;
	int numero;
	
	//Pedir y mostrar en pantalla
	cout << "\tSentencia Switch" << endl;
	cout << "NumerosDecimales a Romanos\n" << endl;
	cout << "Escribe un numero: ";	cin >> numero;
	
	//Formulario
	unidades = numero % 10;	numero /= 10;
	decenas = numero % 10;	numero /= 10;
	centenas = numero % 10;	numero /= 10;
	millares = numero % 10;	numero /= 10;
	
	//Definir a la variable dependiente de las opciones
	switch(millares){
		
		//Opcion 1
		case 1: cout << "M"; break;
		//Opcion 2
		case 2: cout << "MM"; break;
		//Opcion 3
		case 3: cout << "MMM"; break;

	}
	
	//Mostrar en pantalla
	cout << "Su conversion a Numero Romano es: ";
	
	//Definir a la variable dependiente de las opciones
	switch(centenas){
		
		//Opcion 1
		case 1: cout << "C"; break;
		//Opcion 2
		case 2: cout << "CC"; break;
		//Opcion 3
		case 3: cout << "CCC"; break;
		//Opcion 4
		case 4: cout << "CD"; break;
		//Opcion 5
		case 5: cout << "D"; break;
		//Opcion 6
		case 6: cout << "DC"; break;
		//Opcion 7
		case 7: cout << "DCC"; break;
		//Opcion 8
		case 8: cout << "DCCC"; break;
		//Opcion 9
		case 9: cout << "CM"; break;

	}

	//Definir a la variable dependiente de las opciones
	switch(decenas){
		
		//Opcion 1
		case 1: cout << "X"; break;
		//Opcion 2
		case 2: cout << "XX"; break;
		//Opcion 3
		case 3: cout << "XXX"; break;
		//Opcion 4
		case 4: cout << "XL"; break;
		//Opcion 5
		case 5: cout << "L"; break;
		//Opcion 6
		case 6: cout << "LX"; break;
		//Opcion 7
		case 7: cout << "LXX"; break;
		//Opcion 8
		case 8: cout << "LXXX"; break;
		//Opcion 9
		case 9: cout << "XC"; break;

	}
	
	//Definir a la variable dependiente de las opciones
	switch(unidades){
		
		//Opcion 1
		case 1: cout << "I"; break;
		//Opcion 2
		case 2: cout << "II"; break;
		//Opcion 3
		case 3: cout << "III"; break;
		//Opcion 4
		case 4: cout << "IV"; break;
		//Opcion 5
		case 5: cout << "V"; break;
		//Opcion 6
		case 6: cout << "VI"; break;
		//Opcion 7
		case 7: cout << "VII"; break;
		//Opcion 8
		case 8: cout << "VII"; break;
		//Opcion 9
		case 9: cout << "IX"; break;

	}	
	
	//Fin del programa
	return 1;
}

