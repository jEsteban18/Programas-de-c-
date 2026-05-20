//valor por referencia y los cambios en la funcion son los cambios originanl

#include <iostream>
using namespace std;
#define tam 3 
// declaracion de funcion
void llenar(int []);
void mostrar(int []);
int main() {
	int arreglo[tam];
	//llamado de funcio
	llenar(arreglo);
	mostrar(arreglo);
	return 0;
}
//declaracion de funcion
void llenar(int a[]){
	for(int x = 0;x < tam; x++){
		a[x]=x+1;
	}	
}
void mostrar(int a[]){
	for(int x = 0;x < tam; x++){
		cout << a[x]<<" ";
	}
}
