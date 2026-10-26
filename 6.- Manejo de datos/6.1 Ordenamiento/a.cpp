/*6.1 Ordenamiento 
	Programa que ordene los datos numericos de una lista
	usando el metodo burbuja*/

//Librerias
 #include <iostream>


//Le indico al programa usar la salida standar de datos 
 using namespace std;

//Inicio del programa
 int main(){
 	
	//Declaro variables locales
	int numeros[5] = {4,1,2,3,8};
	int aux,z;
	
	for(int z = 0;numeros[z] != '\0';z++){
		cout << z << ": " << numeros[z] << endl;
	}
	
	cout << "\nLa lista es: ";
	for(int i = 0;i < 5;i++){
		cout << numeros[i];
	}
	
	//Algoritmo del metodo burbuja
	for(int i = 0;i < 5;i++){
		for(int j = 0;j < 5;j++){
			if((numeros[j] > numeros[j+1]) &! (numeros[j] == 0)){
			aux = numeros[j];
			numeros[j] = numeros[j+1];
			numeros[j+1] = aux;	
			}
		}		
	}
	
	cout << "\nOrden Acendente: ";
	
	for(int a = 0;a < 5;a++){
		cout << numeros[a];
	}
	

//Fin del programa
 return 1;
}
