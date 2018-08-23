#8.22
1.复制构造函数需看资料
##1.类与对象导学
- 对象：是对现实中对象的模拟，具有属性和行为
- 类：同一类对象的共同属性和行为
- 定义对象时通过构造函数初始化
- 删除对象时通过析构函数释放资源

##2.面向程序对象的基本特点
基本特点包括：抽象，封装，继承，多态
- 抽象：对同一对象的共同属性和行为进行概括形成类

	- 首先注意问题的本质及描述，其次是实现过程或细节
	- 数据抽象：描述某类对象的属性和状态（对象相互区别的物理量）
	- 代码抽象：描述某类对象的共有行为特征或具有的功能
	- 抽象的实现：类

	示例：数据抽象：int hour,int minute,int second
		  代码抽象：setTime（），showTime()

		class Clock{
			public：
				void setTime(int newH,int newM,int newS);
				void showTime();
			private:
				int hour,minute,second
		}；
- 封装：将抽象出的数据代码封装在一起形成类

	- 目的：增强安全性和简化编程，使用者不必了解其中具体的实现细节，而只需要通过外部接口，以特定的访问权限，来使用类的成员
	- 实现封装：类声明中的{}
	
		class Clock{
			public：
				void setTime(int newH,int newM,int newS);	//公有的是外部接口
				void showTime();
			private:	//public和private是特定的访问权限
				int hour,minute,second
		}；//括号是边界
	
- 继承：在已有类的基础上进行扩展形成新的类
- 多态：同一名称，不同的功能实现方式

	目的：达到行为标识统一减小程序中标识符的个数
##3.类和对象的定义
类是同一类对象的抽象。对象是类的实例。定义类的对象才可以通过对象使用类中定义的功能
- 设计类就是设计类型
- 定义类的语法形式

		class 类名称
		{
			public：公有成员（外部接口）
			private：私有成员
			protected：保护型成员	
		}；
- 为数据长远设置类的初始值用于初始化数据成员。如下

		class Clock{
			public：
				void setTime(int newH,int newM,int newS);
				void showTime();
			private:
				int hour=0,minute=0,second=0	//初始化
		}；
- 公有类型成员：

	- 在public后面声明，他们是类与外部的接口，任何外部函数都可以访问共有类型数据和函数
- 私有类型成员

	- 在关键词private后面声明，只允许本类中的函数访问。而外部任何函数都不能访问
	- 如果紧跟在类名称后私有成员，则关键字private可以省略

- 保护成员

	- 与private类似，其差别在继承与派生时对派生类的形象不同

- 对象定义的语法：类名 对象名； 示例

		Clock myClock；
	从类外访问成员使用“对象名.成员名”访问public成员
- 类的成员函数

- 内联成员函数。为了提高运行效率对于简单函数可以声明为内联函数

举例：

	#定义类

	#include<iostream>
	using namespace std;
	class Clock{
		public:
			void setTime(int newH = 0,int newM = 0,int newS = 0);
			void showTime();
		private:
			int hour,minute,second;
	};
	# 成员函数的实现
	void Clock::setTime(int newH,int newM,int newS){
		hour = newH;
		minute = newM;
		second = newS;
	}
	void Clock::showTime(){
		cout<<hour<<":"<<minute<<":"<<second;
	}
	# 对象的使用
	int main(){
		Clock myClock;
		myClock.setTime(8,30,30);
		myClock.showTime();
		return 0;
	}
以上示例可简化为：

	#include<iostream>
	using namespace std;
	class Clock{
		public:
			void setTime(int newH = 0,int newM = 0,int newS = 0){
				hour = newH;
				minute = newM;
				second = newS;
			}
			void showTime(){
				cout<<hour<<":"<<minute<<":"<<second;
			}
		private:
			int hour,minute,second;
	};
	
	int main(){
		Clock myClock;
		myClock.setTime(8,30,30);
		myClock.showTime();
		return 0;
	}
##4.构造函数基本概念.
构造函数是类中的特殊函数，用于描述初始化算法
- 作用：在对象被创建时使用特定的值构造对象，将对象初始化为一个特定的初始状态
- 形式：

	- 函数名与类名相同
	- 不能定义返回值类型也不能有return语句
	- 可以有形式参数，也可以没有形式参数
	- 可以是内联函数
	- 可以重载
	- 可以带默认参数值
- 调用时机。在类对象创建时自动调用如：Clock myClock（1，1，1）；
- 默认构造函数。调用时可以不需要实参的构造函数

	- 参数表为空的构造函数
	- 全部参数都有默认值的构造函数

- 隐含生成的构造函数

	- 如果程序中未定义构造函数，编译器将自动生成一个默认构造函数

- “=default”

	- 如果程序中已定义构造函数。默认情况下将不再生成隐含默认构造函数。如果此时依然希望编译器隐含生成构造函数可以使用“=default”
	- 例：

		class Clock{
			public：
				Clock（） = default；//指示编译器提供默认构造函数
				Clock（int newH,int newM,int newS）；
				//构造函数
			private：
				int newH,newM,newS；
		}
例题：

	#include<iostream>
	using namespace std;
	class Clock{
		public:
			Clock(int newH,int newM,int newS);//构造函数 
			void setTime(int newH = 0,int newM = 0,int newS = 0);
			void showTime();
		private:
			int hour,minute,second;
	};
	//成员函数实现 
	void Clock::setTime(int newH,int newM,int newS){
		hour = newH;
		minute = newM;
		second = newS;
	}
	void Clock::showTime(){
		cout<<hour<<":"<<minute<<":"<<second;
	}
	//构造函数的实现
	Clock::Clock(int newH,int newM,int newS):
		hour(newH),minute(newM),second(newS){
		}
	int main(){
		Clock c(0,0,0);//自动调用构造函数 
		c.showTime();
		return 0;
	}
例题2：

	#include<iostream>
	using namespace std;
	class Clock{
		public:
			Clock(int newH,int newM,int newS);//构造函数 
			Clock();//默认构造函数 
			void setTime(int newH = 0,int newM = 0,int newS = 0);
			void showTime();
		private:
			int hour,minute,second;
	};
	//成员函数实现 
	void Clock::setTime(int newH,int newM,int newS){
		hour = newH;
		minute = newM;
		second = newS;
	}
	void Clock::showTime(){
		cout<<hour<<":"<<minute<<":"<<second;
	}
	//默认构造函数实现 
	Clock::Clock(int newH,int newM,int newS):
		hour(newH),minute(newM),second(newS){
		}
	//构造函数的实现
	Clock::Clock():hour(0),minute(0),second(0){}
	int main(){
		Clock c(8,10,0);//自动调用构造函数 
		Clock c1;
		c.showTime(); 
		c1.showTime();
		return 0;
	}
	也可改造为
	#include<iostream>
	using namespace std;
	class Clock{
		public:
			Clock(int newH,int newM,int newS):
				hour(newH),minute(newM),second(newS){}//构造函数 
			Clock():hour(0),minute(0),second(0){}
			//默认构造函数 
			void setTime(int newH = 0,int newM = 0,int newS = 0){
				hour = newH;
				minute = newM;
				second = newS;
			}
			void showTime(){
				cout<<hour<<":"<<minute<<":"<<second;
			}
		private:
			int hour,minute,second;
	};
	int main(){
		Clock c(8,10,0);//自动调用构造函数 
		Clock c1;
		c.showTime(); 
		c1.showTime();
		return 0;
	}
委托构造函数：使用类的其他构造函数执行初始化过程如

	Clock(int newH,int newM,int newS):
	hour(newH),minute(newM),second(newS){}
	# 下方为委托构造函数
	Clock():Clock(0,0,0){}	
复制构造函数：是一种特殊的构造函数，其形参为本类对象的引用。作用是用一个已存在的对象去初始化同类型的新对象
- 语法

		class 类名{
			public：
				类名（形参）：//构造函数
				类名（const 类名 &对象名）//复制构造函数
		}
		类名：：类（const 类名&对象名）{函数体}//复制构造函数实现
示例：
	#include <iostream>	 
	using namespace std;
	class Line
	{
	   public:
	      int getLength( void );
	      Line( int len );             // 简单的构造函数
	      Line( const Line &obj);      // 拷贝构造函数
	      ~Line();                     // 析构函数
	   private:
	      int *ptr;
	};
	// 成员函数定义，包括构造函数
	Line::Line(int len)
	{
	    cout << "调用构造函数" << endl;
	    // 为指针分配内存
	    ptr = new int;
	    *ptr = len;
	}
	Line::Line(const Line &obj)
	{
	    cout << "调用拷贝构造函数并为指针 ptr 分配内存" << endl;
	    ptr = new int;
	    *ptr = *obj.ptr; // 拷贝值
	}
	Line::~Line(void)
	{
	    cout << "释放内存" << endl;
	    delete ptr;
	}
	int Line::getLength( void )
	{
	    return *ptr;
	}
	void display(Line obj)
	{
	   cout << "line 大小 : " << obj.getLength() <<endl;
	}
	// 程序的主函数
	int main( )
	{
	   Line line1(10);
	   Line line2 = line1; // 这里也调用了拷贝构造函数
	   display(line1);
	   display(line2);
	   return 0;
	}
如果一个类拥有资源，当这个类的对象发生复制过程的时候，资源重新分配，这个过程就是深拷贝，反之，没有重新分配资源，就是浅拷贝。
#4.1析构函数
析构函数完成对象被删除前的一些清除工作。在对象的生存期结束的时刻系统自动调用析构函数。如果在程序中未声明析构函数，编译器自动产生一个析构函数，其函数体为空
- 语法 ：~类名();  析构函数没有参数，没有返回值类型

		#include <iostream>
		using namespace std;
		
		class Point{
			public:
				Point(int xx,int yy);
				~Point();
			private:
				int x,y;
		}; 
		Point::Point(int xx,int yy){
			x=xx;
			y=yy;
		}
		Point::~Point(){
		}
##5.类的组合
概念：类中的成员是另一个类的对象。可以在已有抽象的基础上实现更复杂的抽象
- 构造函数设计

	- 原则：不仅要负责对本类中的基本类型成员数据初始化，也要对对象成员初始化。
	- 声明形式：

		类名：：类名（对成员所需的形参，本类成员的形参）：
			对象1（参数），对象2（参数），。。。{
			函数体语句
		}
##6.前向引用声明
类应该先声明在调用，如果需要在某各类声明之前引用该类则应该使用前向引用声明。前向引用声明只为程序引入一个标识符，具体声明在其他地方。

- 示例：

		class B；
		class A{
		public:
			void f(B b);
		};
		class B{
		public:
			void f(A a);
		};
- 注意：在提供一个完整的类声明之前，不能声明该类的对象，也不能在内联函数中使用该类的对象。当使用前向引用声明时，只能使用被声明的符号，而不能涉及类的任何细节

	如：
		class B；	//前向引用声明
		class A{
		public:
			B b;	//错误，类B声明不完善
		};
		class B{
		public:
			A a;
		};
##7.UML语言
有三个基本部分：事物（Things），关系（Relationship），图（Diagrams）
##8.结构体
是一种特殊形态的类。区别：类的缺省访问权限是private，结构体缺省访问权限是public
- 什么时候使用

	- 定义主要用来保存数据，而没有什么操作的类型
	- 人们习惯将结构体的成员数据设置为公有。因此这时使用更方便

- 定义

		struct 结构体名称{
			公有成员
		protected:
			保护型成员
		private：
			私有成员
		}
示例：

	#include <iostream>
	#include<iomanip>
	#include<string>
	using namespace std;
	struct Student{
		int num;
		string name;
		char sex;
		int age;
	};
	
	int main( ){
		Student stu = {97001,"Lin Lin",'F',19};
		cout <<"Num "<<stu.num<<endl;
		cout <<"Num "<<stu.name<<endl;
	    cout <<"Num "<<stu.sex<<endl;
	    cout <<"Num "<<stu.age<<endl;
	   return 0;
	}
##9.联合体
联合体的目的是存储空间的共用。成员共用同一组内存单元。任何两个内存成员不会同时有效
- 定义形式

	union 联合体名称{
		公有成员
	protected：
		保护型成员
	private：
		私有成员
	}
- 内存分配，举例

		union Mark{//表示成绩的联合体
			char grade;//等级制的成绩 
			bool pass;//只记录是否通过课程的成绩
			int percent;//百分制成绩
		}
	无名联合
		union{
			int i;
			float f;
		}
		//在程序中可以这样使用
		i= 10；
		f = 2.2;//此时就把i中的数据覆盖掉了
示例：

	#include <iostream>
	#include<string>
	using namespace std;
	
	class ExamInfo{
		private:
			string name;
			enum{
				GRADE,PASS,PERCENTAGE
			}mode;
			union{
				char grade;
				bool pass;
				int percent;
			};
		public:
			ExamInfo(string name,char grade):
				name(name),mode(GRADE),grade(grade){
				}
			ExamInfo(string name,bool pass):
				name(name),mode(PASS),pass(pass){
				}
			ExamInfo(string name,int percent):
				name(name),mode(PERCENTAGE),percent(percent){
				}
			void show(){
				cout<<name<<":";
				switch(mode){
					case GRADE:cout<<grade;break;
					case PASS:cout<<(pass?"PASS":"FAIL");break;
					case PERCENTAGE:cout<<percent;break;
				}
				cout<<endl;
			}
	};
	
	int main( ){
		ExamInfo course1("English",'B');
		ExamInfo course2("Calculus",true);
		ExamInfo course3("C++",85);
		course1.show();
		course2.show();
		course3.show();
	   return 0;
	}
##10.枚举类
- 定义形式：enum class 枚举类型名：底层类型{枚举值列表}；

	不指定底层类型默认为int，如：
		enum class Type{General,Light,Medium,Heavy};
		enum class Type:char		{General,Light,Medium,Heavy};
		enum class Category		{General=1,Pistol,MachineGun,cannon};
- 优势

	- 强作用域，其作用域限制在枚举类中
	- 转换限制，枚举类对象不可以与整型隐式的互相转换
	- 可以指定底层类型

示例：

	#include <iostream>
	using namespace std;
	
	enum class Side{Right,Left};
	enum class Thing{wrong,Right};
	
	int main( ){
		Side s = Side::Right;
		Thing w = Thing::Wrong;
		cout <<(s==w)<<endl;
		
	   	return 0;
	}
##11.

	#include <iostream>
	using namespace std;
	
	enum CPU_Rank{
		P1 = 1,P2,P3,P4,P5,P6,P7
	};
	class CPU{
		private:
			CPU_Rank rank;
			int frequency;
			float voltage;
		public:
			CPU(CPU_Rank r,int f,float v){
				rank = r;
				frequency = f;
				voltage=v;
				cout<<"构造了一个CPU"<<endl; 
			}
			~CPU(){
				cout<<"析构了一个CPU"<<endl;
			}
			CPU_Rank GetRank()const{return rank;}
			int GetFrequency()const{return frequency;}
			float GetVoltage()const{return voltage;}
			void setRank(CPU_Rank r){
				rank = r;
			}
			void setFrequency(int f){
				frequency = f;
			}
			void setVoltage(float v){
				voltage = v;
			}
			void Run(){
				cout<<"CPU开始运行"<<endl; 
			}
			void stop(){
				cout<<"CPU停止运行"<<endl; 
			}
	};
	
	int main( ){
		CPU a(P6,300,2.8);
		a.Run();
		a.stop(); 
	   	return 0;
	}