/*3.2.6 Programa que muestre el menu de un operador matematico*/

//Librerias
 #include <iostream>
 
//Le indico al programa usar la salida standar de datos 
 using namespace std;
 
 //Inicio del programa
int main(){

	//Declarar variables
	int op, numero;
	
	//Pedir y mostrar en pantalla
	cout << "Operador matematico" << endl;
	cout << "\tMenu\n" << endl;
	cout << "1.- Calcular Cubo" << endl;
	cout << "2.- Numero par o impar" << endl;
	cout << "3.- Salir" << endl;
	cout << "Selecciona una opcion(1-3): ";	cin >> op;
	
	//Definir a la variable dependiente de las opciones
	switch(op){
		
		//Opcion 1
		case 1: 
			cout << "\n Valores cubicos" << endl;	
			cout << "Escribe un numero: "; cin >> numero;	
			numero *= (numero * numero);
			cout << "El cubo de ese numero es " << numero << endl;
			break;
		//Opcion 2
		case 2:
			cout << " \n Par o Impar" << endl;
			cout << "\nEscribe un numero: "; cin >> numero;
			if(numero % 2 == 0 )	
				cout << "El numero " << numero << " es un numero par" << endl;
			else
				cout << "El numero " << numero << " es un numero impar" << endl;
			break;	
		//Opcion 3
		case 3: break;
		
		//En caso que no sea ninguna opcion
		default: cout << "Opcion no valida"; break;
	}

	//Fin del programa
	return 1;
}

