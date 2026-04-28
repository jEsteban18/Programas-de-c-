/*
si tienen dos valoteras 1 con numeros 1 al 45
y otras 1 al 16 
escoger 5 numeros para jugar 
se puede mirar la revancha para a ver si funciona 
y jugar con otros numeros.



*/
#include <iostream>
#include <time.h>
#define team 5
using namespace std;

bool bandera = false; 

int main(){
	srand(time(NULL));
	int arreglo [team];
int ale = 0, ale2 =0 ;
arreglo [0] = rand()%(45) + 1;


	for (int x = 1; x < team; x++){
		ale2 = rand()%(45) + 1;
		for (int y = 0; y < x;y++){	
		if (arreglo[y]== ale ){
			bandera = true; 
			break;
		}
			if (bandera ){
			x--;
			
		}
			else{
				arreglo[x] = ale;
			}
			bandera = false ;
	}
	}
	
	cout << arreglo[0]<<" ";	
	cout << arreglo[1];
	cout << arreglo[2]<<" ";	
	cout << arreglo[3];
	cout << arreglo[4]<<" ";	
	
	
	
	
	
	
	

	return 0;
}
