#include <iostream>
#include <time.h>
using namespace std;

int main() {
	int cantidad,dado, veces;
	int contador = 0;
	cout << "Deseas jugar con numero bajos o altos?\n";
	cout << "1 Bajo(1,2,3)\n";
	cout << "2 altos(4,5,6)\n";
	cin >> cantidad;
	cout << "cuantas veces deseas jugar\n";
	cin >> veces;
	cout <<"....EMPEZANDO....\n";
	
	srand(time(NULL));
	if (cantidad == 1 ){
		cout << "ESCOGISTE JUGAR CON NUMEROS BAJOS CON "<< veces << " LANZAMIENTOS\n ";
		cout << "Generando dados...\n";
		
	for (int x = 0;x < veces; x++){
		dado = rand()%(6  + 1);
		cout << dado << "\n";
		if ((dado == 1 or dado == 2 or dado == 3) ){
			
			contador++;
		}
	}
	if (contador > veces / 2) {
		cout << ".....Ganaste, super....\n";
	} else if (contador == veces / 2) {
		cout << "......Empate.....\n";
	} else {
		cout << "....Perdiste jaja ....\n";
	}
	
	
	}
	else {
		cout <<"ESCOGISTE JUGAR CON NUMEROS ALTOS CON " << veces << " LANZAMIENTOS\n ";
		cout << "Generando dados...\n";
		for (int x = 0;x < veces; x++){
			dado = rand()%6  + 1;
			cout << dado << "\n";
			if ((dado == 4 or dado == 5 or dado == 6) ){
				
				contador++;
	}
		
	}
		if (contador > veces / 2) {
			cout << "...Ganaste super.... \n";
		} else if (contador == veces / 2) {
			cout << "....Empate.\n..";
		} else {
			cout << "...Perdiste jajaj....\n";
	}
	}
	return 0;
}
