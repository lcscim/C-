#include<iostream>
#include<cmath>
using namespace std;
const double PI = 3.14159265358979;
int main() {
	double angle;
	cout<<"pleas enter an angle:";
	cin>>angle;
	double radian = angle*PI/180;//将角度值转为弧度值 
	cout<<"sin("<<angle<<")"<<sin(radian)<<endl;
	cout<<"cos("<<angle<<")"<<cos(radian)<<endl;
	cout<<"tan("<<angle<<")"<<tan(radian)<<endl;
	return 0;
}

