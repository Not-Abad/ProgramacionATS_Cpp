/*1.4.3 Programa que pida al usuario edad, sexo y altura, 
 para despues mostrarlos en la salida estandar*/

//Librerias
 #include <iostream>
 
//Le indico al programa usar la salida standar de datos 
 using namespace std;

 //Inicio del programa
int main(){
	
	//Declaracion de variables
	int   edad;
	char  sexo[10];
	float estatura;
	
	//Mostrar y pedir en pantalla
	cout << "\t Datos personales \n\n";
	cout << " Escribe la edad que tienes: "; cin  >> edad;
	cout << " Escribe tu genero: "; cin  >> sexo;
	cout << " Escribe tu estatura: "; cin  >> estatura;
	
	//Devolver en pantalla
	cout << "\n\t Corroborar datos \n ";
	cout << "\n Tu edad es: " << edad;
	cout << "\n Tu genero es: " << sexo;
	cout << "\n Tu estatura es: " << estatura << endl;

	//Fin del programa
	return 1;
}
