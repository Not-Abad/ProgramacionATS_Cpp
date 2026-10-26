/*5.3.6	Cadenas
	Programa que muestre el numero de vocales de una cadena*/

//Librerias
 #include <iostream>
 #include <stdlib.h>

//Le indico al programa usar la salida standar de datos 
 using namespace std;

//Inicio del programa
 int main(){

	//Declaro variables locales
	char  texto[100];
	int vocales;int va = 0;
	int ve = 0;	int vi = 0;
	int vo = 0;	int vu = 0;

	//Pedir en pantalla
	cout << "\tCadenas" << endl;
	cout << "Programa que muestra las vocales del texto" << endl;
	cout << "Escribe un una oracion: ";	cin.getline(texto,100,'\n');
	
	for(int i = 0; i < 100; i++){
		switch(texto[i]){
			case 'a':va++;vocales++;break;
			case 'e':ve++;vocales++;break;
			case 'i':vi++;vocales++;break;
			case 'o':vo++;vocales++;break;
			case 'u':vu++;vocales++;break;
		}
	}
	
	//Mostrar en pantalla
	cout << "El texto escrito tiene "  << vocales << " volaces" << endl;
	cout << "El texto escrito tiene "  << va << " vocales a" << endl;
	cout << "El texto escrito tiene "  << ve << " vocales e" << endl;
	cout << "El texto escrito tiene "  << vi << " vocales i" << endl;
	cout << "El texto escrito tiene "  << vo << " volaces o " << endl;
	cout << "El texto escrito tiene "  << vu << " volaces u" << endl;
	
//Fin del programa
 return 1;
}
