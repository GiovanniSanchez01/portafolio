#include <iostream>
#include <bitset>
using namespace std;

int main(){
	int x=5;
	
	cout <<x<<":" <<"\t" <<bitset<8>(x) << endl;
	cout << "3:" << "\t" <<bitset<8>(3) <<endl;
	cout << x <<" AND 3 ( & ) = \n";
	
	x &=3;
	cout << x << "\t" <<bitset<8>(x) <<endl;
	
	x=5;
	cout <<x<< " OR 3 ( | ) = \n";
	
	x|=3;
	cout <<x<< "\t" << bitset<8>(x) << endl;
	
	x=5;
	cout << x << " XOR 3 (^)=\n";
	x^=3;
	cout <<x<< "\t" <<bitset<8>(x) <<endl;
	
	cout << "...................\n";
	
	x=13;
	cout <<x<<":" << "\t" <<bitset<8>(x)<<endl;
	cout <<x<<" >> 3 =\n";
	x>>=3;
	cout << x<< "\t" <<bitset<8>(x)<<endl;
	
	return 0;
	
}
