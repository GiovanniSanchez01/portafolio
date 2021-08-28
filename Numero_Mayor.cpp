#include <iostream>
using namespace std;

int main(){
	int a, b, c, d, f;
	
//cout<<"SG100617\n";
cout<<"***************CALCULADOR DEL NUMERO MAYOR DE UNA SERIE DE 5 NUMEROS***************\n";
cout<<endl;
cout<<"Ingrese el primer numero: \n";
cin>>a;

cout<<"Ingrese el segundo numero: \n";
cin>>b;

cout<<"Ingrese el tercer numero: \n";
cin>>c;

cout<<"Ingrese el cuarto numero: \n";
cin>>d;

cout<<"Ingrese el quinto numero: \n";
cin>>f;

if(a>b, a>c, a>d, a>f){
	cout << "El numero mayor es: "<< a <<endl;
}else if  (b>a, b>c, b>d, b>f){
	cout << "El numero mayor es: "<< b <<endl;
}else if(c>a, c>b, c>d, c>f){
	cout << "El numero mayor es: "<< c <<endl;
}else if (d>a, d>b, d>c, d>f){
	cout << "El numero mayor es: "<< d <<endl;
}else if(f>a, f>b, f>c, f>d){
	cout << "El numero mayor es: "<< f <<endl;
}else 

return 0;
}
