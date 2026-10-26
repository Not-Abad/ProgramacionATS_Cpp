/*2.1 	Expreciones
	Escribir correctamente expreciones matematicas*/

//Librerias
 #include <iostream>
 
//Le indico al programa usar la salida standar de datos 
 using namespace std;
 
 //Inicio del programa
int main(){

	//Declarar variables locales
	float a, b, resultado;
	
	//Mostrar y pedir en pantalla
	cout << "Digite el valor de a: "; cin >> a;
	cout << "Digite el valor de b: "; cin >> b;
	
	//Formulario
	resultado = (a/b) + 1;
	
	/*Este comando nos permite indicar cuantos caracteres mostar
	del valor que tiene cout*/
	cout.precision(3);
		
	//Mostrar en pantanlla
	cout << "El resultado es: " << resultado << endl;

	//Fin del programa
	return 1;
}

