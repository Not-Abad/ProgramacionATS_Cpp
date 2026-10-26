/*5.3.1	Cadenas
	Programa que muestre una cadena de caracteres
	y que agrupe algunas caracteristicas de estas*/

//Librerias
 #include <iostream>
 #include <string.h>

//Le indico al programa usar la salida standar de datos 
 using namespace std;

//Inicio del programa
 int main(){

	//Declaramos variables locales
	char palabra1[] = "Jesus";				//Puedes declarar todos los caracteres de la cadena a la vez
	char palabra2[] = {'J','e','s','u','s'};//O puedes declararlos 1 por 1.
	char texto1[10];	char texto2[10];	//Puedes declarar cadenas vacias, pero con espacios definidos.
	char texto3[10];	char texto4[10];
	int longitud1 = 0;	int longitud2 = 0;
	int longitud3 = 0;
	int diferencia;
	
	//Mostrar en pantalla
	cout << "La cadena 1 es: " << palabra1 << endl;
	cout << "La cadena 2 es: " << palabra2 << endl;
	
	//Pedir en pantalla (Formato cin)
	cout << "Escribe una oracion: ";		//El comando "cin" no es una buena manera de almacenar datos
	cin >> texto1;							//de tipo cadena, puesto que si hay algun espacio la cadena se rompera.
	fflush(stdin);							/*Limpia la entrada de informacion*/
	
	//Pedir en pantalla (formato gets)		//El comando "gets" no es la mejor manera de almacenar datos tipo 
	cout << "Escribe una oracion: ";		//cadena, puesto que si la cadena es mas grande de lo esperado,
	gets(texto2);							//gets tomara mas memoria de la especificada.
	fflush(stdin);							/*Limpia la entrada de informacion*/						
	
	//Pedir en pantalla (formato cin.getline)
	cout << "Escribe una oracion: ";		//El comando cin.getline suele ser la mejor manera de almacenar cadenas
	cin.getline(texto3,10,'\n');			//puesto que respeta el tamaño indicado y no se corta si hay espacios.
	fflush(stdin);							/*Limpia la entrada de informacion*/
	
	//Medir el numero de caracteres que tienen las cadenas
	longitud1 = strlen(texto1);				//La funcion strlen de la libreria String.h permite medir
	longitud2 = strlen(texto2);				//el numero total de caracteres que se usaron de una cadena
	longitud3 = strlen(texto3);
	strcpy(texto4,texto3);					//Copia una cadena en otra vacia
	
	//Mostrar en pantalla
	cout << "\nEl texto escrito con formato cin es:\t     "   << texto1;
	cout << "\nEl texto escrito con formato gets es:\t     "  << texto2;
	cout << "\nEl texto escrito con formato cin.getline es: " << texto3;
	cout << "\nEl texto copiado del texto 3 es:    \t     " << texto4 << endl;

	//Mostrar en pantalla			
	cout << "\nEl texto escrito con formato cin tiene:\t\t"   << longitud1 << " caracteres";
	cout << "\nEl texto escrito con formato gets tiene:\t"   << longitud2 << " caracteres";
	cout << "\nEl texto escrito con formato cin.getline tiene: "   << longitud3 << " caracteres";	
	
	//diferencia es igual al valor de strcmp	//Esta funcion de la libreria string.h detenta si hay 
	diferencia = strcmp(texto2,texto3);			//alguna diferencia entre 2 cadenas
	
	//Si el valor de strcmp es igual a 0, Entonces...
	if(strcmp(texto1,texto2) == 0)
		cout << "\nLa frase '" << texto1 << "' y '" << texto2 << " son iguales " << diferencia;
	else
		cout << "\nLa frase '" << texto1 << "' y '" << texto2 << " son diferentes "<< diferencia;
	
//Fin del programa
 return 1;
}

