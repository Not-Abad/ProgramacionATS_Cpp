/*2.3.6 Programa que calcule cualquier ecuacion de 2do grado*/

//Librerias
 #include <iostream>
 #include <math.h>
 
//Le indico al programa usar la salida standar de datos 
 using namespace std;
 
 //Inicio del programa
int main(){

	//Declarar variables 
	int a,b,c;
	float raiz, x1, x2;
	
	//Mostrar en pantalla
	cout << " Formula General de Ecuaciones de 2do grado" << endl;
	cout << "\t    a(x*x) + bx + c = 0" << endl;
	  
	//Pedir en pantalla
	cout << "\n\t\t   Datos" << endl;
	cout << "\tValor del coheficiente a :"; cin >> a;
	cout << "\tValor del coheficiente b :"; cin >> b;
	cout << "\tValor del coheficiente c :"; cin >> c;
	
	//Formulario
	raiz = sqrt((b*b) - (4*a*c));
	x1 = (-b + raiz)/ (2*a);
	x2 = (-b - raiz)/ (2*a);
	
	//Devolver en pantalla
	cout << "\n\t  Ecuaciones de 2do grado" << endl;
	cout << "\t     " << a << "(x*x) + " << b << "x +" << c << " = 0" << endl;
	cout << "\n\tEl valor de x1 es: " << x1 << endl;
	cout << "\n\tEl valor de x2 es: " << x2 << endl;

	//Fin del programa
	return 1;
}
