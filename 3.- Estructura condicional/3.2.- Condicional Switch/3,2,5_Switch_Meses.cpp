/*3.2.5 Programa que muestre el mes seleccionado*/

//Librerias
 #include <iostream>
 
//Le indico al programa usar la salida standar de datos 
 using namespace std;
 
 //Inicio del programa
int main(){

	//Declarar variables
	int mes;
	
	//Pedir y mostrar en pantalla
	cout << "\tSentencia Switch" << endl;
	cout << "\t    Meses\n" << endl;
	cout << "Escoge un mes(1-12): ";	cin >> mes;
	
	//Mostrar en pantalla
	cout << "El mes seleccionado es ";
	
	//Definir a la variable dependiente de las opciones
	switch(mes){
		
		//Opcion 1
		case 1: cout << "Enero"; break;
		//Opcion 2
		case 2: cout << "Febrero"; break;
		//Opcion 3
		case 3: cout << "Marzo"; break;
		//Opcion 4
		case 4: cout << "Abril"; break;
		//Opcion 5
		case 5: cout << "Mayo"; break;
		//Opcion 6
		case 6: cout << "Junio"; break;
		//Opcion 7
		case 7: cout << "Julio"; break;
		//Opcion 8
		case 8: cout << "Agosto"; break;
		//Opcion 9
		case 9: cout << "Septiembre"; break;
		//Opcion 10
		case 10: cout << "Octubre"; break;
		//Opcion 11
		case 11: cout << "Noviembre"; break;
		//Opcion 12
		case 12: cout << "Diciembre"; break;
		//En caso que no sea ninguna opcion
		default: cout << "El mes selecionado no existe"; break;
	}

	//Fin del programa
	return 1;
}

