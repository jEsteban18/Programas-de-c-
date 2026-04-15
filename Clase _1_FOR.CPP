#include <iostream>
using namespace std;
/* Pide al usuario si quiere par o impar, luego la 
cantidad de esos numeros y trabajar con ellos*/
int main(int argc, char *argv[]) {
	int paridad, cantidad, dato;
	cout << "digite 0 pares, 1 para impares\n";
	cin >> paridad;
	cout<< " digite cantidad de datos: \n";
	cin >> cantidad;
	
	for (int x = 0; x < cantidad; x++){
		cout<< "digite dato " << x +1 << " : ";
		cin >> dato;
		if (dato%2 != paridad){
			cout << "no es un dato valido";
			x--;
		}
	}
	return 0;
}

