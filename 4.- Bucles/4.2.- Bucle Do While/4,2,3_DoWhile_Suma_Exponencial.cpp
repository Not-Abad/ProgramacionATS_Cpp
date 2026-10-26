/*4.2.3 Sentencia Do-While
	Programa que calcule el resultado
	de 2^0 + 2^1 + 2^2 + ... +2^n*/

//Librerias
 #include <iostream>

 //Le indico al programa usar la salida standar de datos 
 using namespace std;
 
 //Inicio del programa
int main(){

	//Variables locales
	int exp, resultado = 1;
	int i = 1, base = 1;

	//Mostrar en pantalla
	cout << "\tSumas Exponencial " << endl;
	cout << "2^0 + 2^1 + 2^2 + ... +2^n " << endl;
	cout << "\nMuestra el resultado de la suma " << endl;
	cout << "de terminos anteriores \n" << endl;
	
	//Pedir al usuario
	cout << "Escribe el exponente maximo a mostrar: "; cin  >> exp;
	cout << "(2^0 = 1)";
	
	//Si el exponente es mayor a 0, entonces...
	if(exp > 0){
		
		//Repetir iteracion...
		do{
			
			//Formulario
			base *= 2;			//Multiplicar a la base por el numero
			resultado += base;	//Sumar al resultado la base actual
			
			//Mostrar en pantalla
			cout << " + " << "(2^" << i << " = " << base << ")";
			
			i++;	//Aumentar en 1 la iteracion
			
		}//Siempre y cuando i sea menor o igual al exponente
		while(i <= exp);	

	}
	
	//Mostrar en pantalla
	cout << " = " << resultado;
	
	//Fin del programa
	return 1;
}

