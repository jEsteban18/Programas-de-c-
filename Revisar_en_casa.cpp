/* HACER UN MENU OPCION 1 GUAR DATOS LLENAR ARREGLOS 
OPCION 2 MOSTRAR 
OPCION 3 SALIR 
SOLO SE PUEDE MOSTRAR DATOS SI SE HAN LENADOS */
#include <iostream>
#include <time.h>

using namespace std;
#define team 3
int main() {
	int opc, num = 0;
	int arreglo [team];
	bool bandera = false;	
	
	do {
		cout << "1 digitar numeros\n 2: mostrar numeros\n 3: salir \n ";
		cin >> opc;
		switch (opc){
			
		case 1: 
			cout << "digita 3 numeros\n ";
			for (int x =0;x < team;x++){
			
			cin >> num;
			arreglo[x] = num;
		}
		bandera = true;
			cout << "...guardando...\n";
		break;
		case 2: 
				
			if (bandera == false){
				cout << "digite los numeros\n";
			}
			else {
			 for (int x =0;x<3;x++){	
				cout << arreglo[x]<< "\n";
			}
			}
		
		break;
			
	case 3 : cout << "saliendo ";
	break;
		default: cout << "opcion no valida\n";

	}
		
	}
	while (opc !=3);
return 0;
}
