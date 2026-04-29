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
	cout << "...GENERANDO NUMEROS...\n ¿LOGRARAS ADIVINARLOS?";
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
	
	
	
	bool verificar = false;
	bool bucle = false;
	int cajas[espacios];
	cout << "\nDigite 4 numeros:\n";
	int into = 0;
	while (!bucle){//se crea un bucle infinito para jugar con el usuario los numeros digitados por el usuario
		 
		int picas = 0;//contadores en cero para cada que vez que juega se reinicien 
		int fijas = 0;
		int i = 0;
			
			
			
			for ( i ; i < espacios; i++){//bucle para guardar los numeros que digita el usuario
				
				cin >> cajas[i];
				for (int o = 0; o < i ; o++){//se comparan con los numeros generados aleatoriamente
					if (cajas[i] == cajas[o] ){
					verificar = true;
					cout << "No puedes repertir numeros. \nIngresalos nuevamente : \n";
					for (int b = 0; b < 4; b++){
						cajas [b] = 0;
					}
					break;
					}
					if(verificar){
					o--;
				
					}
					bandera = false;
				}
			}
			
	//se comparan los numeros en la misma posicion si son iguales se suman al contador 
		for (int k = 0; k < espacios; k++ ){
			if (arreglo[k] == cajas[k]){
			fijas++;
			picas--;
			}
			// se comparan los numeros de la posicion k con cada numero en la posicon j
			for(int j = 0; j < espacios; j++){
				if (arreglo[k] == cajas[j]){
				picas++;
				}
			}
		}
		cout << "TIENES" <<picas<<" PICAS\n";
		cout << "TIENES" <<fijas<<" FIJAS\n";
		if (fijas ==  4){
			bucle = true;
		}
		into++;
	}
	cout << ".....FELICITACIONES LOGRASTE EN "<<into<< "INTENTOS\n....."; 
	return 0;
}
