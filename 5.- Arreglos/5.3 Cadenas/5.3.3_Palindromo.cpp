/*5.3.3	Cadenas
	Programa que detecte si el texto escrito
	por el usuario es un polindromo o no*/

//Librerias
 #include <iostream>
 #include <string.h>

//Le indico al programa usar la salida standar de datos 
 using namespace std;

//Inicio del programa
 int main(){

	//Declaro variables locales
	char texto[100];
	char inver[100];

	//Muestra en pantalla
	cout << "\tCadenas" << endl;
	cout << "Programa que detecta palindromos" << endl;
	cout << "Escribe una oracion: ";	cin.getline(texto,100,'\n');
	
	strcpy(inver,strrev(texto));
	
	cout << "\nLa oracion " << texto << " ";
	
	if(strcmp(texto,inver) != 0)
		cout << "no ";
	
	cout << "es un palindromo"  << endl;

//Fin del programa
 return 1;
}

