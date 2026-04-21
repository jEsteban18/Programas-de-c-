#include <iostream>
using namespace std;
/*crear un cajero donde 
1 consulte el saldo
2 retirar(validar saldo )
3 consignar
4 salir*/
int main() {
	int x = 10000, opc, n, cons = 0 ,cons1, y  ;

	cout << "......CAJERO....\n";

do {
	cout << "cajero:\n 1. consultar saldo\n 2. Retirar saldo\n 3. consignar\n 4. salir\n ";
	cin >> opc;
	switch (opc){
		
	case 1: 
		cout << "Escogiste consultar saldo\n ";
		cout << "tu saldo es:\n ";
		cout << x << "\n"; 
		break;
	case 2: 
		cout << "Escogiste retirar saldo\n ";
		cout << "cuanto deseas retirar:\n ";
		cin >> y;
		if (y > x ){
			cout << "saldo insuficiente\n";
		}
		else {
			x = x - y;
		}
		cout <<  "tu saldo es:\n ";
		cout << x << "\n"; 
		break;
	case 3: 
		cout << "Escogiste consignar saldo\n ";
		cout << "cuanto deseas consignar \n";
		cin >> cons;
		x = cons + x ;
		cout << "tu saldo es: \n";
		cout << x; 
		break;
	}
} while ( opc != 4 );
	

	return 0;
}
