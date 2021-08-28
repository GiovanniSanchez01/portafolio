#include <iostream>
#include <limits>

using namespace std;

int main () 
{
	
	int imin=numeric_limits<int>::min();
	int imax=numeric_limits<int>::max();
	
	cout<<"imin = " <<imin<<endl; 
	cout<<"imax = " <<imax<<endl;
	cout<<"tamanio de int: "<< sizeof(int) << endl;
	
	float fmin=numeric_limits<float>::min();
	float fmax=numeric_limits<float>::max();
	
	cout<<"fmin = " <<fmin<<endl; 
	cout<<"fmax = " <<fmax<<endl;
	cout<<"tamanio de float: "<< sizeof(float) <<endl;
		
    double dmin=numeric_limits<double>::min();
	double dmax=numeric_limits<double>::max();
	
	cout<<"dmin = " <<dmin<<endl; 
	cout<<"dmax = " <<dmax<<endl;
	cout<<"tamanio de double: "<< sizeof(double) <<endl;
    
    bool bmin=numeric_limits<bool>::min();
	bool bmax=numeric_limits<bool>::max();
	
	cout<<"bmin = " <<bmin<<endl; 
	cout<<"bmax = " <<bmax<<endl;
	cout<<"tamanio de bool: "<< sizeof(bool) <<endl;
	
	char cmin=numeric_limits<char>::min();
	char cmax=numeric_limits<char>::max();
	
	cout<<"cmin = " <<cmin<<endl; 
	cout<<"cmax = " <<cmax<<endl;
	cout<<"tamanio de char: "<< sizeof(char) <<endl;
	
	short int simin=numeric_limits<short int>::min();
	short int simax=numeric_limits<short int>::max();
	
	cout<<"simin = " <<simin<<endl; 
	cout<<"simax = " <<simax<<endl;
	cout<<"tamanio de short int: "<< sizeof(short int) <<endl;
	
	long int limin=numeric_limits<long int>::min();
	long int limax=numeric_limits<long int>::max();
	
	cout<<"limin = " <<limin<<endl; 
	cout<<"limax = " <<limax<<endl;
	cout<<"tamanio de long int: "<< sizeof(long int) <<endl;
    
    long double ldmin=numeric_limits<long double>::min();
	long double ldmax=numeric_limits<long double>::max();
	
	cout<<"ldmin = " <<ldmin<<endl; 
	cout<<"ldmax = " <<ldmax<<endl;
	cout<<"tamanio de long double: "<< sizeof(long double) <<endl;
    
    return 0;
}
