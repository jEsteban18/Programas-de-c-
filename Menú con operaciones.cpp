#include <iostream>
using namespace std;
/* programa para crear un menu 
crear un menu con 4 case 
case 1 sumar dos variables 
case 2 restar dos variable
case 3 multiplar 
case 4 dividir 
Pedirle al usuario dos numeros */

int main() {
	int num1, num2, nums, opc ;
	cout <<"MENU\n Que desea hacer\n 1: sumar\n 2: restar\n 3: multiplicar\n 4: dividir\n   ";
	cin >> opc;
	switch (opc){
	case 1: cout << "ingrese los dos numero que desea sumar\n ";
			cin >>num1;
			cin >>num2;
			nums = num1 + num2;
			cout << "la suma es "<<nums;
			
		break;
	case 2: cout << "ingrese los dos numero que desea restar\n ";
			cin >>num1;
			cin >>num2;
			nums = num1 + num2;
			cout << nums;
	case 3: cout << "ingrese los dos numero que desea multiplicar\n ";
		cin >>num1;
		cin >>num2;
		nums = num1 * num2;
		cout << nums;
	case 4: 
		cout << "Ingrese los dos numero que desea dividir\n ";
		cin >>num1;
		cin >>num2;
		if (num2 == 0){
			cout << "Error, no se puede dividir por cero";
		}
		else{ nums = num1 / num2;
	
		cout << nums;
		}
		break;
	default: cout <<"opcion no valida";
		break;
	}
	
	return 0;
}
