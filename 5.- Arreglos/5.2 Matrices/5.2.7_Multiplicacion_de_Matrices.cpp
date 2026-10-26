/*5.2.7 Matrices
	Programa que multiplique 2 matrices
	de 3X3 y guarde el resultado */

//Librerias
 #include <iostream>

//Le indico al programa usar la salida standar de datos 
 using namespace std;

//Inicio del programa
 int main(){

	//Declarar variables locales
	int matriz[3][3][3];	
	
	//Mostrar al usuario
	cout << "\t   Matriz de 3X3 \n"; 
	cout << "Programa que multiplique 2 matrices entre si\n";
	
	//Ingresar todos los valores de ambas matrices
	for(int m = 0; m <= 1; m++){				//Cambia la posicion de la matriz
		printf("\nValores de la matriz %c:\n",65+m);	
		for(int v1 = 0; v1 <= 2; v1++){			//Cambia la posicion de las filas
			for(int v2 = 0; v2 <= 2; v2++){		//Cambia la posicion de las columnas
			
				//Pedir al usuario
				cout << "Digite el valor [" << v1+1 << "][" << v2+1 << "]: ";cin >> matriz[v1][v2][m];
			
			}
		}
	}
	
	//Mostrar en pantalla
	cout << "\nLa matriz A es: \t";
	cout << "La matriz B es: \t";
	cout << "La matriz A*B es: \n";
		
	//Mostrar todos las 2 matrices
	for(int v1 = 0; v1 <= 2; v1++){			//Cambia la posicion de las filas
	
		//Muestra los valores de la matriz A
		for(int v2 = 0; v2 <= 2; v2++){		//Cambia la posicion de las columnas
			
			//Mostrar en pantalla
			cout << " [" << matriz[v1][v2][0] << "]";
			
		}
		
		//Mostrar tabulaciones
		cout << "\t\t";						//Separa las matrices entre si
		
		//Muestra los valores de la matriz B
		for(int v2 = 0; v2 <= 2; v2++){		//Cambia la posicion de las columnas
			
			//Mostrar en pantalla 
			cout << " [" << matriz[v1][v2][1] << "]";
			
		}
		
		//Mostrar tabulaciones
		cout << "\t\t";						//Separa las matrices entre si
		
		//Muestra los valores de la matriz A*B
		for(int v2 = 0; v2 <= 2; v2++){		//Cambia la posicion de las columnas
			for(int p = 0; p <= 2; p++){	//Cambia filas y columnas en la operacion
				
				//Matriz C(v1,v2) = Matriz C(v1,v2) + (matriz A(v1,x) * matriz B(x,v2)) 
				matriz[v1][v2][2] += (matriz[v1][p][0] * matriz[p][v2][1]);
			}
			
			//Mostrar en pantalla 
			cout << " [" << matriz[v1][v2][2] << "]";
			
		}
		
		//Mostrar cambio de renglon
		cout << endl;						//Separa las filas entre si
	}	
	
	
//Fin del programa
 return 1;
}
