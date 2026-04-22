#include <iostream>
#include <time.h>
using namespace std;
/* pedir al usuario un numero mayor y un numero menor 
crear un aleatorio, y adivinar el numero, decirlo al usuario lo logro en tantas oportunidades*/

int main(int argc, char *argv[]) {
	srand(time(NULL));
	int num1, num2, organizador, ale, adivina, contador = 1;
	cout << "Digite dos numeros\n";
	cin >> num1;
	cin >> num2;
	if (num1 > num2){
			organizador = num2; 
			num2  = num1;
			num1 = organizador;
	
		} 
	ale = rand()% (num2 - num1+1 )+ num1;
	cout << "Adivina el número ";
	
	do {
		
		cin >> adivina;
		if (adivina > ale){
		
			cout << "El número es menor \n";
			contador ++;
		}
		if (adivina < ale ){
			cout << "El número es mayor\n ";
			contador ++;
		}
	
	}
	while (adivina != ale);
	cout << "Felicidades el numero es:" << ale << "\n";
	cout << "Lo lograste en " << contador <<" intentos";
	
	return 0;

}
