/*decir 4 numeros difeey el profe dice cuantas
 picas y cuantas filas hay
en un ciclo infinito
validar que sean numeros diferentes*/

#include <iostream>
#include <time.h>
using namespace std;

int main() {
#define team 4
#define espacios  4
	int ale = 0;
	// genero la semilla para el aleatorio
	srand(time(NULL));
	// genero un numero aleatoreo del 1 al 9
	int arreglo[team];
	 arreglo[0] = rand()%(9)+1;
	// bandera iniciada en false 
	bool bandera = false; 
	//se crea un bucle para poder verificar que no esten numeros repetidos
	for (int x = 1; x < team; x++ ){
		ale = rand()%(9)+1;
			for (int y = 0; y < x; y++ ){
				if (arreglo [y] == ale){
					bandera = true;
				break;
				}
			}
			if (bandera){
				x--;
			}
			else {
				arreglo [x] = ale;
	
			}
			bandera = false; // se generaron 4 numeros aleatoris diferentes 
	}
	for (int h = 0;h< 4; h++){
		cout<< arreglo[h];
	}
	//se crea un bucle infinito para guardar los numeros digitados por el usuario
	// y luego se comparan con el arreglo 
	int picas = 0;
	int fijas = 0;
	bool verificar = false;
	int cajas[espacios];
	
		for (int i = 0; i < espacios; i++){
			cin >> cajas[i];
			for (int o = 0; o < i ; o++){
				if (cajas[i]== cajas[0] ){
					verificar = true;
					cout << "hay numeros repetidos";
					break;
				}
				if(verificar){
					o--;
				}
				else {
					break;
				}
				bandera = false;
			}
		}
	for (int k = 0; k < espacios; k++ ){
			if (arreglo[k] == cajas[k]){
				fijas++;
			}
			for(int j = 0; j < espacios; j++){
			if (arreglo[k] == cajas[j]){
				fijas = 4;
				picas++;
				fijas--;
			}
			}
		}
	cout << "picas"<<picas;
	cout << "fijas"<<fijas;
	
		
	
	return 0;
}
