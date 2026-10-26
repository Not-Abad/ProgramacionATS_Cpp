/*2.2.2 Escribir correctamente la expreciones matematicas*/

//Librerias
 #include <iostream>
 
//Le indico al programa usar la salida standar de datos 
 using namespace std;
 
 //Inicio del programa
int main(){

	//Declarar variables locales
	float a, b, c, d, e ,f;
	float resultado = 0;
	
	//Mostrar en pantalla
	cout << "Mostrar el resultado de la siguiente expresion\n" << endl;
	cout << "\t\t      b"    << endl;
	cout << "\t\t a + ---"   << endl;
	cout << "\t\t      c"    << endl;
	cout << "\t\t----------" << endl;
	cout << "\t\t      e"    << endl;
	cout << "\t\t d + ---"   << endl;
	cout << "\t\t      f"    << endl;
	
	//Pedir en pantalla
	cout << "\n\tDale los valores a la expresion" << endl;
	cout << "Digite el valor de a: "; cin >> a;
	cout << "Digite el valor de b: "; cin >> b;
	cout << "Digite el valor de c: "; cin >> c;
	cout << "Digite el valor de d: "; cin >> d;
	cout << "Digite el valor de e: "; cin >> e;
	cout << "Digite el valor de f: "; cin >> f;
	
	//Formulario
	resultado = (a+(b/c))/(d+(e/f));
	
	/*Este comando nos permite indicar cuantos caracteres mostar
	del valor que tiene cout*/
	cout.precision(4);
		
	//Mostrar en pantanlla
	cout << "El resultado es: " << resultado << endl;

	//Fin del programa
	return 1;
}

