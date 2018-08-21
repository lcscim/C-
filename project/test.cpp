#include<iostream>
using namespace std;

bool symm(unsigned n){
	unsigned i = n;
	unsigned m = 0;
	while(i>0){
		m = m*10+i%10;
		i/=10;
	}
	return m==n;
}
int main(){
	cout<<"符合条件的数有：";
	for(unsigned a = 11;a<=999;a++)
		if(symm(a)&&symm(a*a)&&symm(a*a*a)){
			cout<<a<<",";
		}
	return 0;
	
}

