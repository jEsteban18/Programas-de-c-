/* arreglos bidimensionales u matrizes 
estrutura de una matriz 
tipo}_de_dato nombre_de_la_variable[f][c]
el ciclo externo maneja las filas 
el ciclo interno maneja las columnas
*/


#include <iostream>
#define t1 2
#define t2 3
#include <time.h> 
using namespace std;
int v1, v2,ale,organizador,alepar;
int main(int argc, char *argv[]) {
	

	int matriz[t1][t2];
	for(int x = 0; x < t1;x++){
		for (int y = 0;y < t2; y++){
			cout << "digite el valor en la posicion "<<x << "-" <<y << " \n";
			cin >> v1;
			if (v1 %2 == 0){
				matriz [x][y] = v1;
			}else {
				cout<<"Digite solo numeros pares\n";
				y--;
			}
			
		}
	}
	
	for(int x = 0; x < t1;x++){
		for (int y = 0;y < t2; y++){
			
			cout << matriz[x][y]<< "\t";
		}
		cout << endl;
	}
	
	return 0;
}

