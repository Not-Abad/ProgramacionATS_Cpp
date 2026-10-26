/*5.2.3 Matrices
	Programa que almacene una matriz de n terminos(maximo 20) 
	de las filas y columnas con valores aleatorios */

//Librerias
 #include <iostream>
 #include <cstdlib> 
 #include <time.h> 
 #include <windows.h> 

//Le indico al programa usar la salida standar de datos 
 using namespace std;

//Inicio del programa
 int main(){

	//Declarar variables locales
	int matriz[20][20];		//Matriz de valores
	int filas, columnas, random;
	
	//Mostrar al usuario
	cout << "\tMatriz aleatoria \n"; 
	cout << "Programa que genera una matriz aleatoria ";
	cout << "\n\tde n terminos\n";
	
	//Pedir al usuario
	cout << "Escribe el numero de filas: "; 	cin >> filas;
	cout << "Escribe el numero de columnas: ";	cin >> columnas;
	
	//Ingresar todos los valores de la matriz
	for(int v1 = 0; v1 < filas; v1++){				//Cambia la posicion de las filas
		for(int v2 = 0; v2 < columnas; v2++){		//Cambia la posicion de las columnas
			
			//Funcion de aleatoriedad
			srand(time(NULL));						//Semilla de aleatoriedad respecto al tiempo	
			matriz[v1][v2] = 0 + rand() % (9);		//Crea un numero aleatorio entre 0 al 9
			Sleep(1000);							//Detiene la ejecucion 1000 unidades 
			
		}
	}

	//Mostrar en pantalla
	cout << "La matriz generada es: \n";
		
	//Mostrar todos los valores de la matriz
	for(int v1 = 0; v1 < filas; v1++){				//Cambia la posicion de las filas
		for(int v2 = 0; v2 < columnas; v2++){		//Cambia la posicion de las columnas
			
			//Mostrar en pantalla
			cout << " [" << matriz[v1][v2] << "]";
			
		}
		
		cout << endl;		//Cambiar de renglon
	}
	
	//Mostrar en pantalla
	cout << "La diagonal principal de la matriz es: ";

	for(int n = 0; n < filas; n++){
		
		//Mostrar en pantalla
			cout << " [" << matriz[n][n] << "]";
	}
	
	
//Fin del programa
 return 1;
}
