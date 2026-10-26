/*5.2.1 Matrices
	Programa que almacene una matriz de n terminos (maximo 100)
	en las filas y columnas, posteriormente mostrarla */

//Librerias
 #include <iostream>

//Le indico al programa usar la salida standar de datos 
 using namespace std;

//Inicio del programa
 int main(){

	//Declarar variables locales
	int matriz[100][100];		//Matriz de valores
	int filas, columnas;
	
	//Pedir al usuario
	cout << "Escribe el numero de filas: "; 	cin >> filas;
	cout << "Escribe el numero de columnas: ";	cin >> columnas;
	
	//Ingresar todos los valores de la matriz
	for(int n1 = 0; n1 < filas; n1++){			//Cambia la posicion de las filas
		for(int n2 = 0; n2 < columnas; n2++){	//Cambia la posicion de las columnas
			
			//Pedir al usuario
			cout << "Digite el valor [" << n1 << "][" << n2 << "]: ";cin >> matriz[n1][n2];
			
		}
	}

	//Mostrar todos los valores de la matriz
	for(int n1 = 0; n1 < filas; n1++){			//Cambia la posicion de las filas
		for(int n2 = 0; n2 < columnas; n2++){	//Cambia la posicion de las columnas
			
			//Mostrar en pantalla
			cout << " [" << matriz[n1][n2] << "]";
			
		}
		
		cout << endl;		//Cambiar de renglon
	}
	
//Fin del programa
 return 1;
}

