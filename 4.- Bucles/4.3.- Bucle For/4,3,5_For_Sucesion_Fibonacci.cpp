/*4.3.5 Sentencia For
	Programa que muestre la sucecion fibonacci
	1 1 2 3 5 8 13 ... n*/

//Librerias
 #include <iostream>

//Le indico al programa usar la salida standar de datos 
 using namespace std;
 
 //Inicio del programa
int main(){

	//Variables locales
	int terminos, resultado;
	int n1 = 0, n2 = 1;
	
	//Pedir en pantalla
	cout << "\tSuccion fibonacci" << endl;
	cout << "\t1 1 2 3 5 8 ... n" << endl << endl;
	cout << "Digita el numero de terminos a mostrar: "; cin >> terminos;
	cout << "1 ";
	
	//Repetir iniciando en 1; Siempre y cuando i sea 
	//menor a termino; Aumentando 1 en cada iteracion
	for(int i = 1; i < terminos; i++){
		
		//Formulario
		resultado = n1 + n2;
		n1 = n2;
		n2 = resultado;
		
		//Mostrar en pantalla
		cout << resultado << " ";
		
	}
	
//Fin del programa
 return 1;
}

