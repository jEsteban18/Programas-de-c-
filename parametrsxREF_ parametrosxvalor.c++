#include <iostream>
using namespace std;
// & <- es una direccion de memoria

void pref(int &);
void pvalor(int);
int main(int argc, char *argv[]) {
	int  x = 5, y =10 ;
	cout << endl << "valores originales ";
	cout << endl << "x: " << x << ", y: " << y ;
	
	pref(x);
	pvalor(y);
	cout << endl<< "valores desde main()";
	cout << endl << "x: " << x<< ", y: " <<y;
	
	
	
	
	
	
	return 0;
}
void pref(int &a){
	a+=10;
	cout <<endl<<"a desde pref():  "<<a;
}
void pvalor(int b){
	b*=2; 
		cout <<endl<<"b desde pvalor{}():  "<<b;
}
