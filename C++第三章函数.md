#8.21

##1.导学
- 程序功能模块实现为一个函数
- 函数的定义与调用
- 内联函数
- constexpr函数常量表达式函数
- 带默认参数值的函数
- 函数重载
- C++系统函数

##2.函数的定义
- 函数：定义好的功能模块
- 定义函数：将一个模块的算法用C++描述出来
- 函数名：函数模块的名字
- 函数的参数：计算所需要的数据和条件
- 函数的返回值：需要返回的计算结果

函数定义的语法形式：

	类型标识符 函数名（形式参数表）	
	# 形参格式：<type1>name1,<type2>name2,<type3>name3
	# 如：int a,double b
	{
		语句序列
		#最后一句写返回值。类型标识符表示返回值类型，由return语句给出返回值，若无返回值。类型标识符写void，不必写return语句
	}
函数的调用：
- 函数调用前先声明
- 函数调用形式：函数名（实参列表） 
- 嵌套调用：在一个函数的函数体中，调用另一函数
- 递归调用：函数直接或间接调用自身

		#include<iostream>
		using namespace std;
		
		double power(double x,int n){
			double	val = 1.0;
			while (n--)
				val *= x;
			return val;
		}
		int main(){
			double pow;
			pow = power(5,2);
			cout<<"power结果为"<<pow<<endl;
			return 0;
		}
- 计算X的n次方

		#include<iostream>
		using namespace std;
		#先声明
		double power(double x,int n);	//计算x的n次方 
		
		int main(){
			int value = 0;
			cout<<"Enter an 8 bit binary number";
			for(int i = 7;i>=0;i--){
				char ch;
				cin>>ch;
				if(ch=='1')
					# static_cast<int>（）显式转换
					value += static_cast<int>(power(2,1));
			}
			cout<<"Decimal value is"<<value<<endl;
			return 0;
		}
		double power(double x,int n){
			double val = 1.0;
			while (n--)
				val *= x;
			return val;
		} 

- 计算圆周率

		#include<iostream>
		using namespace std;
		
		double arctan(double x){
			double sqr = x*x;
			double e = x;
			double r = 0;
			int i = 1;
			while (e/i>1e-15){
				double f = e/i;
				r = (i%4==1)?r+f:r-f;
				e = e*sqr;
				i+=2;
			}
			return r;
		}
		int main(){
			double a = 16.0*arctan(1/5.0);
			double b = 4.0*arctan(1/239.0);
			cout<<"PI = "<<a-b<<endl;
			return 0;
		}
- 找回文数 如1331.

	寻找11到999之间的数m，满足m，m^2,m^3均为回文数

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
		