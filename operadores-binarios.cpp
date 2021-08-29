#include <iostream>
#include <bitset>
using namespace std;

int main(){
	int x =5;
	int y =3;
	
	cout << "\tDecimal" << "\t :\t Binario" << endl;
	cout << "\t" << x << " \t :\t" << bitset<8>(x) << endl;
	cout << "\t" << y << " \t :\t" <<bitset<8>(y) <<endl;
	
	//AND binario x & =y seria igual a decir x=x&y 
	int z=x&y;
	cout << "x & y \t" << z  << " \t : \t" << bitset<8>(z) <<endl;
	
	//OR binario x |= y seria igual a decir x=x|y
	z=x|y;
	cout << "x|y \t" <<z<< " \t : \t" <<bitset<8>(z) <<endl;
	
	//XOR binario x^=y seria igual a decir x=x^y
	z=x^y;
	cout << "x ^ y \t" << z << " \t : \t" <<bitset<8>(z) <<endl;
	
	//desplazamiento binario x<<=y seria igual a decir x=x<<y
	z=x<<y;
	cout << "x << y \t" <<z<<" \t : \t" <<bitset<8>(z) <<endl;
	
	//desplazamiento binario x>>=y seria igual a decir x=x>>y
	z=x>>y;
	cout <<"x >> y \t" <<z<<" \t : \t" <<bitset<8>(z)<<endl;
	
	return 0;
}
