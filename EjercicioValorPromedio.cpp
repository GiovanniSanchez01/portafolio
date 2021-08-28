#include <iostream>
using namespace std;

int main(){
    int num=1, cont=0;
    float suma=0;
     
//cout<<"SG100617\n";
cout<<"***************CALCULADOR DEL PROMEDIO DE UNA SERIE DE NUMEROS***************\n";
cout<<"********************PARA SALIR DE LA APLICACION PULSE 0********************\n";
cout<<endl;

    while (num!=0){
	cout<<"Introduzca un numero: "<<endl;
	cin>>num;
	suma=suma+num;  //aqui se hace la suma de los numeros

	if(num!=0){
	cont=cont+1;  //aqui se cuenta la cantidad de numeros ingresados para luego dividirlos
	}
}
	cout<<"La suma de numeros ingresados es: "<<suma<<endl;
	cout<<"La cantidad de numeros ingresados es: "<<cont<<endl;
	cout<<"El promedio de todos los numeros ingresados es: "<<suma/cont<<endl;
return 0;
}
