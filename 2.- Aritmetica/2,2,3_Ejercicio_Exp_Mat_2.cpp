/*2.2.3 Escribir correctamente la expreciones matematicas*/

//Librerias
 #include <iostream>
 
//Le indico al programa usar la salida standar de datos 
 using namespace std;
 
 //Inicio del programa
int main(){

	//Declarar variables locales
	float a, b, c, d;
	float resultado = 0;
	
	//Mostrar en pantalla
	cout << "Mostrar el resultado de la siguiente expresion\n" << endl;
	cout << "\t\t        b"    << endl;
	cout << "\t\t a + --------"   << endl;
	cout << "\t\t      c - d"    << endl;
	
	//Pedir en pantalla
	cout << "\n\tDale los valores a la expresion" << endl;
	cout << "Digite el valor de a: "; cin >> a;
	cout << "Digite el valor de b: "; cin >> b;
	cout << "Digite el valor de c: "; cin >> c;
	cout << "Digite el valor de d: "; cin >> d;
	
	//Formulario
	resultado = a+(b/(c-d));
	
	/*Este comando nos permite indicar cuantos caracteres mostar
	del valor que tiene cout*/
	cout.precision(3);
		
	//Mostrar en pantanlla
	cout << "El resultado es: " << resultado << endl;

	//Fin del programa
	return 1;
}
