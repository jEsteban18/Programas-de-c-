#include <iostream>
using namespace std;
/*recrear el tema de los pares y de los impares cuando dijite pares do while
para impares en while*/
int main() {
	int numpar,numinpar = 1;
	 
	do{
		cout << "ingrese un numero par\n";
		cin >> numpar;
	}
	while (numpar %2 == 0);
	
	while (numinpar %2 ==  1 ){
		cout << "ingrese un numero impar\n";
		cin >> numinpar;
	}
	
	return 0;
}

