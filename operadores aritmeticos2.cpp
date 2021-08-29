#include <iostream>
using namespace std;

int main(){
	
	double x;
	double y;
	
	cout << " *** calcula operaciones aritmeticas de dos numeros *** \n";
	
	cout << "inserte un numero: ";
	cin >> x;
	
	cout << "inserte un numero: ";
	cin >> y;
	
	cout << "suma: " <<x+y<< endl;
	cout << "resta: " <<x-y<< endl;
	cout << "multiplicacion: "<<x*y<< endl;
	cout << "division: " <<x/y<< endl;
	
	int z=x;
	int w=y;
	
	cout << "residuo de division es: " <<z%w <<endl;
	
	++x;
	++y;
	cout <<"el incremento en uno de X y Y es: "<<endl;
	cout << "x: " << x << " y: "<< y <<endl;
	
	x--;
	y--;
	cout <<"el decremento en uno de X y Y es: " << "x: " << x << " y: "<< y <<endl;
	
}
