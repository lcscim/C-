#8.14

##1导学
- 计算机的最基本功能是数据处理
- C++能够处理的基本数据类型：

	- 整数类型
	- 实数类型
	- 字符类型
	- 布尔类型

- C++支持的最基本运算

	- 算术运算
	- 逻辑运算

- 程序的执行流程并不总是顺序的

##2.C++特点和实例
- 兼容C支持面向过程的程序设计
- 支持面向对象的方法
- 支持泛型程序设计方法

实例：

	#include "stdafx.h"
	#include<iostream>	//声明头文件
	using namespace std;//使用命名空间
	
	int main(){		//主函数开头
		cout << "Welcome to C++" << endl;
		cout << "hello" << endl;
	    return 0;
	}
- 字符集

	- 大小写的英文字母
	- 数字字符
	- 特殊字符

- 构词法

	- 关键字：C++预定义的单词
	- 标识符：程序员声明的单词，它命名程序正文中的一些实体
	- 文字：在程序中直接使用符号表示的数据
	- 分隔符：（），[],{},;
	- 运算符:用于实现各种运算的符号
	- 空格符：空格，制表符TAB

##3.基本数据类型
- 数据类型

	- 整数类型
	- 实数类型，浮点类型
	- 字符类型
	- 布尔类型

- 程序中的数据

	- 常量：在源程序中直接写明的数据，其值在整个程序运行期间不可改变
	- 变量：在程序运行过程中允许改变的数据

- 整数类型

	- 基本整数类型：int
	- 按符号分：符号的（signed）无符号的（unsigned）
	- 按照数据范围分：短整数（short），长整数（long），长长整数（long long）

- 字符类型（char）

	- 容纳单个字符的编码
	- 实质上存储的也是整数

- 浮点数类型

	- 单精度（float）
	- 双精度（double）
	- 扩展精度（long double）

- 字符串类型

	- 有字符串常量
	- 基本类型中没有字符串变量
	- 采用字符数组存储字符串（C风格字符串）
	- 标准C++类库中的String类（C++风格字符串）

- 布尔类型（bool）

	- 只有两个值：true（真），false（假）
	- 常用来表示关系比较，相等比较或逻辑运算结果

数据范围：![](https://i.imgur.com/andhEud.png)

- 常量

	- 在程序运行过程中其值始终不可改变的量
	- 整数常量 

- 符号常量

	- 常量定义语句的形式为：const 数据类型 常量名 = 常量值
	- 在定义时一定要初始化，在程序中间不能改变其值

##4.算术运算符与算数表达式
+，-，*，/（若整数相除结果取整），%（结果取余），++，--
- 复合赋值运算符

	+=，-=，*=，/=，%=，<<=,>>=,&=,^=,|=
- 逗号运算符

	例如：a=3*5,a*4 最终结果为60
- 关系运算

	<,<=,>,>=    == ,!=
	值是bool值，只能为TRUE或FALSE
- 逻辑运算符

	！ && ||（优先级从左至右由高到低）
- 条件表达式

	表达式1？表达式2：表达式3		
- sizeof运算获取占用字节数

	- 语法：sizeof（类型名）或sizeof 表达式

- 位运算

	- 按位与（&） 将两个运算量的每一位进行逻辑与操作
	- 按位或（|）将两个运算量的每一位进行逻辑或操作
	- 按位异或（^）将两个运算量的每一位进行逻辑异或操作，对应位相同为0，不同为1
	- 取反（~）对一个二进制数进行按位取反
	- 左移运算（<<）左移后低位补0高位舍弃
	- 右移运算（>>）右移后低位舍弃，高位有符号补符号位，无符号补0

- 隐含转换

	在算术运算过程中如果参与运算的操作数类型不一致，编译系统会自动对数据进行转换，基本原则是将低类型数据转换为高类型

	讲一个非布尔类型的算术运算符赋给布尔类型时，算数值为0则结果为FALSE，否则为TRUE

	讲一个浮点数类型赋值给整数类型时，结果值将只保留浮点数中的整数部分，小数部分将丢失
	
	将一个整数类型赋值给浮点类型时，小数部分记为0，如果整数所占的空间超过了浮点类型的容量，精度可能有损失
- 显式转换

	作用是将表达式的结果类型转换为类型说明符所指定的类型

	- 语法形式

		- 类型说明符（表达式）
		- （类型说明符）表达式

		- 类型转换操作符<类型说明符>（表达式）

		类型转换操作符可以是const_cast,dynamic_cast,reinterpret_cast,static_cast
- C++注释

	- 单行注释：//
	- 多行注释：/*注释内容*/

示例：

	#include<iostream>
	using namespace std;
	int main(){
		
		int a,b,c;
		cin >> a;
		cin >> b;
		c = (a-b)>0?(a-b):(b-a);
		cout<<c;
		return 0;
	
	}
##5.数据的输入输出（IO流）
- C++中，将数据从一个对象到另一个对象的流动抽象为‘流’。流在使用前要被建立，使用后要被删除
- 数据的输入输出是通过IO流来实现的，cin,cout是预定义的流对象，cin是键盘输入，cout来处理标准输出，即屏幕输出
- 从流中获取数据的操作称为提取操作，向流中添加数据操作为插入操作

预定义的插入符和提取符

- "<<"是预定义插入符，作用在流对象cout上便可以实现向输出设备输出
- ">>"是预定义提取符，作用在cin上，用于标准输入
- 提取符和插入符可连续写多个，每个后跟一个表达式

常用的IO流类库操纵符：

	操纵符名					含义
	dec					数值数据采用十进制表示
	hex					数值数据采用十六进制表示
	oct					数值数据采用八进制表示
	ws					提取空白符
	endl				插入换行符，并刷新流
	ends				插入空字符
	setsprecision（int）	设置浮点数的小数位数（包括小数点）
	setw（int）			设置域宽
##6.条件，循环语句
if条件语句：可进行相互嵌套
- 语法形式，例：

		#include<iostream>
		using namespace std;
		int main(){
			int a,b;
			cout << "请输入a和b";
			cin >> a >>b;
			if (a!=b)		//判断条件末尾没有冒号
			    if(a>b)
					cout<<"a>b"<<endl;
				else
					cout<<"a<b"<<endl;
			else
				cout<<"a=b"<<endl;
			return 0;
		}
switch判断语句：
- 一个 switch 语句允许测试一个变量等于多个值时的情况。每个值称为一个 case，且被测试的变量会对每个 switch case 进行检查。

		switch(expression){
		    case constant-expression  :
		       statement(s);
		       break; // 可选的
		    case constant-expression  :
		       statement(s);
		       break; // 可选的
		  
		    // 您可以有任意数量的 case 语句
		    default : // 可选的
		       statement(s);
		}
	switch 语句必须遵循下面的规则：

		- switch 语句中的 expression 必须是一个整型或枚举类型，或者是一个 class 类型，其中 class 有一个单一的转换函数将其转换为整型或枚举类型。
		- 在一个 switch 中可以有任意数量的 case 语句。每个 case 后跟一个要比较的值和一个冒号。
		- case 的 constant-expression 必须与 switch 中的变量具有相同的数据类型，且必须是一个常量或字面量。
		当被测试的变量等于 case 中的常量时，case 后跟的语句将被执行，直到遇到 break 语句为止。
		- 当遇到 break 语句时，switch 终止，控制流将跳转到 switch 语句后的下一行。
		- 不是每一个 case 都需要包含 break。如果 case 语句不包含 break，控制流将会 继续 后续的 case，直到遇到 break 为止。
		- 一个 switch 语句可以有一个可选的 default case，出现在 switch 的结尾。default case 可用于在上面所有 case 都不为真时执行一个任务。default case 中的 break 语句不是必需的。
- 示例：

		#include <iostream>
		using namespace std;
		 
		int main ()
		{
		   // 局部变量声明
		   char grade = 'D';
		 
		   switch(grade)
		   {
		   case 'A' :
		      cout << "很棒！" << endl; 
		      break;
		   case 'B' :
		   case 'C' :
		      cout << "做得好" << endl;
		      break;
		   case 'D' :
		      cout << "您通过了" << endl;
		      break;
		   case 'F' :
		      cout << "最好再试一下" << endl;
		      break;
		   default :
		      cout << "无效的成绩" << endl;
		   }
		   cout << "您的成绩是 " << grade << endl;
		 
		   return 0;
		}
while循环语句：
- 语法形式，例：

		#include<iostream>
		using namespace std;
		int main(){
			int i = 1,sum = 0;
			while(i<=10){	//条件为假跳出循环
				sum+=i;
				i++;
			}
			cout<<"sum = "<<sum;
			return 0;
		}	
do-while循环语句：与while语句相比，最少执行一次循环体
- 语法形式，例：

		#include<iostream>
		using namespace std;
		int main(){
			int n,right_digit,newnum = 0;
			cout<<"输入" ;
			cin>>n;
			cout<<"反转后的数字结果为";
			do{
				right_digit = n%10;
				cout<<right_digit;
				n/=10;
			}while(n!=0);
			return 0;
		}
for循环语句：
- 语法形式，例：

		#include<iostream>
		using namespace std;
		int main(){
			int n;
			cout<<"输入" ;
			cin>>n;
			cout<<"所有因子";
			for(int i = 1;i<=n;i++)	
				if(n%i==0)
					cout<<i<<" ";
			return 0;
		}
	for(初始语句;表达式1;表达式2)
		语句
- 范围for语句：

	for（声明：表达式）：
		语句
嵌套的控制结构和其他控制语句：
- 循环语句和条件语句可以相互嵌套
- break语句：使程序从循环体和switch语句中跳出。进行下次操作
- continue语句：跳出本次循环进入下次循环
- goto语句：使程序的执行流程跳转到语句标号所指定的语句，不提倡使用

##7.自定义类型
类型别名：为已有类型另外命名
- typedef 已有类型名 新类型名
- using 新类型名=已有类型名

例：
	using Area = double
	using Volume = double

枚举类型：如表示一周有七天。
- 不限定作用域的枚举类型

	- 定义方式：将全部可取值一一列举出来
	- 语法形式：
	
		enum 枚举类型名{变量值列表}
			enum Weekday
				{SUN，MON，TUE，WED，THU，FRI，SAT}
		默认情况下SUN=0，。。。SAT = 6
	- 枚举类型是常量，不能对其赋值
	- 枚举类型具有默认值，依次为0，1，2.。
	- 也可以在声明时另行制定枚举元素的值
	- 枚举值可以进行关系运算
	- 整数值不能直接赋值给枚举变量
	- 枚举值可以赋值给整型变量

		#include<iostream>
		using namespace std;
		enum GameResult{
			WIN,LOSE,TIE,CANCEL
		};
		int main(){
			GameResult result;
			enum GameResult omin = CANCEL;
			for(int count = WIN;count<=CANCEL;count++){
				result = GameResult(count);
				if(result==omin)
					cout<<"The game was cancelled"<<endl;
				else{ 
					cout<<"The game was played";
					if(result==WIN)
						cout<<"and we won!";
					if(result==LOSE)
						cout<<"and we lose!";
					cout<<endl; 
				}	
			}
			return 0;
		}
- 限定作用域的枚举类型

auto类型与decltype类型
- auto：编译器通过初始值自动推断变量的类型：

	auto val = val1+val2
	如果val1和val2都为int值，则val也为int值
- decltype:定义一个变量与某一表达式的类型相同，但并不用该表达式初始化变量

	decltype（i） j = 2
	表示j以2作为初始值，类型与i一致