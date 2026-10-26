/*5.2.6 Matrices
	Programa que identifique si una 
	matriz es simetrica */

//Librerias
 #include <iostream>

//Le indico al programa usar la salida standar de datos 
 using namespace std;

//Inicio del programa
 int main(){
 	
 
	//Declarar variables locales
	int matriz[100][100];			//Tamaño maximo de la matriz
	int filas, columnas;			//Medidas de la matriz
	bool simetria = true;			//Saber si la matriz es simetrica
	
	//Mostrar al usuario
	cout << "\t\tMatriz de 3X3 \n"; 
	cout << "Programa que detecta matrices simetricas\n\n";
	
	//Pedir al usuario
	cout << "Ingrese el numero de filas de la matriz: ";	cin >> filas;
	cout << "Ingrese el numero de columnas de la matriz: ";	cin >> columnas;

	//Permite ingresar la matriz
	for(int v1 = 0; v1 < filas; v1++){				//Cambia la posicion de las filas
		for(int v2 = 0; v2 < columnas; v2++){		//Cambia la posicion de las columnas
			
			//Pedir al usuario
			cout << "\tDigite el valor [" << v1+1 << "][" << v2+1 << "]: ";cin >> matriz[v1][v2];
			
		}
	}
	
	//Analiza si es simetrica la matriz
	if(filas == columnas){								//Si f y c son del mismo tamaño, Entonces..			
		for(int v1 = 0; (v1 < filas) && (simetria == true); v1++){ 				//Mostrar todas las filas
			for(int v2 = 0;(v2 < columnas) && (simetria == true); v2++){		//Mostrar todas las columnas
				if(matriz[v1][v2] != matriz[v2][v1]){	//Si la matriz Original NO es igual a la transpuesta, Entonces...
					simetria = false;					//La matriz no es simetrica	
				}
			}		
		}		
	}else{	
		simetria = false;			//La matriz no es simetrica
	}
		
	//Si la matriz es simetrica, Entonces...
	if(simetria == true){
		cout << "\n\tLa matriz es simetrica\n\t  ";		//Mostrar en pantalla
	}else{
		cout << "\n\tLa matriz no es simetrica\n\t  ";	//Mostrar en pantalla
	}	
	
	//Mostrar a la matriz
	for(int v1 = 0; v1 < filas; v1++){				//Cambia la posicion de las filas
		for(int v2 = 0; v2 < columnas; v2++){		//Cambia la posicion de las columnas
			
			//Mostrar en pantalla
			cout << " [" << matriz[v1][v2] << "]";
		}
		cout << endl << "\t  ";								//Separa las filas entre si
	}		
	
//Fin del programa
 return 1;	
 }

