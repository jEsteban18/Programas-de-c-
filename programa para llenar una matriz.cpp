/*hacer un  menu 1 para ingresar 2 para mostrar 3  para salir
no podemos mostrar sin primero ingresar
*/
#include <iostream>
using namespace std;
#define filas 3
#define columnas 3
int main() {
	bool bandera = false; 
	int opc ; 
	int matriz[filas][columnas];
	do {
		system("cls");
		cout << "=====MENU=======\n 1: ingresar datos\n 2: mostrar\n 3: salir\n";
		cin >> opc; 
	switch (opc){
	case 1: 
		for (int x = 0; x < 3; x++){
			for (int y = 0; y < 3; y++){
				cout << "ingrese los numeros";
				cin >> matriz [x][y]; 
				bandera = true;
			}
		}
		break;
	case 2:
			if (bandera == true){
				for (int x = 0; x<3; x++){
					cout<<endl;
					for (int y = 0; y < 3; y++){
						cout << matriz[x][y]<<"\t";
						bandera = true;
					}	
				}
			}
			else {
				cout << "digita numeros primeros\n";
				
			}
			break;	
		
	case 3: cout << "saliendo\n";
		
	}
	system("pause");
	}while (opc !=3);
	return 0;
}
