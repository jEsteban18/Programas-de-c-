#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int cantidad, cantidad1, acumulador = 0, acopares = 0, acoimpares = 0, contadorpar = 0, contadorimpar = 0;
	
	cout << "Digite una cantidad\n";
	cin >> cantidad;
	
	cout << "Digite " <<cantidad<<" numeros: \n";
	for (int x = 0; x < cantidad; x++) {
		cin >> cantidad1;
		acumulador = acumulador + cantidad1;
		
		if (cantidad1 % 2 == 0) {
			acopares = acopares + cantidad1;
			contadorpar++;
		} else {
			acoimpares = acoimpares + cantidad1;
			contadorimpar++;
		}
	
	}
	
	cout << acumulador<< "\n";
	cout << "Tienes " << contadorpar << " pares y su suma es " << acopares << "\n";
	cout << "Tienes " << contadorimpar << " la suma de los impares son " << acoimpares << "\n";
	
	return 0;
}
