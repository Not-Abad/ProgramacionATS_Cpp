/*6.1 Ordenamiento 
	Programa que ordene los datos numericos de una lista
	usando el metodo burbuja*/

//Librerias
 #include <stdio.h>


//Le indico al programa usar la salida standar de datos 
 using namespace std;

//Inicio del programa
 int main(){
 	
	//Declaro variables locales
	int numeros[5] = {8,1,6,0,5};
	int aux, x = 0;
	
	for(int z = 0;numeros[z] != '\0';z++){
		printf("%i : %i\n",z,numeros[z]);
	}
	
	printf("La lista original es: ");

	for(int i = 0;i < 5;i++){
		printf("%i",numeros[i]);
	}
	fflush(stdin);
	
	//Algoritmo del metodo burbuja
	for(int i = 0;i < 5;i++){
		for(int j = 0;j < 5;j++){
			if((numeros[j] > numeros[j+1]) && (j+1 < 5)){
			aux = numeros[j];
			numeros[j] = numeros[j+1];
			numeros[j+1] = aux;	
			x++;
			printf("\n%i.-",x);
			for(int k = 0;k < 5;k++)
				printf("%i",numeros[k]);
			
			}
		}	
		
	}
	fflush(stdin);
	
	printf("\n%i Orden Acendente: ",x);
	
	for(int i = 0;i < 5;i++){
		
		printf("%i",numeros[i]);
	}

//Fin del programa
 return 0;
}

