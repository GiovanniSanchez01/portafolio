#include <iostream>
using namespace std;

int main(){
	int x=5;
	int y=2;
	cout << x+y <<endl; //suma de valores
	cout << x-y <<endl; //resta de valores
	cout << x*y <<endl; //multiplicacion de valores
	
	x=12;
	y=3;
	cout << x/y <<endl; //division de valores
	
	x=5;
	y=2;
	cout << x%y <<endl; //devuelve el residuo de una division
	
	++x;
	cout <<x<< endl; //aumenta en uno la variable
	
	x=5;
	--x;
	cout <<x<< endl; //disminuye en uno la variable
	
	return 0;
}
