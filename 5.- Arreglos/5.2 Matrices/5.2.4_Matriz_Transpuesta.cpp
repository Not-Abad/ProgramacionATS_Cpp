/*5.2.4 Matrices
	Programa que almacene una matriz de 3X3 
	y que muestre cree su matriz traspuesta */

//Librerias
 #include <iostream>

//Le indico al programa usar la salida standar de datos 
 using namespace std;

//Inicio del programa
 int main(){

	//Declarar variables locales
	int matriz_A[2][2];		//Matriz de valores Orignal
	int matriz_B[2][2];		//Matriz de valores Transpuestos
	
	//Mostrar al usuario
	cout << "\tMatriz de 3X3 \n"; 
	cout << "Programa que crea la matriz transpuesta ";
	cout << "\n\tde otra matriz\n";
	
	//Ingresar todos los valores de la matriz
	for(int v1 = 0; v1 < 3; v1++){			//Cambia la posicion de las filas
		for(int v2 = 0; v2 < 3; v2++){		//Cambia la posicion de las columnas
			
			//Pedir al usuario
			cout << "Digite el valor [" << v1+1 << "][" << v2+1 << "]: ";cin >> matriz_A[v1][v2];
			
		}
	}

	//Mostrar en pantalla
	cout << "\nLa matriz digitada es: \t";
	cout << "La matriz transpuesta es: \n";
		
	//Mostrar todos los valores de la matriz
	for(int v1 = 0; v1 < 3; v1++){			//Cambia la posicion de las filas
	
		//Muestra los valores de la matriz Original
		for(int v2 = 0; v2 < 3; v2++){		//Cambia la posicion de las columnas
			
			//Mostrar en pantalla
			cout << " [" << matriz_A[v1][v2] << "]";
			
		}
		
		//Mostrar tabulaciones
		cout << "\t\t   ";						//Separa las matrices entre si
		
		//Muestra los valores de la matriz Transpuesta
		for(int v2 = 0; v2 < 3; v2++){		//Cambia la posicion de las columnas
			
			//Genera la matriz traspuesta
			matriz_B[v1][v2] = matriz_A[v2][v1];
			
			//Mostrar en pantalla la matriz transpuesta
			cout << " [" << matriz_B[v1][v2] << "]";
			
		}
		
		//Mostrar cambio de renglon
		cout << endl;						//Separa las filas entre si
	}	
	
//Fin del programa
 return 1;
}
