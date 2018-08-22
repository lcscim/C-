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
- 分段函数

		#include "pch.h"
		#include<iostream>
		#include<cmath>		//该头文件包含一系列与数学有关的函数
		using namespace std;
		
		const double TINY_VALUE = 1e-10;
		double tsin(double x) {
			double g = 0;
			double t = x;
			int n = 1;
			do
			{
				g += 1;
				n++;
				t = -t * x*x / (2 * n - 1) / (2 * n - 2);
			} while (fabs(t)>=TINY_VALUE);	//fabs是绝对值
			return g;
		}
		
		int main() {
			double k, r, s;
			cout << "r = ";
			cin >> r;
			cout << "s=";
			cin >> s;
			if (r*r <= s * s)
				k = sqrt(tsin(r)*tsin(r) + tsin(s)*tsin(s));
			else
				k = tsin(r*s) / 2;
			cout << k << endl;
			return 0;
		}	
##3.函数的嵌套调用
函数之间可以嵌套使用，如：

	#include "pch.h"
	#include<iostream>
	#include<cmath>
	using namespace std;
	
	int fun1(int x) {
		return x * x;
	}
	int fun2(int x, int y) {
		return fun1(x) + fun1(y);
	}
	
	int main() {
		int a, b;
		cout << "输入两个值，并求其平方和" << endl;
		cin >> a >> b;
		cout << "结果为" << fun2(a, b);
		return 0;
	}
##4.函数的递归调用
即函数直接或间接自己调用自己，称为递归调用：比如n的阶乘

	#include "pch.h"
	#include<iostream>
	using namespace std;
	
	unsigned fac(unsigned n) {
		unsigned f;
		if (n == 0) {
			f = 1;
		}
		else
		{
			f = fac(n - 1)*n;
		}
		return f;
	}
	
	int main() {
		int a;
		cout << "输入一个数并求其阶乘" << endl;
		cin >> a;
		cout << "结果为" << fac(a);
		return 0;
	}
- 从n个人中选取K个人组成委员会

		#include "pch.h"
		#include<iostream>
		using namespace std;
		
		int comm(int n, int k) {
			if (k > n) {
				return 0;
			}
			else if (n==k||k==0)
			{
				return 1;
			}
			else
			{
				return comm(n - 1, k) + comm(n - 1, k - 1);
			} 
		}
		
		int main() {
			int a,b;
			cout << "在a个人中找b个人有几种组合方法" << endl;
			cin >> a >> b;
			cout << "结果为" << comm(a, b);
			return 0;
		}
- 汉诺塔游戏，将n个盘子从a移动到c,并且只能大的压小的
		
		#include "pch.h"
		#include<iostream>
		using namespace std;
		void move(char src, char dest) {
			cout << src << "-->" << dest << endl;
		}
		void hanoi(int n, char src, char medium, char dest) {
			if (n == 1)
				move(src, dest);
			else {
				hanoi(n - 1, src, dest, medium);
				move(src, dest);
				hanoi(n - 1, medium, src, dest);
			}
		}
		
		int main() {
			int a;
			cout << "汉诺塔游戏，有几个盘子" << endl;
			cin >> a;
			hanoi(a, 'A', 'B', 'C');
			return 0;
		}
##5.函数的参数传递
- 在函数调用时才分配形参的存储单元
- 实参可以是常量，变量，或表达式
- 实参类型必须与形参相符
- 值传递是传递参数值，即单项传递
- 引用传递可以实现双向传递
- 常量引用参数可以保障实参数据的安全

##6.引用类型：
- 引用（&）是标识符的别名
- 定义一个引用时必须同时怼他进行初始化，是他实现一个已存在的对象

	如：
		int i,j; 
		int &ri = i;//定义int引用ri,并初始化为变量i的引用
		j = 10;
		ri = j;//相当于i=j
- 一旦一个引用被初始化后就不能改为指向其他对象
- 引用可以作为形参
		
		#include<iostream>
		using namespace std;
		
		void swap(int &a,int &b){
			int t=a;
			a=b;
			b=t;
		}
		
		int main() {
			int x = 5,y=10;
			cout<<"x="<<x<<"y="<<y<<endl;
			swap(x,y);
			cout<<"x="<<x<<"y="<<y<<endl;
			return 0;
}
##7.含有可变参数的函数
- 定义可变形参个数的参数表

	- 如果所有的实参类型相同，可以传递一个名为initializer_list的标准库类型
	- 如果实参的类型不同，可以编写可变参数的模板

- initializer_list

	initializer_list是一种标准库类型，用于表示某种特定类型的值的数组，该类型定义在同名的头文件中
	initializer_list提供的操作：
	- initializer_list<T> lst;默认初始化；T类型元素的空列表
	- initializer_list<T>lst{a,b,c...};lst的元素数量和初始值一样多；lst的元素对应初始值的副本；列表中的元素是const
	- lst2(lst);拷贝或者赋值一个initializer_list对象但不拷贝列表中的元素；拷贝后原始列表和副本共享元素
	- lst2 = lst；和上一个相同
	- lst.size();列表中的元素数量
	- lst.begin();返回指向lst首元素的指针
	- lst.end();返回指向lst尾元素下一位置的指针

- initializer_list是一个类模板
- 使用模板时，我们需要在模板名字后面跟一对尖括号，括号内是给出的类型参数

	initializer_list<string> ls;
	initializer_list<int> li;
- initializer_list比较特殊的一点，其对象中的元素永远是常量值我们无法改变initializer_list对象中元素的值
- 含有initializer_list形参的函数也可以同时拥有其他形参

##8.内联函数
可以使简短函数有效率的运行；
- 内联函数声明时使用关键字inline
- 内联函数内不能有循环语句和switch语句
- 内联函数的定义必须出现在内联函数第一次被调用之前
- 对内联函数不能进行异常接口声明

示例：

	#include<iostream>
	using namespace std;
	
	const double PI = 3.14159265358979;
	inline double calArea(double radius){
		return PI*radius*radius;
	}
	
	int main() {
		double r = 3.0;
		double area = calArea(r);
		cout<<area<<endl;
		return 0;
	}
##9.constexpr函数，常量表达式函数
用来初始化常量的函数
- 语法规定：constexpr修饰的函数，在其所有参数是constexpr时一定返回constexpr
- 举例：

	constexpr int get_size(){return 20;}
	constexpr int foo = get_size();//foo是一个常量表达式
带默认参数值的函数：

	#include<iostream>
	#include<iomanip>	//此头文件是输入/输出操纵符库的一部分。
	using namespace std;
	
	int getVolume(int length,int width = 2,int height=3);
	
	int main() {
		const int X = 10,Y=12,Z=15;
		cout<<"Some box data is";
		cout<<getVolume(X,Y,Z)<<endl;
		cout<<"Some box data is";
		cout<<getVolume(X,Y)<<endl;
		cout<<"Some box data is";
		cout<<getVolume(X)<<endl;
		return 0;
	}
	int getVolume(int length,int width,int height){
		cout<<setw(5)<<length<<setw(5)<<width<<setw(5)<<height<<'\t';	//setw(5)更改下个输入/输出域的宽度
		return length*width*height;
	}
##10.函数重载
C++允许功能相近的函数在相同的作用域内以相同的函数名声明，从而形成重载
- 重载函数的形参必须不同：个数不同或类型不同
- 编译程序将根据实参和形参的类型及个数的最佳匹配来选择调用哪一个函数
- 不要讲不同功能的函数声明为重载函数，以免出现调用结果误解混淆

示例：

	#include<iostream>
	using namespace std;
	int sumOfSquare(int a,int b){
		return a*a+b*b;
	}
	double sumOfSquare(double a,double b){
		return a*a+b*b;
	}
	int main() {
		int m,n;
		cout<<"Enter two integer:";
		cin>>m>>n;
		cout<<"Their sum of square:"<<sumOfSquare(m,n)<<endl;
		double x,y;
		cout<<"Enter two real number:";
		cin>>x>>y;
		cout<<"Their sum of square:"<<sumOfSquare(m,n)<<endl;
		
		return 0;
	}
##10.C++系统函数
- C++的系统库中提供了几百个函数可供使用，如

	求平方根函数（sprt）
	求绝对值函数（abs）
- 使用系统函数时要包含相应的头文件如cmath

	使用：#include<cmath>

示例：

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
##11.小结
- 可以将一个项目分解为多个函数