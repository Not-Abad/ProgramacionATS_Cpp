/*4.3.3  Sentecia For
	Programa que calcule el factorial de 
	un numero*/

//Librerias
 #include <iostream>
 
//Le indico al programa usar la salida standar de datos 
 using namespace std;
 
 //Inicio del programa
int main(){

	//Declaramos las variables
	int num, resultado = 1;
	
	//Pedir al usuario
	cout << " Numeros Fatoriales\n" << endl;
	cout << "Escribe un numero: "; cin  >> num;
	cout << endl << "La sucesion aritmetica de " << num << "! es: ";
		
	//Repetir siempre y cuando i sea menor o igual al numero digitado,
	//iniciando en 1 aumentando 1 en cada iteracion
	for(int i = 1; i <= num; i++){
		
		//Formulario
		resultado *= i;
		
		cout << resultado << " ";
	}
	
	//Mostrar en pantalla
	cout << endl << endl << "La factorial de " <<  num << " es: " << resultado << endl;
	
	//Fin del programa
	return 1;
}
