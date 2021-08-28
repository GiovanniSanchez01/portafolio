#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int a, b, c;
	double area, semiper;
//cout<<"SG100617\n";	
cout<<"***************CALCULADOR DE AREA DE TRIANGULOS EQUILATEROS, ISOSCELES Y ESCALENOS***************\n";
cout<<endl;	
cout<<"Ingrese el lado A del triangulo a evaluar: \n";
cin>>a;
cout<<"Ingrese el lado B del triangulo a evaluar: \n";
cin>>b;
cout<<"Ingrese la base del triangulo a evaluar: \n";
cin>>c;

if (a== b && b == c){
	cout<<"El triangulo es Equilatero\n";
	area = (sqrt(3)/4)*pow(a,2);
	cout << "Su area es: " << area << " centimetros cuadrados " << endl;
	}
	else if(a == b && a != c && b !=c ){
		cout<<"El triangulo es Isosceles\n";
		area = ((b)*(sqrt(pow(a,2)-(pow(b,2)/4))))/2;
		cout << "Su area es: " << area << " centimetros cuadrados " << endl;
	}
	
	else if( a != b && a != c && c != b){
		cout<<"El triangulo es Escaleno\n";
		semiper = (a+b+c)/2;	
		area = sqrt(semiper*((semiper-a)*(semiper-b)*(semiper-c)));
		cout << "Su area es: " << area << " centimetros cuadrados " << endl;	
		}
	else{
	}

return 0;
}

