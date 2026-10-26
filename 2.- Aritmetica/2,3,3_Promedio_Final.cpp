/*2.3.3 Programa que calcule la calificacion final de un estudiante
 usando los criterios de evaluacion del profesor*/

//Librerias
 #include <iostream>
 
//Le indico al programa usar la salida standar de datos 
 using namespace std;
 
 //Inicio del programa
int main(){

	//Declarar variables
	float practicas, teorica, participacion, Cal_final;
	
	//Pedir y mostrar en pantalla
	cout << "Calificacion final de practicas (30%): "; cin >> practicas;
	cout << "Calificacion final de teorica (60%): "; cin >> teorica;
	cout << "Calificacion final de participacion (10%): "; cin >> participacion;
	
	//Formulario
	practicas *= 0.3;
	teorica  *= 0.6;
	participacion *= 0.1;
	Cal_final = practicas + teorica + participacion;
	
	//Devolver en pantalla
	cout << "\nLa Calificacion final ponderada es: " << Cal_final << endl;
	

	//Fin del programa
	return 1;
}

