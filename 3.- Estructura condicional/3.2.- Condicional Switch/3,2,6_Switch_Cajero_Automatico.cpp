/*3.2.6 Programa que muestre el menu de una cajero automatico*/

//Librerias
 #include <iostream>
 
//Le indico al programa usar la salida standar de datos 
 using namespace std;
 
 //Inicio del programa
int main(){

	//Declarar variables
	int saldo = 1000;
	int op, movi;
	
	//Pedir y mostrar en pantalla
	cout << "\tCajero Automatico\n" << endl;
	cout << "Actualmente cuentas con " << saldo << " pesos" << endl;
	cout << "1.- Ingresar dinero en cuenta" << endl;
	cout << "2.- Retirar dinero en cuenta" << endl;
	cout << "3.- Salir" << endl;
	cout << "Selecciona una opcion(1-3): ";	cin >> op;
	
	//Definir a la variable dependiente de las opciones
	switch(op){
		
		//Opcion 1
		case 1: 
			cout << "\nDigite la cantidad a ingresar: "; cin >> movi;	
			saldo = saldo + movi;
			cout << "Actualmente cuentas con " << saldo << " pesos" << endl;
			break;
		//Opcion 2
		case 2:
			cout << "\nDigite la cantidad a retirar: "; cin >> movi;
			if(movi > saldo )	
				cout << "No cuenta con la cantidad suficiente para efectuar el retiro";
			else{
				saldo = saldo - movi;
				cout << "Actualmente cuentas con " << saldo << " pesos" << endl;	
			}
			break;	
		//Opcion 3
		case 3: break;
		
		//En caso que no sea ninguna opcion
		default: cout << "Opcion no valida"; break;
	}

	//Fin del programa
	return 1;
}

