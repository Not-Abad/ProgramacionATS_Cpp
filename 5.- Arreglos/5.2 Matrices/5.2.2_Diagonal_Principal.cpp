/*5.2.2 Matrices
	Programa que almacene una matriz de 3X3 
	y que muestre la diagonal principal de esta */

//Librerias
 #include <iostream>

//Le indico al programa usar la salida standar de datos 
 using namespace std;

//Inicio del programa
 int main(){

	//Declarar variables locales
	int matriz[2][2];		//Matriz de valores
	
	//Mostrar al usuario
	cout << "\tMatriz de 3X3 \n"; 
	cout << "Programa que muestra la diagonal principal ";
	cout << "\n\tde una matriz\n";
	
	//Ingresar todos los valores de la matriz
	for(int v1 = 0; v1 < 3; v1++){			//Cambia la posicion de las filas
		for(int v2 = 0; v2 < 3; v2++){		//Cambia la posicion de las columnas
			
			//Pedir al usuario
			cout << "Digite el valor [" << v1+1 << "][" << v2+1 << "]: ";cin >> matriz[v1][v2];
			
		}
	}

	//Mostrar en pantalla
	cout << "La matriz digitada es: \n";
		
	//Mostrar todos los valores de la matriz
	for(int v1 = 0; v1 < 3; v1++){			//Cambia la posicion de las filas
		for(int v2 = 0; v2 < 3; v2++){		//Cambia la posicion de las columnas
			
			//Mostrar en pantalla
			cout << " [" << matriz[v1][v2] << "]";
			
		}
		
		cout << endl;		//Cambiar de renglon
	}
	
	//Mostrar en pantalla
	cout << "La diagonal principal de la matriz es: ";

	for(int n = 0; n < 3; n++){
		
		//Mostrar en pantalla
			cout << " [" << matriz[n][n] << "]";
	}
	
	
//Fin del programa
 return 1;
}
