#include <iostream>
using namespace std;
/* pedir al usuario un numeoro 
decirle si es par o impar, si es par calcular el cuadrado, si es impar 
calcular el cubo*/

int main() {
	int num1 = 0, num2 = 0, num3;
	cout << "programa para calcular el cuadro y cubo de un numero ";
	cout << "ingrese un numero\n";
	cin >> num1;
	if (num1 %2 ==0){
		num2 = num1 * 2;
		cout << "el numero " << num1 << " es par y su cuadrado es: " << num2;
	}
	else{
		num3 = num1 *3;
		cout << "el numero " << num1 << " es impar y su cubo es: " << num3;
	}
	return 0;
}
