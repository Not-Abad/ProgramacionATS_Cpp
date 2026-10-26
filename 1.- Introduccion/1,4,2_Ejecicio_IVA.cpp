/*1.4.2 Programa que le agregue el IVA a el precio que de el usuario*/

//Librerias
 #include <iostream>
 
//Le indico al programa usar la salida standar de datos 
 using namespace std;

 //Inicio del programa
int main(){
	
	//Declaracion de variables
	float precio, iva, total;
	
	//Mostrar y pedir en pantalla
	cout << "Digite un el precio del articulo: "; cin  >> precio;
	
	//Asignar valor usando formulas
	iva   = (precio/100)*16;
	total =  precio + iva;
	
	//Devolver en pantalla
	cout << "\nEl iva del producto es: " << iva;
	cout << "\nEl total a pagar es: " << total;


	//Fin del programa
	return 1;
}
