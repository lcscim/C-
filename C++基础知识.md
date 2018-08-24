#8.20
1. C++ 完全支持面向对象的程序设计，包括面向对象开发的四大特性：封装,数据隐藏,继承,多态
2. C++ 是区分大小写的编程语言。
3. 单行注释 以 // 开始，直到行末为止。多行注释 以 /* 开始，以 */ 终止。
##1.C++ 简介
C++ 是一种静态类型的、编译式的、通用的、大小写敏感的、不规则的编程语言，支持过程化编程、面向对象编程和泛型编程。

C++ 被认为是一种中级语言，它综合了高级语言和低级语言的特点。

C++ 是由 Bjarne Stroustrup 于 1979 年在新泽西州美利山贝尔实验室开始设计开发的。C++ 进一步扩充和完善了 C 语言，最初命名为带类的C，后来在 1983 年更名为 C++。

C++ 是 C 的一个超集，事实上，任何合法的 C 程序都是合法的 C++ 程序。

注意：使用静态类型的编程语言是在编译时执行类型检查，而不是在运行时执行类型检查。
- 面向对象程序设计

	C++ 完全支持面向对象的程序设计，包括面向对象开发的四大特性：

		封装
		数据隐藏
		继承
		多态
- 标准库

	标准的 C++ 由三个重要部分组成：

		核心语言，提供了所有构件块，包括变量、数据类型和常量，等等。
		C++ 标准库，提供了大量的函数，用于操作文件、字符串等。
		标准模板库（STL），提供了大量的方法，用于操作数据结构等。
- ANSI 标准

	ANSI 标准是为了确保 C++ 的便携性 —— 您所编写的代码在 Mac、UNIX、Windows、Alpha 计算机上都能通过编译。

	由于 ANSI 标准已稳定使用了很长的时间，所有主要的 C++ 编译器的制造商都支持 ANSI 标准。
##2.C++ 环境设置
使用visual studio即可
##3.C++ 基本语法
- C++ 基本语法

	C++ 程序可以定义为对象的集合，这些对象通过调用彼此的方法进行交互。现在让我们简要地看一下什么是类、对象，方法、即时变量。

		对象 - 对象具有状态和行为。例如：一只狗的状态 - 颜色、名称、品种，行为 - 摇动、叫唤、吃。对象是类的实例。

		类 - 类可以定义为描述对象行为/状态的模板/蓝图。

		方法 - 从基本上说，一个方法表示一种行为。一个类可以包含多个方法。可以在方法中写入逻辑、操作数据以及执行所有的动作。

		即时变量 - 每个对象都有其独特的即时变量。对象的状态是由这些即时变量的值创建的。
- C++ 程序结构

	让我们看一段简单的代码，可以输出单词 Hello World。

		#include <iostream>		//导入头文件，<iostream>表示输入输出流头文件
		using namespace std;	//告诉编译器使用 std 命名空间。
		// main() 是程序开始执行的地方
		int main()	//main是主函数
		{
		    cout << "Hello World"; // 输出 Hello World    
			return 0; 	//终止 main( )函数，并向调用进程返回值 0。
		} 
- C++ 中的分号 & 块

	在 C++ 中，分号是语句结束符。也就是说，每个语句必须以分号结束。它表明一个逻辑实体的结束。例如，下面是三个不同的语句：

		x = y;
		y = y+1;
		add(x, y);
	块是一组使用大括号括起来的按逻辑连接的语句。例如：

		{
		   cout << "Hello World"; // 输出 Hello World    return 0; 
		}
	C++ 不以行末作为结束符的标识，因此，您可以在一行上放置多个语句。
- C++ 标识符

	C++ 标识符是用来标识变量、函数、类、模块，或任何其他用户自定义项目的名称。一个标识符以字母 A-Z 或 a-z 或下划线 _ 开始，后跟零个或多个字母、下划线和数字（0-9）。
	C++ 标识符内不允许出现标点字符，比如 @、$ 和 %。C++ 是区分大小写的编程语言。
- C++ 关键字

	下表列出了 C++ 中的保留字。这些保留字不能作为常量名、变量名或其他标识符名称。

		asm			else		new			this
		auto		enum		operator	throw
		bool		explicit	private		true
		break		export		protected	try
		case		extern		public		typedef
		catch		false		register	typeid
		char		float		reinterpret_cast	typename
		class		for			return		union
		const		friend		short		unsigned
		const_cast	goto		signed		using
		continue	if			sizeof		virtual
		default		inline		static		void
		delete		int			static_cast	volatile
		do			long		struct		wchar_t
		double		mutable		switch		while
		dynamic_cast	namespace	template
- 三字符组

	三字符组就是用于表示另一个字符的三个字符序列，又称为三字符序列。三字符序列总是以两个问号开头。

	三字符序列不太常见，但 C++ 标准允许把某些字符指定为三字符序列。以前为了表示键盘上没有的字符，这是必不可少的一种方法。
	
	三字符序列可以出现在任何地方，包括字符串、字符序列、注释和预处理指令。
	
	下面列出了最常用的三字符序列：
	
	   三字符组		   替换
		??=				#
		??/				\
		??'				^
		??(				[
		??)				]
		??!				|
		??<				{
		??>				}
		??-				~
	所有的编译器都不支持三字符组，为避免造成混乱，不建议使用三字符组。	
- C++ 中的空格

	只包含空格的行，被称为空白行，可能带有注释，C++ 编译器会完全忽略它。

	在 C++ 中，空格用于描述空白符、制表符、换行符和注释。空格分隔语句的各个部分，让编译器能识别语句中的某个元素（比如 int）在哪里结束，下一个元素在哪里开始。因此，在下面的语句中：
	
		int age;
	在这里，int 和 age 之间必须至少有一个空格字符（通常是一个空白符），这样编译器才能够区分它们。另一方面，在下面的语句中：
	
		fruit = apples + oranges;   // 获取水果的总数
	fruit 和 =，或者 = 和 apples 之间的空格字符不是必需的，但是为了增强可读性，您可以根据需要适当增加一些空格。
##4. C++ 注释
- 单行注释 以 // 开始，直到行末为止。
- 多行注释 以 /* 开始，以 */ 终止。
##5. C++ 数据类型
使用编程语言进行编程时，需要用到各种变量来存储各种信息。变量保留的是它所存储的值的内存位置。这意味着，当您创建一个变量时，就会在内存中保留一些空间。

您可能需要存储各种数据类型（比如字符型、宽字符型、整型、浮点型、双浮点型、布尔型等）的信息，操作系统会根据变量的数据类型，来分配内存和决定在保留内存中存储什么。	
- 基本的内置类型

		类型			关键字
		布尔型		bool
		字符型		char
		整型			int
		浮点型		float
		双浮点型		double
		无类型		void
		宽字符型		wchar_t

	一些基本类型可以使用一个或多个类型修饰符进行修饰：signed,unsigned,short,long
	下表显示了各种变量类型在内存中存储值时需要占用的内存，以及该类型的变量所能存储的最大值和最小值。
	注意：不同系统会有所差异。
		类型						位				范围
		char				1 个字节		-128 到 127 或者 0 到 255
		unsigned char		1 个字节			0 到 255
		signed char			1 个字节			-128 到 127
		int					4 个字节		-2147483648 到 2147483647
		unsigned int		4 个字节			0 到 4294967295
		signed int			4 个字节		-2147483648 到 2147483647
		short int			2 个字节		-32768 到 32767
		unsigned short int	2 个字节		0 到 65,535
		signed short int	2 个字节		-32768 到 32767
		long int			8 个字节		-9,223,372,036,854,775,808 到 9,223,372,036,854,775,807
		signed long int		8 个字节		-9,223,372,036,854,775,808 到 9,223,372,036,854,775,807
		unsigned long int	8 个字节		0 to 18,446,744,073,709,551,615
		float				4 个字节		+/- 3.4e +/- 38 (~7 个数字)
		double				8 个字节		+/- 1.7e +/- 308 (~15 个数字)
		long double			16 个字节	+/- 1.7e +/- 308 (~15 个数字)
		wchar_t	2 或 		4 个字节		1 个宽字符

	- endl，这将在每一行后插入一个换行符，<< 运算符用于向屏幕传多个值。
	- sizeof() 函数来获取各种数据类型的大小。

- typedef声明，使用 typedef 为一个已有的类型取一个新的名字。下面是使用 typedef 定义一个新类型的语法：

	typedef type newname; 
	如：typedef int feet;
	# 声明之后就可以创建一个整型变量 distance：
	feet distance;
- 枚举类型：它是由用户定义的若干枚举常量的集合。如果一个变量只有几种可能的值，可以定义为枚举(enumeration)类型。所谓"枚举"是指将变量的值一一列举出来，变量的值只能在列举出来的值的范围内。

	创建枚举，需要使用关键字 enum。枚举类型的一般形式为：

		enum 枚举名{ 
		     标识符[=整型常数], 
		     标识符[=整型常数], 
		... 
		    标识符[=整型常数]
		}枚举变量;
示例1：

	#include <iostream>
	using namespace std;
	
	int main( ){
		enum color{red,green=5,blue} c;
		c=red;
		cout<<c;
		return 0;
	}
相当于：

	#include <iostream>
	using namespace std;
	
	int main( ){
		enum color{red,green=5,blue};
		color c;
		c=red;
		cout<<c;
		return 0;
	}
注意：默认情况下，第一个名称的值为 0，第二个名称的值为 1，第三个名称的值为 2，以此类推。但是，您也可以给名称赋予一个特殊的值，只需要添加一个初始值即可。例如，在下面的枚举中，green 的值为 5。

	enum color { red, green=5, blue };
在这里，blue 的值为 6，因为默认情况下，每个名称都会比它前面一个名称大 1，但 red 的值依然为 0。

	#include <iostream>
	using namespace std;
	
	int main( ){
		enum color{red,green=5,blue} c;
		c=red;
		cout<<c;	//输出0
		c=blue;		
		cout<<c;	//输出6
		return 0;
	}
##6.C++ 变量类型
变量其实只不过是程序可操作的存储区的名称。C++ 中每个变量都有指定的类型，类型决定了变量存储的大小和布局，该范围内的值都可以存储在内存中，运算符可应用于变量上。

变量的名称可以由字母、数字和下划线字符组成。它必须以字母或下划线开头。大写字母和小写字母是不同的，因为 C++ 是大小写敏感的。

基于前一章讲解的基本类型，有以下几种基本的变量类型：

	类型					描述
	bool		存储值 true 或 false。
	char		通常是一个八位字节（一个字符）。这是一个整数类型。
	int			对机器而言，整数的最自然的大小。
	float		单精度浮点值。单精度是这样的格式，1位符号，8位指数，23位小数。
	double	    双精度浮点值。双精度是1位符号，11位指数，52位小数。
	void		表示类型的缺失。
	wchar_t		宽字符类型。
也允许定义各种其他类型的变量，比如枚举、指针、数组、引用、数据结构、类等等
###6.1 C++ 中的变量定义。
变量定义指定一个数据类型，并包含了该类型的一个或多个变量的列表，如下所示：

	type variable_list;
type 必须是一个有效的 C++ 数据类型，可以是 char、wchar_t、int、float、double、bool 或任何用户自定义的对象，variable_list 可以由一个或多个标识符名称组成，多个标识符之间用逗号分隔。下面列出几个有效的声明：

	int    i, j, k;
	char   c, ch;
	float  f, salary;
	double d;
行 int i, j, k; 声明并定义了变量 i、j 和 k，这指示编译器创建类型为 int 的名为 i、j、k 的变量。

变量可以在声明的时候被初始化（指定一个初始值）。初始化器由一个等号，后跟一个常量表达式组成，如下所示：

type variable_name = value;
下面列举几个实例：

	extern int d = 3, f = 5;    // d 和 f 的声明 
	int d = 3, f = 5;           // 定义并初始化 d 和 f
	byte z = 22;                // 定义并初始化 z
	char x = 'x';               // 变量 x 的值为 'x'
不带初始化的定义：带有静态存储持续时间的变量会被隐式初始化为 NULL（所有字节的值都是 0），其他所有变量的初始值是未定义的。
###6.2C++ 中的变量声明
变量声明向编译器保证变量以给定的类型和名称存在，这样编译器在不需要知道变量完整细节的情况下也能继续进一步的编译。变量声明只在编译时有它的意义，在程序连接时编译器需要实际的变量声明。

当您使用多个文件且只在其中一个文件中定义变量时（定义变量的文件在程序连接时是可用的），变量声明就显得非常有用。您可以使用 extern 关键字在任何地方声明一个变量。虽然您可以在 C++ 程序中多次声明一个变量，但变量只能在某个文件、函数或代码块中被定义一次。

	#include <iostream>
	using namespace std;
	// 变量声明
	extern int a, b;
	extern int c;
	extern float f;
	int main ()
	{
	  // 变量定义
	  int a, b;
	  int c;
	  float f;
	  // 实际初始化
	  a = 10;
	  b = 20;
	  c = a + b;
	  cout << c << endl ;
	  f = 70.0/3.0;
	  cout << f << endl ;
	  return 0;
	}
同样的，在函数声明时，提供一个函数名，而函数的实际定义则可以在任何地方进行。

	// 函数声明
	int func();
	 
	int main()
	{
	    // 函数调用
	    int i = func();
	}
	 
	// 函数定义
	int func()
	{
	    return 0;
	}
###6.3C++ 中的左值（Lvalues）和右值（Rvalues）
C++ 中有两种类型的表达式：

左值（lvalue）：指向内存位置的表达式被称为左值（lvalue）表达式。左值可以出现在赋值号的左边或右边。
右值（rvalue）：术语右值（rvalue）指的是存储在内存中某些地址的数值。右值是不能对其进行赋值的表达式，也就是说，右值可以出现在赋值号的右边，但不能出现在赋值号的左边。
变量是左值，因此可以出现在赋值号的左边。数值型的字面值是右值，因此不能被赋值，不能出现在赋值号的左边。下面是一个有效的语句：

	int g = 20;
但是下面这个就不是一个有效的语句，会生成编译时错误：

	10 = 20;	//错误
##7.C++ 变量作用域
作用域是程序的一个区域，一般来说有三个地方可以定义变量：
- 在函数或一个代码块内部声明的变量，称为局部变量。

	实例
		#include <iostream>
		using namespace std;
		 
		int main ()
		{
		  // 局部变量声明
		  int a, b;
		  int c;
		 
		  // 实际初始化
		  a = 10;
		  b = 20;
		  c = a + b;
		 
		  cout << c;
		 
		  return 0;
		}
- 在函数参数的定义中声明的变量，称为形式参数。
- 在所有函数外部声明的变量，称为全局变量。全局变量可以被任何函数访问。也就是说，全局变量一旦声明，在整个程序中都是可用的。下面的实例使用了全局变量和局部变量：

	#include <iostream>
	using namespace std;
	// 全局变量声明
	int g;
	int main ()
	{
	  // 局部变量声明
	  int a, b;
	  // 实际初始化
	  a = 10;
	  b = 20;
	  g = a + b;
	  cout << g;
	  return 0;
	}
	在程序中，局部变量和全局变量的名称可以相同，但是在函数内，局部变量的值会覆盖全局变量的值。

- 初始化局部变量和全局变量

	当局部变量被定义时，系统不会对其初始化，您必须自行对其初始化。定义全局变量时，系统会自动初始化为下列值：
	
		数据类型		初始化默认值
		int			0
		char		'\0'
		float		0
		double		0
		pointer		NULL
	正确地初始化变量是一个良好的编程习惯，否则有时候程序可能会产生意想不到的结果。
##8.C++ 常量
常量是固定值，在程序执行期间不会改变。这些固定的值，又叫做字面量。在定义后不能进行修改。常量可以是任何的基本数据类型，可分为整型数字、浮点数字、字符、字符串和布尔值。
- 整数常量。整数常量可以是十进制、八进制或十六进制的常量。前缀指定基数：0x 或 0X 表示十六进制，0 表示八进制，不带前缀则默认表示十进制。整数常量也可以带一个后缀，后缀是 U 和 L 的组合，U 表示无符号整数（unsigned），L 表示长整数（long）。后缀可以是大写，也可以是小写，U 和 L 的顺序任意。如：

	212         // 合法的
	215u        // 合法的
	0xFeeL      // 合法的
	078         // 非法的：8 不是八进制的数字
	032UU       // 非法的：不能重复后缀
- 浮点常量。	浮点常量由整数部分、小数点、小数部分和指数部分组成。您可以使用小数形式或者指数形式来表示浮点常量。

	当使用小数形式表示时，必须包含整数部分、小数部分，或同时包含两者。当使用指数形式表示时， 必须包含小数点、指数，或同时包含两者。带符号的指数是用 e 或 E 引入的。
	
	下面列举几个浮点常量的实例：
		3.14159       // 合法的 
		314159E-5L    // 合法的 
		510E          // 非法的：不完整的指数
		210f          // 非法的：没有小数或指数
		.e55          // 非法的：缺少整数或分数
- 布尔常量。布尔常量共有两个，它们都是标准的 C++ 关键字：

	true 值代表真。
	false 值代表假。
	我们不应把 true 的值看成 1，把 false 的值看成 0。
- 字符常量。字符常量是括在单引号中。如果常量以 L（仅当大写时）开头，则表示它是一个宽字符常量（例如 L'x'），此时它必须存储在 wchar_t 类型的变量中。否则，它就是一个窄字符常量（例如 'x'），此时它可以存储在 char 类型的简单变量中。

	字符常量可以是一个普通的字符（例如 'x'）、一个转义序列（例如 '\t'），或一个通用的字符（例如 '\u02C0'）。
	
	在 C++ 中，有一些特定的字符，当它们前面有反斜杠时，它们就具有特殊的含义，被用来表示如换行符（\n）或制表符（\t）等。下表列出了一些这样的转义序列码：

		转义序列	含义
		\\	\ 字符
		\'	' 字符
		\"	" 字符
		\?	? 字符
		\a	警报铃声
		\b	退格键
		\f	换页符
		\n	换行符
		\r	回车
		\t	水平制表符
		\v	垂直制表符
		\ooo	一到三位的八进制数
		\xhh . . .	一个或多个数字的十六进制数
		下面的实例显示了一些转义序列字符：

	实例

		#include <iostream>
		using namespace std;
		 
		int main()
		{
		   cout << "Hello\tWorld\n\n";
		   return 0;
		}
- 字符串常量。字符串字面值或常量是括在双引号 "" 中的。一个字符串包含类似于字符常量的字符：普通的字符、转义序列和通用的字符。

	您可以使用空格做分隔符，把一个很长的字符串常量进行分行。
	
	下面的实例显示了一些字符串常量。下面这三种形式所显示的字符串是相同的。
	
		"hello, dear"
		"hello, \
		dear"
		"hello, " "d" "ear"
###8.1 定义常量
在 C++ 中，有两种简单的定义常量的方式：

	使用 #define 预处理器。
	使用 const 关键字。
- #define 预处理器下面是使用 #define 预处理器定义常量的形式：

		#define identifier value
具体请看下面的实例：

	#include <iostream>
	using namespace std;
	#define LENGTH 10   
	#define WIDTH  5
	#define NEWLINE '\n'
	int main()
	{
	   int area;  
	   area = LENGTH * WIDTH;
	   cout << area;
	   cout << NEWLINE;
	   return 0;
	}
- const 关键字您可以使用 const 前缀声明指定类型的常量，如下所示：

		const type variable = value;
具体请看下面的实例：

		#include <iostream>
		using namespace std;
		 
		int main()
		{
		   const int  LENGTH = 10;
		   const int  WIDTH  = 5;
		   const char NEWLINE = '\n';
		   int area;  
		   
		   area = LENGTH * WIDTH;
		   cout << area;
		   cout << NEWLINE;
		   return 0;
		}

把常量定义为大写字母形式
##9.C++ 修饰符类型
C++ 允许在 char、int 和 double 数据类型前放置修饰符。修饰符用于改变基本类型的含义，所以它更能满足各种情境的需求。下面列出了数据类型修饰符：signed，unsigned，long，short

修饰符 signed、unsigned、long 和 short 可应用于整型，signed 和 unsigned 可应用于字符型，long 可应用于双精度型。

修饰符 signed 和 unsigned 也可以作为 long 或 short 修饰符的前缀。例如：unsigned long int。

C++ 允许使用速记符号来声明无符号短整数或无符号长整数。您可以不写 int，只写单词 unsigned、short 或 unsigned、long，int 是隐含的。例如，下面的两个语句都声明了无符号整型变量。

	unsigned x;
	unsigned int y;
- C++ 中的类型限定符
	
	限定符				含义
	const			const 类型的对象在程序执行期间不能被修改改变。
	volatile		修饰符 volatile 告诉编译器不需要优化volatile声明的变量，让程序可以直接从内存中读取变量。对于一般的变量编译器会对变量进行优化，将内存中的变量值放在寄存器中以加快读写效率。
	restrict		由 restrict 修饰的指针是唯一一种访问它所指向的对象的方式。只有 C99 增加了新的类型限定符 restrict。
##10.C++ 存储类
存储类定义 C++ 程序中变量/函数的范围（可见性）和生命周期。这些说明符放置在它们所修饰的类型之前。下面列出 C++ 程序中可用的存储类：auto,register,static,extern,mutable,thread_local (C++11)从 C++ 11 开始，auto 关键字不再是 C++ 存储类说明符，且 register 关键字被弃用。
- static 存储类static 存储类指示编译器在程序的生命周期内保持局部变量的存在，而不需要在每次它进入和离开作用域时进行创建和销毁。因此，使用 static 修饰局部变量可以在函数调用之间保持局部变量的值。static 修饰符也可以应用于全局变量。当 static 修饰全局变量时，会使变量的作用域限制在声明它的文件内。

		#include <iostream>
		 using namespace std;
		// 函数声明 
		void func(void);
		static int count = 10; /* 全局变量 */
		int main()
		{
		    while(count--)
		    {
		       func();
		    }
		    return 0;
		}
		// 函数定义
		void func( void )
		{
		    static int i = 5; // 局部静态变量
		    i++;
		    cout << "变量 i 为 " << i ;
		    cout << " , 变量 count 为 " << count <<endl;
			return 0;
		}
- auto auto 关键字用于两种情况：声明变量时根据初始化表达式自动推断该变量的类型、声明函数时函数返回值的占位符。

C++98标准中auto关键字用于自动变量的声明，但由于使用极少且多余，在C++11中已删除这一用法。根据初始化表达式自动推断被声明的变量的类型，如：

	auto f=3.14;      //double
	auto s("hello");  //const char*
	auto z = new auto(9); // int*
	auto x1 = 5, x2 = 5.0, x3='r';//错误，必须是初始化为同一类型
- extern 存储类

	extern 存储类用于提供一个全局变量的引用，全局变量对所有的程序文件都是可见的。当您有多个文件且定义了一个可以在其他文件中使用的全局变量或函数时，可以在其他文件中使用 extern 来得到已定义的变量或函数的引用。可以这么理解，extern 是用来在另一个文件中声明一个全局变量或函数
- mutable 存储类 mutable 说明符仅适用于类的对象。mutable 成员可以通过 const 成员函数修改。
- thread_local 存储类使用 thread_local 说明符声明的变量仅可在它在其上创建的线程上访问。 变量在创建线程时创建，并在销毁线程时销毁。 每个线程都有其自己的变量副本。

	thread_local 说明符可以与 static 或 extern 合并。
	
	可以将 thread_local 仅应用于数据声明和定义，thread_local 不能用于函数声明或定义。
	
	以下演示了可以被声明为 thread_local 的变量：
	
		thread_local int x;  // 命名空间下的全局变量
		class X
		{
		    static thread_local std::string s; // 类的static成员变量
		};
		static thread_local std::string X::s;  // X::s 是需要定义的
		 
		void foo()
		{
		    thread_local std::vector<int> v;  // 本地变量
		}
##11.C++ 运算符
运算符是一种告诉编译器执行特定的数学或逻辑操作的符号。C++ 内置了丰富的运算符，并提供了以下类型的运算符：

- 算术运算符

		运算符					描述					实例
		+	          把两个操作数相加	 		 	A + B 将得到 30
		-	    从第一个操作数中减去第二个操作数		A - B 将得到 -10
		*	          把两个操作数相乘				A * B 将得到 200
		/				分子除以分母					B / A 将得到 2
		%			取模运算符，整除后的余数			B % A 将得到 0
		++			自增运算符，整数值增加 1			A++ 将得到 11
		--			自减运算符，整数值减少 1			A-- 将得到 9
- 关系运算符 假设变量 A 的值为 10，变量 B 的值为 20，则：

		运算符			描述					实例
		==	检查两个操作数的值是否相等，如果相等则条件为真。	(A == B) 不为真。
		!=	检查两个操作数的值是否相等，如果不相等则条件为真。	(A != B) 为真。
		>	检查左操作数的值是否大于右操作数的值，如果是则条件为真。	(A > B) 不为真。
		<	检查左操作数的值是否小于右操作数的值，如果是则条件为真。	(A < B) 为真。
		>=	检查左操作数的值是否大于或等于右操作数的值，如果是则条件为真。	(A >= B) 不为真。
		<=	检查左操作数的值是否小于或等于右操作数的值，如果是则条件为真。	(A <= B) 为真。
- 逻辑运算符

	假设变量 A 的值为 1，变量 B 的值为 0，则：

		运算符	描述			实例
		&&	称为逻辑与运算符。如果两个操作数都非零，则条件为真。	(A && B) 为假。
		||	称为逻辑或运算符。如果两个操作数中有任意一个非零，则条件为真。	(A || B) 为真。
		!	称为逻辑非运算符。用来逆转操作数的逻辑状态。如果条件为真则逻辑非运算符将使其为假。	!(A && B) 为真。
- 位运算符

		位运算符
		位运算符作用于位，并逐位执行操作。&、 | 和 ^ 的真值表如下所示：
		
		p	q	p & q	p | q	p ^ q
		0	0		0		0		0
		0	1		0		1		1
		1	1		1		1		0
		1	0		0		1		1

		下表显示了 C++ 支持的位运算符。假设变量 A 的值为 60，变量 B 的值为 13，则：
		
		运算符		描述			实例
		&	如果同时存在于两个操作数中，二进制 AND 运算符复制一位到结果中。	(A & B) 将得到 12，即为 0000 1100
		|	如果存在于任一操作数中，二进制 OR 运算符复制一位到结果中。	(A | B) 将得到 61，即为 0011 1101
		^	如果存在于其中一个操作数中但不同时存在于两个操作数中，二进制异或运算符复制一位到结果中。	(A ^ B) 将得到 49，即为 0011 0001
		~	二进制补码运算符是一元运算符，具有"翻转"位效果，即0变成1，1变成0。	(~A ) 将得到 -61，即为 1100 0011，一个有符号二进制数的补码形式。
		<<	二进制左移运算符。左操作数的值向左移动右操作数指定的位数。	A << 2 将得到 240，即为 1111 0000
- 赋值运算符

		运算符			描述				实例
		=	简单的赋值运算符，把右边操作数的值赋给左边操作数	C = A + B 将把 A + B 的值赋给 C
		+=	加且赋值运算符，把右边操作数加上左边操作数的结果赋值给左边操作数	C += A 相当于 C = C + A
		-=	减且赋值运算符，把左边操作数减去右边操作数的结果赋值给左边操作数	C -= A 相当于 C = C - A
		*=	乘且赋值运算符，把右边操作数乘以左边操作数的结果赋值给左边操作数	C *= A 相当于 C = C * A
		/=	除且赋值运算符，把左边操作数除以右边操作数的结果赋值给左边操作数	C /= A 相当于 C = C / A
		%=	求模且赋值运算符，求两个操作数的模赋值给左边操作数	C %= A 相当于 C = C % A
		<<=	左移且赋值运算符	C <<= 2 等同于 C = C << 2
		>>=	右移且赋值运算符	C >>= 2 等同于 C = C >> 2
		&=	按位与且赋值运算符	C &= 2 等同于 C = C & 2
		^=	按位异或且赋值运算符	C ^= 2 等同于 C = C ^ 2
		|=	按位或且赋值运算符	C |= 2 等同于 C = C | 2
- 杂项运算符

		运算符	描述
		sizeof	sizeof 运算符返回变量的大小。例如，sizeof(a) 将返回 4，其中 a 是整数。
		Condition ? X : Y	条件运算符。如果 Condition 为真 ? 则值为 X : 否则值为 Y。
		,	逗号运算符会顺序执行一系列运算。整个逗号表达式的值是以逗号分隔的列表中的最后一个表达式的值。
		.（点）和 ->（箭头）	成员运算符用于引用类、结构和共用体的成员。
		Cast	强制转换运算符把一种数据类型转换为另一种数据类型。例如，int(2.2000) 将返回 2。
		&	指针运算符 & 返回变量的地址。例如 &a; 将给出变量的实际地址。
		*	指针运算符 * 指向一个变量。例如，*var; 将指向变量 var。

- C++ 中的运算符优先级

	表将按运算符优先级从高到低列出各个运算符，具有较高优先级的运算符出现在表格的上面，具有较低优先级的运算符出现在表格的下面。在表达式中，较高优先级的运算符会优先被计算。
	
		类别 			运算符 								结合性 
		后缀 	() [] -> . ++ - -  							从左到右 
		一元 	+ - ! ~ ++ - - (type)* & sizeof 			从右到左 
		乘除 	* / % 										从左到右 
		加减 	+ - 										从左到右 
		移位 	<< >> 										从左到右 
		关系 	< <= > >= 									从左到右 
		相等 	== != 										从左到右 
		位与 AND 	& 										从左到右 
		位异或 XOR 	^ 										从左到右 
		位或 OR 	| 											从左到右 
		逻辑与 AND 	&& 										从左到右 
		逻辑或 OR 	|| 										从左到右 
		条件 	?: 											从右到左 
		赋值 	= += -= *= /= %=>>= <<= &= ^= |= 			从右到左 
		逗号 	, 											从左到右 
##12.C++ 循环
- C++ 编程语言提供了以下几种循环类型。

		循环类型				描述
		while 循环		当给定条件为真时，重复语句或语句组。它会在执行循环主体之前测试条件。
		for 			循环	多次执行一个语句序列，简化管理循环变量的代码。
		do...while 循环	除了它是在循环主体结尾测试条件外，其他与 while 语句类似。
		嵌套循环			您可以在 while、for 或 do..while 循环内使用一个或多个循环。
- 循环控制语句

		控制语句			描述
		break 语句		终止 loop 或 switch 语句，程序流将继续执行紧接着 loop 或 switch 的下一条语句。
		continue 语句	引起循环跳过主体的剩余部分，立即重新开始测试条件。
		goto 语句		将控制转移到被标记的语句。但是不建议在程序中使用 goto 语句。
- 无限循环

 	如果条件永远不为假，则循环将变成无限循环。for 循环在传统意义上可用于实现无限循环。由于构成循环的三个表达式中任何一个都不是必需的，您可以将某些条件表达式留空来构成一个无限循环。
- while 循环

	C++ 中 while 循环的语法：

		while(condition)
		{
		   statement(s);
		}
	在这里，statement(s) 可以是一个单独的语句，也可以是几个语句组成的代码块。condition 可以是任意的表达式，当为任意非零值时都为真。当条件为真时执行循环。

	当条件为假时，程序流将继续执行紧接着循环的下一条语句。

	流程图![](http://www.runoob.com/wp-content/uploads/2014/09/cpp_while_loop.png)
-  for 循环

	C++ 中 for 循环的语法：

		for ( init; condition; increment )
		{
		   statement(s);
		}
	下面是 for 循环的控制流：

	1. init 会首先被执行，且只会执行一次。这一步允许您声明并初始化任何循环控制变量。您也可以不在这里写任何语句，只要有一个分号出现即可。
	2. 接下来，会判断 condition。如果为真，则执行循环主体。如果为假，则不执行循环主体，且控制流会跳转到紧接着 for 循环的下一条语句。
	3. 在执行完 for 循环主体后，控制流会跳回上面的 increment 语句。该语句允许您更新循环控制变量。该语句可以留空，只要在条件后有一个分号出现即可。
	4. 条件再次被判断。如果为真，则执行循环，这个过程会不断重复（循环主体，然后增加步值，再然后重新判断条件）。在条件变为假时，for 循环终止。
	流程图![](http://www.runoob.com/wp-content/uploads/2015/01/cpp_for_loop.png)
- do...while 循环

	不像 for 和 while 循环，它们是在循环头部测试循环条件。do...while 循环是在循环的尾部检查它的条件。do...while 循环与 while 循环类似，但是 do...while 循环会确保至少执行一次循环。

	C++ 中 do...while 循环的语法：

		do
		{
		   statement(s);
		
		}while( condition );
	请注意，条件表达式出现在循环的尾部，所以循环中的 statement(s) 会在条件被测试之前至少执行一次。
	
	如果条件为真，控制流会跳转回上面的 do，然后重新执行循环中的 statement(s)。这个过程会不断重复，直到给定条件变为假为止。

	流程图![](http://www.runoob.com/wp-content/uploads/2014/09/cpp_do_while_loop.jpg)
##13.C++ 判断
判断结构要求程序员指定一个或多个要评估或测试的条件，以及条件为真时要执行的语句（必需的）和条件为假时要执行的语句（可选的）。

下面是大多数编程语言中典型的判断结构的一般形式：![](http://www.runoob.com/wp-content/uploads/2015/12/if.png)

- 判断语句

	C++ 编程语言提供了以下类型的判断语句。点击链接查看每个语句的细节。
	
		语句								描述
		if 语句				一个 if 语句 由一个布尔表达式后跟一个或多个语句组成。
		if...else 语句		一个 if 语句 后可跟一个可选的 else 语句，else 语句在布尔表达式为假时执行。
		嵌套 if 语句			您可以在一个 if 或 else if 语句内使用另一个 if 或 else if 语句。
		switch 语句			一个 switch 语句允许测试一个变量等于多个值时的情况。
		嵌套 switch 语句		您可以在一个 switch 语句内使用另一个 switch 语句。
- ? : 运算符

	我们已经在前面的章节中讲解了 条件运算符 ? :，可以用来替代 if...else 语句。它的一般形式如下：
	
			Exp1 ? Exp2 : Exp3;
	其中，Exp1、Exp2 和 Exp3 是表达式。请注意，冒号的使用和位置。
	
	? 表达式的值是由 Exp1 决定的。如果 Exp1 为真，则计算 Exp2 的值，结果即为整个 ? 表达式的值。如果 Exp1 为假，则计算 Exp3 的值，结果即为整个 ? 表达式的值。
- if 语句

	一个 if 语句 由一个布尔表达式后跟一个或多个语句组成。C++ 中 if 语句的语法：
	
		if(boolean_expression)
		{
		   // 如果布尔表达式为真将执行的语句
		}
	如果布尔表达式为 true，则 if 语句内的代码块将被执行。如果布尔表达式为 false，则 if 语句结束后的第一组代码（闭括号后）将被执行。
	
	C 语言把任何非零和非空的值假定为 true，把零或 null 假定为 false。
	![](http://www.runoob.com/wp-content/uploads/2014/09/if_statement.jpg)
- if...else 语句

	一个 if 语句 后可跟一个可选的 else 语句，else 语句在布尔表达式为假时执行。C++ 中 if...else 语句的语法：
	
		if(boolean_expression)
		{
		   // 如果布尔表达式为真将执行的语句
		}
		else
		{
		   // 如果布尔表达式为假将执行的语句
		}
	如果布尔表达式为 true，则执行 if 块内的代码。如果布尔表达式为 false，则执行 else 块内的代码。
	
	流程图![](http://www.runoob.com/wp-content/uploads/2014/09/if_else_statement.jpg)
-switch 语句

	允许测试一个变量等于多个值时的情况。每个值称为一个 case，且被测试的变量会对每个 switch case 进行检查。
	
	语法
		C++ 中 switch 语句的语法：
		
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
	
	1. switch 语句中的 expression 必须是一个整型或枚举类型，或者是一个 class 类型，其中 class 有一个单一的转换函数将其转换为整型或枚举类型。
	2. 在一个 switch 中可以有任意数量的 case 语句。每个 case 后跟一个要比较的值和一个冒号。
	3. case 的 constant-expression 必须与 switch 中的变量具有相同的数据类型，且必须是一个常量或字面量。
	4. 当被测试的变量等于 case 中的常量时，case 后跟的语句将被执行，直到遇到 break 语句为止。
	5. 当遇到 break 语句时，switch 终止，控制流将跳转到 switch 语句后的下一行。
	6. 不是每一个 case 都需要包含 break。如果 case 语句不包含 break，控制流将会 继续 后续的 case，直到遇到 break 为止。
	7. 一个 switch 语句可以有一个可选的 default case，出现在 switch 的结尾。default case 可用于在上面所有 case 都不为真时执行一个任务。default case 中的 break 语句不是必需的。
	流程图![](http://www.runoob.com/wp-content/uploads/2014/09/switch_statement.jpg)
##14.C++ 函数
函数是一组一起执行一个任务的语句。每个 C++ 程序都至少有一个函数，即主函数 main() ，所有简单的程序都可以定义其他额外的函数。您可以把代码划分到不同的函数中。如何划分代码到不同的函数中是由您来决定的，但在逻辑上，划分通常是根据每个函数执行一个特定的任务来进行的。函数声明告诉编译器函数的名称、返回类型和参数。函数定义提供了函数的实际主体。C++ 标准库提供了大量的程序可以调用的内置函数。例如，函数 strcat() 用来连接两个字符串，函数 memcpy() 用来复制内存到另一个位置。
- 定义函数

		返回类型 函数名称( 参数 )
		{
		   函数主体
		}
	- 返回类型：一个函数可以返回一个值。return_type 是函数返回的值的数据类型。有些函数执行所需的操作而不返回值，在这种情况下，return_type 是关键字 void。
	- 函数名称：这是函数的实际名称。函数名和参数列表一起构成了函数签名。
	- 参数：参数就像是占位符。当函数被调用时，您向参数传递一个值，这个值被称为实际参数。参数列表包括函数参数的类型、顺序、数量。参数是可选的，也就是说，函数可能不包含参数。
	- 函数主体：函数主体包含一组定义函数执行任务的语句。

- 函数声明  函数声明会告诉编译器函数名称及如何调用函数。函数的实际主体可以单独定义。

	函数声明包括以下几个部分：
	
		return_type function_name( parameter list );
	针对上面定义的函数 max()，以下是函数声明：
	
		int max(int num1, int num2);
	在函数声明中，参数的名称并不重要，只有参数的类型是必需的，因此下面也是有效的声明：
	
		int max(int, int);
	当您在一个源文件中定义函数且在另一个文件中调用函数时，函数声明是必需的。在这种情况下，您应该在调用函数的文件顶部声明函数。
-调用函数

	创建 C++ 函数时，会定义函数做什么，然后通过调用函数来完成已定义的任务。
	
	当程序调用函数时，程序控制权会转移给被调用的函数。被调用的函数执行已定义的任务，当函数的返回语句被执行时，或到达函数的结束括号时，会把程序控制权交还给主程序。
	
	调用函数时，传递所需参数，如果函数返回一个值，则可以存储返回值。例如：
	
		#include <iostream>
		using namespace std;
		// 函数声明
		int max(int num1, int num2);
		int main ()
		{
		   // 局部变量声明
		   int a = 100;
		   int b = 200;
		   int ret;
		   // 调用函数来获取最大值
		   ret = max(a, b);
		   cout << "Max value is : " << ret << endl;
		   return 0;
		}
		// 函数返回两个数中较大的那个数
		int max(int num1, int num2) 
		{
		   // 局部变量声明
		   int result;
		   if (num1 > num2)
		      result = num1;
		   else
		      result = num2;
		   return result; 
		}
- 函数参数

	如果函数要使用参数，则必须声明接受参数值的变量。这些变量称为函数的形式参数。
	
	形式参数就像函数内的其他局部变量，在进入函数时被创建，退出函数时被销毁。
	
	当调用函数时，有两种向函数传递参数的方式：
	
		调用类型	描述
		传值调用	该方法把参数的实际值复制给函数的形式参数。在这种情况下，修改函数内的形式参数对实际参数没有影响。
		指针调用	该方法把参数的地址复制给形式参数。在函数内，该地址用于访问调用中要用到的实际参数。这意味着，修改形式参数会影响实际参数。
		引用调用	该方法把参数的引用复制给形式参数。在函数内，该引用用于访问调用中要用到的实际参数。这意味着，修改形式参数会影响实际参数。
	默认情况下，C++ 使用传值调用来传递参数。一般来说，这意味着函数内的代码不能改变用于调用函数的参数。
- 参数的默认值

	当您定义一个函数，您可以为参数列表中后边的每一个参数指定默认值。当调用函数时，如果实际参数的值留空，则使用这个默认值。
	
	这是通过在函数定义中使用赋值运算符来为参数赋值的。调用函数时，如果未传递参数的值，则会使用默认值，如果指定了值，则会忽略默认值，使用传递的值。
- Lambda 函数与表达式

	C++11 提供了对匿名函数的支持,称为 Lambda 函数(也叫 Lambda 表达式)。
	Lambda 表达式把函数看作对象。Lambda 表达式可以像对象一样使用，比如可以将它们赋给变量和作为参数传递，还可以像函数一样对其求值。
	
	Lambda 表达式本质上与函数声明非常类似。Lambda 表达式具体形式如下:
	
		[capture](parameters)->return-type{body}
	例如：
	
		[](int x, int y){ return x < y ; }
	如果没有返回值可以表示为：
	
		[capture](parameters){body}
	例如：
	
		[]{ ++global_x; } 
	在一个更为复杂的例子中，返回类型可以被明确的指定如下：
	
		[](int x, int y) -> int { int z = x + y; return z + x; }
	本例中，一个临时的参数 z 被创建用来存储中间结果。如同一般的函数，z 的值不会保留到下一次该不具名函数再次被调用时。
	
	如果 lambda 函数没有传回值（例如 void），其返回类型可被完全忽略。
	
	在Lambda表达式内可以访问当前作用域的变量，这是Lambda表达式的闭包（Closure）行为。 与JavaScript闭包不同，C++变量传递有传值和传引用的区别。可以通过前面的[]来指定：
	
		[]      // 沒有定义任何变量。使用未定义变量会引发错误。
		[x, &y] // x以传值方式传入（默认），y以引用方式传入。
		[&]     // 任何被使用到的外部变量都隐式地以引用方式加以引用。
		[=]     // 任何被使用到的外部变量都隐式地以传值方式加以引用。
		[&, x]  // x显式地以传值方式加以引用。其余变量以引用方式加以引用。
		[=, &z] // z显式地以引用方式加以引用。其余变量以传值方式加以引用。
	另外有一点需要注意。对于[=]或[&]的形式，lambda 表达式可以直接使用 this 指针。但是，对于[]的形式，如果要使用 this 指针，必须显式传入：
	
	[this]() { this->someFunc(); }();
##15.C++ 数字
通常，当我们需要用到数字时，我们会使用原始的数据类型，如 int、short、long、float 和 double 等等。
- C++ 定义数字 综合实例：

		#include <iostream>
		using namespace std;
		 
		int main ()
		{
		   // 数字定义
		   short  s;
		   int    i;
		   long   l;
		   float  f;
		   double d;
		   
		   // 数字赋值
		   s = 10;      
		   i = 1000;    
		   l = 1000000; 
		   f = 230.47;  
		   d = 30949.374;
		   
		   // 数字输出
		   cout << "short  s :" << s << endl;
		   cout << "int    i :" << i << endl;
		   cout << "long   l :" << l << endl;
		   cout << "float  f :" << f << endl;
		   cout << "double d :" << d << endl;
		 
		   return 0;
		}
- C++ 数学运算

	在 C++ 中，除了可以创建各种函数，还包含了各种有用的函数供您使用。这些函数写在标准 C 和 C++ 库中，叫做内置函数。您可以在程序中引用这些函数。
	
	C++ 内置了丰富的数学函数，可对各种数字进行运算。下表列出了 C++ 中一些有用的内置的数学函数。
	
	为了利用这些函数，您需要引用数学头文件 <cmath>。

		序号	函数 & 描述
		1	double cos(double);该函数返回弧度角（double 型）的余弦。
		2	double sin(double);该函数返回弧度角（double 型）的正弦。
		3	double tan(double);该函数返回弧度角（double 型）的正切。
		4	double log(double);该函数返回参数的自然对数。
		5	double pow(double, double);假设第一个参数为 x，第二个参数为 y，则该函数返回 x 的 y 次方。
		6	double hypot(double, double);该函数返回两个参数的平方总和的平方根，也就是说，参数为一个直角三角形的两个直角边，函数会返回斜边的长度。
		7	double sqrt(double);该函数返回参数的平方根。
		8	int abs(int);该函数返回整数的绝对值。
		9	double fabs(double);该函数返回任意一个十进制数的绝对值。
		10	double floor(double);该函数返回一个小于或等于传入参数的最大整数。
	下面是一个关于数学运算的简单实例：

		#include <iostream>
		#include <cmath>
		using namespace std;
		 
		int main ()
		{
		   // 数字定义
		   short  s = 10;
		   int    i = -1000;
		   long   l = 100000;
		   float  f = 230.47;
		   double d = 200.374;
		 
		   // 数学运算
		   cout << "sin(d) :" << sin(d) << endl;
		   cout << "abs(i)  :" << abs(i) << endl;
		   cout << "floor(d) :" << floor(d) << endl;
		   cout << "sqrt(f) :" << sqrt(f) << endl;
		   cout << "pow( d, 2) :" << pow(d, 2) << endl;
		 
		   return 0;
		}
- C++ 随机数

	在许多情况下，需要生成随机数。关于随机数生成器，有两个相关的函数。一个是 rand()，该函数只返回一个伪随机数。生成随机数之前必须先调用 srand() 函数。
	
	下面是一个关于生成随机数的简单实例。实例中使用了 time() 函数来获取系统时间的秒数，通过调用 rand() 函数来生成随机数：
	
		#include <iostream>
		#include <ctime>
		#include <cstdlib>
		 
		using namespace std;
		 
		int main ()
		{
		   int i,j;
		 
		   // 设置种子
		   srand( (unsigned)time( NULL ) );
		 
		   /* 生成 10 个随机数 */
		   for( i = 0; i < 10; i++ )
		   {
		      // 生成实际的随机数
		      j= rand();
		      cout <<"随机数： " << j << endl;
		   }
		 
		   return 0;
		}
##16.C++ 数组
C++ 支持数组数据结构，它可以存储一个固定大小的相同类型元素的顺序集合。数组是用来存储一系列数据，但它往往被认为是一系列相同类型的变量。数组中的特定元素可以通过索引访问。
- 声明数组

	在 C++ 中要声明一个数组，需要指定元素的类型和元素的数量，如下所示：
	
		type arrayName [ arraySize ];
	这叫做一维数组。arraySize 必须是一个大于零的整数常量，type 可以是任意有效的 C++ 数据类型。例如，要声明一个类型为 double 的包含 10 个元素的数组 balance，声明语句如下：
	
		double balance[10];
- 初始化数组

	在 C++ 中，您可以逐个初始化数组，也可以使用一个初始化语句，如下所示：
	
		double balance[5] = {1000.0, 2.0, 3.4, 7.0, 50.0};
	大括号 { } 之间的值的数目不能大于我们在数组声明时在方括号 [ ] 中指定的元素数目。
	
	如果您省略掉了数组的大小，数组的大小则为初始化时元素的个数。因此，如果：
	
		double balance[] = {1000.0, 2.0, 3.4, 7.0, 50.0};
	您将创建一个数组，它与前一个实例中所创建的数组是完全相同的。下面是一个为数组中某个元素赋值的实例：
	
		balance[4] = 50.0;
	上述的语句把数组中第五个元素的值赋为 50.0。所有的数组都是以 0 作为它们第一个元素的索引，也被称为基索引，数组的最后一个索引是数组的总大小减去 1。
- 访问数组元素

	数组元素可以通过数组名称加索引进行访问。元素的索引是放在方括号内，跟在数组名称的后边。例如：
	
		double salary = balance[9];
	上面的语句将把数组中第 10 个元素的值赋给 salary 变量。下面的实例使用了上述的三个概念，即，声明数组、数组赋值、访问数组：
	
		#include <iostream>
		using namespace std;
		 
		#include <iomanip>
		using std::setw;
		 
		int main ()
		{
		   int n[ 10 ]; // n 是一个包含 10 个整数的数组
		 
		   // 初始化数组元素          
		   for ( int i = 0; i < 10; i++ )
		   {
		      n[ i ] = i + 100; // 设置元素 i 为 i + 100
		   }
		   cout << "Element" << setw( 13 ) << "Value" << endl;
		 
		   // 输出数组中每个元素的值                     
		   for ( int j = 0; j < 10; j++ )
		   {
		      cout << setw( 7 )<< j << setw( 13 ) << n[ j ] << endl;
		   }
		 
		   return 0;
		}
在 C++ 中，数组是非常重要的，我们需要了解更多有关数组的细节。下面列出了 C++ 程序员必须清楚的一些与数组相关的重要概念：

	概念					描述
	多维数组			C++ 支持多维数组。多维数组最简单的形式是二维数组。
	指向数组的指针	您可以通过指定不带索引的数组名称来生成一个指向数组中第一个元素的指针。
	传递数组给函数	您可以通过指定不带索引的数组名称来给函数传递一个指向数组的指针。
	从函数返回数组	C++ 允许从函数返回数组。
##16.1 C++ 多维数组
多维数组声明的一般形式如下：

	type name[size1][size2]...[sizeN];
例如，下面的声明创建了一个三维 5 . 10 . 4 整型数组：

	int threedim[5][10][4];
- 二维数组

	多维数组最简单的形式是二维数组。一个二维数组，在本质上，是一个一维数组的列表。声明一个 x 行 y 列的二维整型数组，形式如下：

		type arrayName [ x ][ y ];
	其中，type 可以是任意有效的 C++ 数据类型，arrayName 是一个有效的 C++ 标识符。

	一个二维数组可以被认为是一个带有 x 行和 y 列的表格。下面是一个二维数组，包含 3 行和 4 列：
	![](http://www.runoob.com/wp-content/uploads/2014/09/two_dimensional_arrays.jpg)
	因此，数组中的每个元素是使用形式为 a[ i , j ] 的元素名称来标识的，其中 a 是数组名称，i 和 j 是唯一标识 a 中每个元素的下标。

- 初始化二维数组
	
	多维数组可以通过在括号内为每行指定值来进行初始化。下面是一个带有 3 行 4 列的数组。
	
		int a[3][4] = {  
		 {0, 1, 2, 3} ,   /*  初始化索引号为 0 的行 */
		 {4, 5, 6, 7} ,   /*  初始化索引号为 1 的行 */
		 {8, 9, 10, 11}   /*  初始化索引号为 2 的行 */
		};
	内部嵌套的括号是可选的，下面的初始化与上面是等同的：
	
		int a[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};
- 访问二维数组元素

	二维数组中的元素是通过使用下标（即数组的行索引和列索引）来访问的。例如：

		int val = a[2][3];
	上面的语句将获取数组中第 3 行第 4 个元素。您可以通过上面的示意图来进行验证。让我们来看看下面的程序，我们将使用嵌套循环来处理二维数组：

		#include <iostream>
		using namespace std;
		 
		int main ()
		{
		   // 一个带有 5 行 2 列的数组
		   int a[5][2] = { {0,0}, {1,2}, {2,4}, {3,6},{4,8}};
		 
		   // 输出数组中每个元素的值                      
		   for ( int i = 0; i < 5; i++ )
		      for ( int j = 0; j < 2; j++ )
		      {
		         cout << "a[" << i << "][" << j << "]: ";
		         cout << a[i][j]<< endl;
		      }
		 
		   return 0;
		}
##16.2	C++ 指向数组的指针
数组名是一个指向数组中第一个元素的常量指针。因此，在下面的声明中：

	double balance[50];
balance 是一个指向 &balance[0] 的指针，即数组 balance 的第一个元素的地址。因此，下面的程序片段把 p 赋值为 balance 的第一个元素的地址：

	double *p;
	double balance[10];
	
	p = balance;
使用数组名作为常量指针是合法的，反之亦然。因此，*(balance + 4) 是一种访问 balance[4] 数据的合法方式。

一旦您把第一个元素的地址存储在 p 中，您就可以使用 *p、*(p+1)、*(p+2) 等来访问数组元素。下面的实例演示了上面讨论到的这些概念：

	#include <iostream>
	using namespace std;
	 
	int main ()
	{
	   // 带有 5 个元素的双精度浮点型数组
	   double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
	   double *p;
	 
	   p = balance;
	 
	   // 输出数组中每个元素的值
	   cout << "使用指针的数组值 " << endl; 
	   for ( int i = 0; i < 5; i++ )
	   {
	       cout << "*(p + " << i << ") : ";
	       cout << *(p + i) << endl;
	   }
	 
	   cout << "使用 balance 作为地址的数组值 " << endl;
	   for ( int i = 0; i < 5; i++ )
	   {
	       cout << "*(balance + " << i << ") : ";
	       cout << *(balance + i) << endl;
	   }
	 
	   return 0;
	}
	当上面的代码被编译和执行时，它会产生下列结果：

	使用指针的数组值
	*(p + 0) : 1000
	*(p + 1) : 2
	*(p + 2) : 3.4
	*(p + 3) : 17
	*(p + 4) : 50
	使用 balance 作为地址的数组值
	*(balance + 0) : 1000
	*(balance + 1) : 2
	*(balance + 2) : 3.4
	*(balance + 3) : 17
	*(balance + 4) : 50
	在上面的实例中，p 是一个指向 double 型的指针，这意味着它可以存储一个 double 类型的变量。一旦我们有了 p 中的地址，*p 将给出存储在 p 中相应地址的值，正如上面实例中所演示的。
##16.3C++ 传递数组给函数
C++ 中您可以通过指定不带索引的数组名来传递一个指向数组的指针。

C++ 传数组给一个函数，数组类型自动转换为指针类型，因而传的实际是地址。

如果您想要在函数中传递一个一维数组作为参数，您必须以下面三种方式来声明函数形式参数，这三种声明方式的结果是一样的，因为每种方式都会告诉编译器将要接收一个整型指针。同样地，您也可以传递一个多维数组作为形式参数。

- 方式 1

	形式参数是一个指针：

		void myFunction(int *param)
		{
		.
		.
		.
		}
- 方式 2
	形式参数是一个已定义大小的数组：
	
		void myFunction(int param[10])
		{
		.
		.
		.
		}
- 方式 3
	形式参数是一个未定义大小的数组：
	
		void myFunction(int param[])
		{
		.
		.
		.
		}
实例
现在，让我们来看下面这个函数，它把数组作为参数，同时还传递了另一个参数，根据所传的参数，会返回数组中各元素的平均值：

	double getAverage(int arr[], int size)
	{
	  int    i, sum = 0;       
	  double avg;          
	
	  for (i = 0; i < size; ++i)
	  {
	    sum += arr[i];
	   }
	
	  avg = double(sum) / size;
	
	  return avg;
	}
现在，让我们调用上面的函数，如下所示：

	#include <iostream>
	using namespace std;
	 
	// 函数声明
	double getAverage(int arr[], int size);
	
	int main ()
	{
	   // 带有 5 个元素的整型数组
	   int balance[5] = {1000, 2, 3, 17, 50};
	   double avg;
	
	   // 传递一个指向数组的指针作为参数
	   avg = getAverage( balance, 5 ) ;
	 
	   // 输出返回值
	   cout << "平均值是：" << avg << endl; 
	    
	   return 0;
	}
当上面的代码被编译和执行时，它会产生下列结果：

平均值是： 214.4
您可以看到，就函数而言，数组的长度是无关紧要的，因为 C++ 不会对形式参数执行边界检查。
###16.4C++ 从函数返回数组
C++ 不允许返回一个完整的数组作为函数的参数。但是，您可以通过指定不带索引的数组名来返回一个指向数组的指针。

如果您想要从函数返回一个一维数组，您必须声明一个返回指针的函数，如下：

	int * myFunction()
	{
	.
	.
	.
	}
另外，C++ 不支持在函数外返回局部变量的地址，除非定义局部变量为 static 变量。

现在，让我们来看下面的函数，它会生成 10 个随机数，并使用数组来返回它们，具体如下：

实例
	#include <iostream>
	#include <cstdlib>
	#include <ctime>
	 
	using namespace std;
	 
	// 要生成和返回随机数的函数
	int * getRandom( )
	{
	  static int  r[10];
	 
	  // 设置种子
	  srand( (unsigned)time( NULL ) );
	  for (int i = 0; i < 10; ++i)
	  {
	    r[i] = rand();
	    cout << r[i] << endl;
	  }
	 
	  return r;
	}
	 
	// 要调用上面定义函数的主函数
	int main ()
	{
	   // 一个指向整数的指针
	   int *p;
	 
	   p = getRandom();
	   for ( int i = 0; i < 10; i++ )
	   {
	       cout << "*(p + " << i << ") : ";
	       cout << *(p + i) << endl;
	   }
	 
	   return 0;
	}
当上面的代码被编译和执行时，它会产生下列结果：

	624723190
	1468735695
	807113585
	976495677
	613357504
	1377296355
	1530315259
	1778906708
	1820354158
	667126415
	*(p + 0) : 624723190
	*(p + 1) : 1468735695
	*(p + 2) : 807113585
	*(p + 3) : 976495677
	*(p + 4) : 613357504
	*(p + 5) : 1377296355
	*(p + 6) : 1530315259
	*(p + 7) : 1778906708
	*(p + 8) : 1820354158
	*(p + 9) : 667126415
##17.C++ 字符串
C++ 提供了以下两种类型的字符串表示形式：

	C 风格字符串
	C++ 引入的 string 类类型
- C 风格字符串

	C 风格的字符串起源于 C 语言，并在 C++ 中继续得到支持。字符串实际上是使用 null 字符 '\0' 终止的一维字符数组。因此，一个以 null 结尾的字符串，包含了组成字符串的字符。

	下面的声明和初始化创建了一个 "Hello" 字符串。由于在数组的末尾存储了空字符，所以字符数组的大小比单词 "Hello" 的字符数多一个。

		char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
	依据数组初始化规则，您可以把上面的语句写成以下语句：

		char greeting[] = "Hello";
	以下是 C/C++ 中定义的字符串的内存表示：
	![](http://www.runoob.com/wp-content/uploads/2014/08/string_representation.jpg)
	C++ 编译器会在初始化数组时，自动把 '\0' 放在字符串的末尾。让我们尝试输出上面的字符串：

	实例
		#include <iostream>
		 
		using namespace std;
		 
		int main ()
		{
		   char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
		 
		   cout << "Greeting message: ";
		   cout << greeting << endl;
		 
		   return 0;
		}
	当上面的代码被编译和执行时，它会产生下列结果：

		Greeting message: Hello
C++ 中有大量的函数用来操作以 null 结尾的字符串：supports a wide range of functions that manipulate null-terminated strings:

	序号			函数 & 目的
	1	strcpy(s1, s2);复制字符串 s2 到字符串 s1。
	2	strcat(s1, s2);连接字符串 s2 到字符串 s1 的末尾。
	3	strlen(s1);返回字符串 s1 的长度。
	4	strcmp(s1, s2);如果 s1 和 s2 是相同的，则返回 0；如果 s1<s2 则返回值小于 0；如果 s1>s2 则返回值大于 0。
	5	strchr(s1, ch);返回一个指针，指向字符串 s1 中字符 ch 的第一次出现的位置。
	6	strstr(s1, s2);返回一个指针，指向字符串 s1 中字符串 s2 的第一次出现的位置。
下面的实例使用了上述的一些函数：实例

	#include <iostream>
	#include <cstring>
	 
	using namespace std;
	 
	int main ()
	{
	   char str1[11] = "Hello";
	   char str2[11] = "World";
	   char str3[11];
	   int  len ;
	 
	   // 复制 str1 到 str3
	   strcpy( str3, str1);
	   cout << "strcpy( str3, str1) : " << str3 << endl;
	 
	   // 连接 str1 和 str2
	   strcat( str1, str2);
	   cout << "strcat( str1, str2): " << str1 << endl;
	 
	   // 连接后，str1 的总长度
	   len = strlen(str1);
	   cout << "strlen(str1) : " << len << endl;
	 
	   return 0;
	}
当上面的代码被编译和执行时，它会产生下列结果：

	strcpy( str3, str1) : Hello
	strcat( str1, str2): HelloWorld
	strlen(str1) : 10
- C++ 中的 String 类
C++ 标准库提供了 string 类类型，支持上述所有的操作，另外还增加了其他更多的功能。我们将学习 C++ 标准库中的这个类，现在让我们先来看看下面这个实例：

现在您可能还无法透彻地理解这个实例，因为到目前为止我们还没有讨论类和对象。所以现在您可以只是粗略地看下这个实例，等理解了面向对象的概念之后再回头来理解这个实例。

	实例
	#include <iostream>
	#include <string>
	 
	using namespace std;
	 
	int main ()
	{
	   string str1 = "Hello";
	   string str2 = "World";
	   string str3;
	   int  len ;
	 
	   // 复制 str1 到 str3
	   str3 = str1;
	   cout << "str3 : " << str3 << endl;
	 
	   // 连接 str1 和 str2
	   str3 = str1 + str2;
	   cout << "str1 + str2 : " << str3 << endl;
	 
	   // 连接后，str3 的总长度
	   len = str3.size();
	   cout << "str3.size() :  " << len << endl;
	 
	   return 0;
	}
当上面的代码被编译和执行时，它会产生下列结果：

	str3 : Hello
	str1 + str2 : HelloWorld
	str3.size() :  10
##18.C++ 指针
通过指针，可以简化一些 C++ 编程任务的执行，还有一些任务，如动态内存分配，没有指针是无法执行的。每一个变量都有一个内存位置，每一个内存位置都定义了可使用连字号（&）运算符访问的地址，它表示了在内存中的一个地址。请看下面的实例，它将输出定义的变量地址：

	#include <iostream>
	 
	using namespace std;
	 
	int main ()
	{
	   int  var1;
	   char var2[10];
	 
	   cout << "var1 变量的地址： ";
	   cout << &var1 << endl;
	 
	   cout << "var2 变量的地址： ";
	   cout << &var2 << endl;
	 
	   return 0;
	}
当上面的代码被编译和执行时，它会产生下列结果：
	
	var1 变量的地址： 0xbfebd5c0
	var2 变量的地址： 0xbfebd5b6
- 什么是指针？

	指针是一个变量，其值为另一个变量的地址，即，内存位置的直接地址。就像其他变量或常量一样，您必须在使用指针存储其他变量地址之前，对其进行声明。指针变量声明的一般形式为：

		type *var-name;
	在这里，type 是指针的基类型，它必须是一个有效的 C++ 数据类型，var-name 是指针变量的名称。用来声明指针的星号 * 与乘法中使用的星号是相同的。但是，在这个语句中，星号是用来指定一个变量是指针。以下是有效的指针声明：

		int    *ip;    /* 一个整型的指针 */
		double *dp;    /* 一个 double 型的指针 */
		float  *fp;    /* 一个浮点型的指针 */
		char   *ch;    /* 一个字符型的指针 */
	所有指针的值的实际数据类型，不管是整型、浮点型、字符型，还是其他的数据类型，都是一样的，都是一个代表内存地址的长的十六进制数。不同数据类型的指针之间唯一的不同是，指针所指向的变量或常量的数据类型不同。
- C++ 中使用指针

	使用指针时会频繁进行以下几个操作：定义一个指针变量、把变量地址赋值给指针、访问指针变量中可用地址的值。这些是通过使用一元运算符 * 来返回位于操作数所指定地址的变量的值。下面的实例涉及到了这些操作：

		#include <iostream>
		 
		using namespace std;
		 
		int main ()
		{
		   int  var = 20;   // 实际变量的声明
		   int  *ip;        // 指针变量的声明
		 
		   ip = &var;       // 在指针变量中存储 var 的地址
		 
		   cout << "Value of var variable: ";
		   cout << var << endl;
		 
		   // 输出在指针变量中存储的地址
		   cout << "Address stored in ip variable: ";
		   cout << ip << endl;
		 
		   // 访问指针中地址的值
		   cout << "Value of *ip variable: ";
		   cout << *ip << endl;
		 
		   return 0;
		}
	当上面的代码被编译和执行时，它会产生下列结果：

		Value of var variable: 20
		Address stored in ip variable: 0xbfc601ac
		Value of *ip variable: 20
###18.1Null 指针
在变量声明的时候，如果没有确切的地址可以赋值，为指针变量赋一个 NULL 值是一个良好的编程习惯。赋为 NULL 值的指针被称为空指针。

NULL 指针是一个定义在标准库中的值为零的常量。请看下面的程序：

	#include <iostream>
	
	using namespace std;
	
	int main ()
	{
	   int  *ptr = NULL;
	
	   cout << "ptr 的值是 " << ptr ;
	 
	   return 0;
	}
当上面的代码被编译和执行时，它会产生下列结果：

	ptr 的值是 0
在大多数的操作系统上，程序不允许访问地址为 0 的内存，因为该内存是操作系统保留的。然而，内存地址 0 有特别重要的意义，它表明该指针不指向一个可访问的内存位置。但按照惯例，如果指针包含空值（零值），则假定它不指向任何东西。

如需检查一个空指针，您可以使用 if 语句，如下所示：
	
	if(ptr)     /* 如果 ptr 非空，则完成 */
	if(!ptr)    /* 如果 ptr 为空，则完成 */
因此，如果所有未使用的指针都被赋予空值，同时避免使用空指针，就可以防止误用一个未初始化的指针。很多时候，未初始化的变量存有一些垃圾值，导致程序难以调试。
###18.2指针的算术运算
指针是一个用数值表示的地址。因此，您可以对指针执行算术运算。可以对指针进行四种算术运算：++、--、+、-。

假设 ptr 是一个指向地址 1000 的整型指针，是一个 32 位的整数，让我们对该指针执行下列的算术运算：

	ptr++
在执行完上述的运算之后，ptr 将指向位置 1004，因为 ptr 每增加一次，它都将指向下一个整数位置，即当前位置往后移 4 个字节。这个运算会在不影响内存位置中实际值的情况下，移动指针到下一个内存位置。如果 ptr 指向一个地址为 1000 的字符，上面的运算会导致指针指向位置 1001，因为下一个字符位置是在 1001。
- 递增一个指针
	我们喜欢在程序中使用指针代替数组，因为变量指针可以递增，而数组不能递增，因为数组是一个常量指针。下面的程序递增变量指针，以便顺序访问数组中的每一个元素：
	
		#include <iostream>
		 
		using namespace std;
		const int MAX = 3;
		 
		int main ()
		{
		   int  var[MAX] = {10, 100, 200};
		   int  *ptr;
		 
		   // 指针中的数组地址
		   ptr = var;
		   for (int i = 0; i < MAX; i++)
		   {
		      cout << "Address of var[" << i << "] = ";
		      cout << ptr << endl;
		 
		      cout << "Value of var[" << i << "] = ";
		      cout << *ptr << endl;
		 
		      // 移动到下一个位置
		      ptr++;
		   }
		   return 0;
		}
	当上面的代码被编译和执行时，它会产生下列结果：
	
		Address of var[0] = 0xbfa088b0
		Value of var[0] = 10
		Address of var[1] = 0xbfa088b4
		Value of var[1] = 100
		Address of var[2] = 0xbfa088b8
		Value of var[2] = 200
- 递减一个指针。同样地，对指针进行递减运算，即把值减去其数据类型的字节数
- 指针的比较

	指针可以用关系运算符进行比较，如 ==、< 和 >。如果 p1 和 p2 指向两个相关的变量，比如同一个数组中的不同元素，则可对 p1 和 p2 进行大小比较。

	下面的程序修改了上面的实例，只要变量指针所指向的地址小于或等于数组的最后一个元素的地址 &var[MAX - 1]，则把变量指针进行递增：

		#include <iostream>
		 
		using namespace std;
		const int MAX = 3;
		 
		int main ()
		{
		   int  var[MAX] = {10, 100, 200};
		   int  *ptr;
		 
		   // 指针中第一个元素的地址
		   ptr = var;
		   int i = 0;
		   while ( ptr <= &var[MAX - 1] )
		   {
		      cout << "Address of var[" << i << "] = ";
		      cout << ptr << endl;
		 
		      cout << "Value of var[" << i << "] = ";
		      cout << *ptr << endl;
		 
		      // 指向上一个位置
		      ptr++;
		      i++;
		   }
		   return 0;
		}
	当上面的代码被编译和执行时，它会产生下列结果：

		Address of var[0] = 0xbfce42d0
		Value of var[0] = 10
		Address of var[1] = 0xbfce42d4
		Value of var[1] = 100
		Address of var[2] = 0xbfce42d8
		Value of var[2] = 200
###18.3C++ 指针 vs 数组
指针和数组是密切相关的。事实上，指针和数组在很多情况下是可以互换的。例如，一个指向数组开头的指针，可以通过使用指针的算术运算或数组索引来访问数组。请看下面的程序：

	#include <iostream>
	 
	using namespace std;
	const int MAX = 3;
	 
	int main ()
	{
	   int  var[MAX] = {10, 100, 200};
	   int  *ptr;
	 
	   // 指针中的数组地址
	   ptr = var;
	   for (int i = 0; i < MAX; i++)
	   {
	      cout << "var[" << i << "]的内存地址为 ";
	      cout << ptr << endl;
	 
	      cout << "var[" << i << "] 的值为 ";
	      cout << *ptr << endl;
	 
	      // 移动到下一个位置
	      ptr++;
	   }
	   return 0;
	}
当上面的代码被编译和执行时，它会产生下列结果：

	var[0]的内存地址为 0x7fff59707adc
	var[0] 的值为 10
	var[1]的内存地址为 0x7fff59707ae0
	var[1] 的值为 100
	var[2]的内存地址为 0x7fff59707ae4
	var[2] 的值为 200
然而，指针和数组并不是完全互换的。例如，请看下面的程序：

	#include <iostream>
	 
	using namespace std;
	const int MAX = 3;
	 
	int main ()
	{
	   int  var[MAX] = {10, 100, 200};
	 
	   for (int i = 0; i < MAX; i++)
	   {
	      *var = i;    // 这是正确的语法
	      var++;       // 这是不正确的
	   }
	   return 0;
	}
把指针运算符 * 应用到 var 上是完全可以的，但修改 var 的值是非法的。这是因为 var 是一个指向数组开头的常量，不能作为左值。

由于一个数组名对应一个指针常量，只要不改变数组的值，仍然可以用指针形式的表达式。例如，下面是一个有效的语句，把 var[2] 赋值为 500：

	*(var + 2) = 500;
上面的语句是有效的，且能成功编译，因为 var 未改变。
###18.4C++ 指针数组
把 ptr 声明为一个数组，由 MAX 个整数指针组成。因此，ptr 中的每个元素，都是一个指向 int 值的指针。下面的实例用到了三个整数，它们将存储在一个指针数组中，如下所示：

	#include <iostream>
	 
	using namespace std;
	const int MAX = 3;
	 
	int main ()
	{
	   int  var[MAX] = {10, 100, 200};
	   int *ptr[MAX];
	 
	   for (int i = 0; i < MAX; i++)
	   {
	      ptr[i] = &var[i]; // 赋值为整数的地址
	   }
	   for (int i = 0; i < MAX; i++)
	   {
	      cout << "Value of var[" << i << "] = ";
	      cout << *ptr[i] << endl;
	   }
	   return 0;
	}
当上面的代码被编译和执行时，它会产生下列结果：

	Value of var[0] = 10
	Value of var[1] = 100
	Value of var[2] = 200
您也可以用一个指向字符的指针数组来存储一个字符串列表，如下：

	#include <iostream>
	 
	using namespace std;
	const int MAX = 4;
	 
	int main ()
	{
	 const char *names[MAX] = {
	                   "Zara Ali",
	                   "Hina Ali",
	                   "Nuha Ali",
	                   "Sara Ali",
	   };
	 
	   for (int i = 0; i < MAX; i++)
	   {
	      cout << "Value of names[" << i << "] = ";
	      cout << names[i] << endl;
	   }
	   return 0;
	}
当上面的代码被编译和执行时，它会产生下列结果：

	Value of names[0] = Zara Ali
	Value of names[1] = Hina Ali
	Value of names[2] = Nuha Ali
	Value of names[3] = Sara Ali
###18.5指向指针的指针（多级间接寻址）
指向指针的指针是一种多级间接寻址的形式，或者说是一个指针链。通常，一个指针包含一个变量的地址。当我们定义一个指向指针的指针时，第一个指针包含了第二个指针的地址，第二个指针指向包含实际值的位置。

C++ 中指向指针的指针
一个指向指针的指针变量必须如下声明，即在变量名前放置两个星号。例如，下面声明了一个指向 int 类型指针的指针：

	int **var;
当一个目标值被一个指针间接指向到另一个指针时，访问这个值需要使用两个星号运算符，如下面实例所示：

实例
	#include <iostream>
	 
	using namespace std;
	 
	int main ()
	{
	    int  var;
	    int  *ptr;
	    int  **pptr;
	 
	    var = 3000;
	 
	    // 获取 var 的地址
	    ptr = &var;
	 
	    // 使用运算符 & 获取 ptr 的地址
	    pptr = &ptr;
	 
	    // 使用 pptr 获取值
	    cout << "var 值为 :" << var << endl;
	    cout << "*ptr 值为:" << *ptr << endl;
	    cout << "**pptr 值为:" << **pptr << endl;
	 
	    return 0;
	}
当上面的代码被编译和执行时，它会产生下列结果：
	
	var 值为 :3000
	*ptr 值为:3000
	**pptr 值为:3000
###18.6传递指针给函数
C++ 允许您传递指针给函数，只需要简单地声明函数参数为指针类型即可。

下面的实例中，我们传递一个无符号的 long 型指针给函数，并在函数内改变这个值：

实例
	#include <iostream>
	#include <ctime>
	 
	using namespace std;
	void getSeconds(unsigned long *par);
	 
	int main ()
	{
	   unsigned long sec;
	   getSeconds( &sec );
	   // 输出实际值
	   cout << "Number of seconds :" << sec << endl;
	   return 0;
	}
	void getSeconds(unsigned long *par)
	{
	   // 获取当前的秒数
	   *par = time( NULL );
	   return;
	}
当上面的代码被编译和执行时，它会产生下列结果：

Number of seconds :1294450468
能接受指针作为参数的函数，也能接受数组作为参数，如下所示：

实例
	#include <iostream>
	using namespace std;
	// 函数声明
	double getAverage(int *arr, int size);
	int main ()
	{
	   // 带有 5 个元素的整型数组
	   int balance[5] = {1000, 2, 3, 17, 50};
	   double avg;
	   // 传递一个指向数组的指针作为参数
	   avg = getAverage( balance, 5 ) ;
	   // 输出返回值
	   cout << "Average value is: " << avg << endl; 
	   return 0;
	}
	double getAverage(int *arr, int size)
	{
	  int    i, sum = 0;       
	  double avg;          
	  for (i = 0; i < size; ++i)
	  {
	    sum += arr[i];
	   }
	  avg = double(sum) / size;
	  return avg;
	}
当上面的代码被编译和执行时，它会产生下列结果：

	Average value is: 214.4
###18.7从函数返回指针
C++ 允许您从函数返回指针。为了做到这点，您必须声明一个返回指针的函数，如下所示：

	int * myFunction()
	{
	.
	.
	.
	}
另外，C++ 不支持在函数外返回局部变量的地址，除非定义局部变量为 static 变量。

现在，让我们来看下面的函数，它会生成 10 个随机数，并使用表示指针的数组名（即第一个数组元素的地址）来返回它们，具体如下：

	#include <iostream>
	#include <ctime>
	#include <cstdlib>
	 
	using namespace std;
	 
	// 要生成和返回随机数的函数
	int * getRandom( )
	{
	  static int  r[10];
	 
	  // 设置种子
	  srand( (unsigned)time( NULL ) );
	  for (int i = 0; i < 10; ++i)
	  {
	    r[i] = rand();
	    cout << r[i] << endl;
	  }
	 
	  return r;
	}
	 
	// 要调用上面定义函数的主函数
	int main ()
	{
	   // 一个指向整数的指针
	   int *p;
	 
	   p = getRandom();
	   for ( int i = 0; i < 10; i++ )
	   {
	       cout << "*(p + " << i << ") : ";
	       cout << *(p + i) << endl;
	   }
	 
	   return 0;
	}
当上面的代码被编译和执行时，它会产生下列结果：

	624723190
	1468735695
	807113585
	976495677
	613357504
	1377296355
	1530315259
	1778906708
	1820354158
	667126415
	*(p + 0) : 624723190
	*(p + 1) : 1468735695
	*(p + 2) : 807113585
	*(p + 3) : 976495677
	*(p + 4) : 613357504
	*(p + 5) : 1377296355
	*(p + 6) : 1530315259
	*(p + 7) : 1778906708
	*(p + 8) : 1820354158
	*(p + 9) : 667126415
##19.C++ 引用
引用变量是一个别名，也就是说，它是某个已存在变量的另一个名字。一旦把引用初始化为某个变量，就可以使用该引用名称或变量名称来指向变量。

- C++ 引用 vs 指针 引用很容易与指针混淆，它们之间有三个主要的不同：

	1. 不存在空引用。引用必须连接到一块合法的内存。
	2. 一旦引用被初始化为一个对象，就不能被指向到另一个对象。指针可以在任何时候指向到另一个对象。
	3. 引用必须在创建时被初始化。指针可以在任何时间被初始化。
- C++ 中创建引用

	试想变量名称是变量附属在内存位置中的标签，您可以把引用当成是变量附属在内存位置中的第二个标签。因此，您可以通过原始变量名称或引用来访问变量的内容。例如：
	
		int i = 17;
	我们可以为 i 声明引用变量，如下所示：
	
		int&  r = i;
		double& s = d;
	在这些声明中，& 读作引用。因此，第一个声明可以读作 "r 是一个初始化为 i 的整型引用"，第二个声明可以读作 "s 是一个初始化为 d 的 double 型引用"。下面的实例使用了 int 和 double 引用：

		#include <iostream> 
		using namespace std;
		int main ()
		{
		   // 声明简单的变量
		   int    i;
		   double d;
		   // 声明引用变量
		   int&    r = i;
		   double& s = d;
		   i = 5;
		   cout << "Value of i : " << i << endl;
		   cout << "Value of i reference : " << r  << endl;
		   d = 11.7;
		   cout << "Value of d : " << d << endl;
		   cout << "Value of d reference : " << s  << endl;
		   return 0;
		}
	当上面的代码被编译和执行时，它会产生下列结果：

		Value of i : 5
		Value of i reference : 5
		Value of d : 11.7
		Value of d reference : 11.7
引用通常用于函数参数列表和函数返回值。下面列出了 C++ 程序员必须清楚的两个与 C++ 引用相关的重要概念：

	概念						描述
	把引用作为参数	C++ 支持把引用作为参数传给函数，这比传一般的参数更安全。
	把引用作为返回值	可以从 C++ 函数中返回引用，就像返回其他数据类型一样。
- 把引用作为参数	
		
		#include <iostream>
		using namespace std;
		 
		// 函数声明
		void swap(int& x, int& y);
		 
		int main ()
		{
		   // 局部变量声明
		   int a = 100;
		   int b = 200;
		 
		   cout << "交换前，a 的值：" << a << endl;
		   cout << "交换前，b 的值：" << b << endl;
		 
		   /* 调用函数来交换值 */
		   swap(a, b);
		 
		   cout << "交换后，a 的值：" << a << endl;
		   cout << "交换后，b 的值：" << b << endl;
		 
		   return 0;
		}
		 
		// 函数定义
		void swap(int& x, int& y)
		{
		   int temp;
		   temp = x; /* 保存地址 x 的值 */
		   x = y;    /* 把 y 赋值给 x */
		   y = temp; /* 把 x 赋值给 y  */
		  
		   return;
		}
	当上面的代码被编译和执行时，它会产生下列结果：

		交换前，a 的值： 100
		交换前，b 的值： 200
		交换后，a 的值： 200
		交换后，b 的值： 100
- 把引用作为返回值

	通过使用引用来替代指针，会使 C++ 程序更容易阅读和维护。C++ 函数可以返回一个引用，方式与返回一个指针类似。
	当函数返回一个引用时，则返回一个指向返回值的隐式指针。这样，函数就可以放在赋值语句的左边。例如，请看下面这个简单的程序：

		#include <iostream>
		using namespace std;
		double vals[] = {10.1, 12.6, 33.1, 24.1, 50.0};
		double& setValues( int i )
		{
		  return vals[i];   // 返回第 i 个元素的引用
		}
		// 要调用上面定义函数的主函数
		int main ()
		{
		   cout << "改变前的值" << endl;
		   for ( int i = 0; i < 5; i++ )
		   {
		       cout << "vals[" << i << "] = ";
		       cout << vals[i] << endl;
		   }
		   setValues(1) = 20.23; // 改变第 2 个元素
		   setValues(3) = 70.8;  // 改变第 4 个元素
		   cout << "改变后的值" << endl;
		   for ( int i = 0; i < 5; i++ )
		   {
		       cout << "vals[" << i << "] = ";
		       cout << vals[i] << endl;
		   }
		   return 0;
		}
	当上面的代码被编译和执行时，它会产生下列结果：
		
		改变前的值
		vals[0] = 10.1
		vals[1] = 12.6
		vals[2] = 33.1
		vals[3] = 24.1
		vals[4] = 50
		改变后的值
		vals[0] = 10.1
		vals[1] = 20.23
		vals[2] = 33.1
		vals[3] = 70.8
		vals[4] = 50
	当返回一个引用时，要注意被引用的对象不能超出作用域。所以返回一个对局部变量的引用是不合法的，但是，可以返回一个对静态变量的引用。

		int& func() {
		   int q;
		   //! return q; // 在编译时发生错误
		   static int x;
		   return x;     // 安全，x 在函数作用域外依然是有效的
		}
##20.日期 & 时间
C++ 继承了 C 语言用于日期和时间操作的结构和函数。为了使用日期和时间相关的函数和结构，需要在 C++ 程序中引用 <ctime> 头文件。

有四个与时间相关的类型：clock_t、time_t、size_t 和 tm。类型 clock_t、size_t 和 time_t 能够把系统时间和日期表示为某种整数。

结构类型 tm 把日期和时间以 C 结构的形式保存，tm 结构的定义如下：

	struct tm {
	  int tm_sec;   // 秒，正常范围从 0 到 59，但允许至 61
	  int tm_min;   // 分，范围从 0 到 59
	  int tm_hour;  // 小时，范围从 0 到 23
	  int tm_mday;  // 一月中的第几天，范围从 1 到 31
	  int tm_mon;   // 月，范围从 0 到 11
	  int tm_year;  // 自 1900 年起的年数
	  int tm_wday;  // 一周中的第几天，范围从 0 到 6，从星期日算起
	  int tm_yday;  // 一年中的第几天，范围从 0 到 365，从 1 月 1 日算起
	  int tm_isdst; // 夏令时
	}
下面是 C/C++ 中关于日期和时间的重要函数。所有这些函数都是 C/C++ 标准库的组成部分，您可以在 C++ 标准库中查看一下各个函数的细节。

	序号						函数 & 描述
	1	time_t time(time_t *time);该函数返回系统的当前日历时间，自 1970 年 1 月 1 日以来经过的秒数。如果系统没有时间，则返回 .1。
	2	char *ctime(const time_t *time);该返回一个表示当地时间的字符串指针，字符串形式 day month year hours:minutes:seconds year\n\0。
	3	struct tm *localtime(const time_t *time);该函数返回一个指向表示本地时间的 tm 结构的指针。
	4	clock_t clock(void);该函数返回程序执行起（一般为程序的开头），处理器时钟所使用的时间。如果时间不可用，则返回 .1。
	5	char * asctime ( const struct tm * time );该函数返回一个指向字符串的指针，字符串包含了 time 所指向结构中存储的信息，返回形式为：day month date hours:minutes:seconds year\n\0。
	6	struct tm *gmtime(const time_t *time);该函数返回一个指向 time 的指针，time 为 tm 结构，用协调世界时（UTC）也被称为格林尼治标准时间（GMT）表示。
	7	time_t mktime(struct tm *time);该函数返回日历时间，相当于 time 所指向结构中存储的时间。
	8	double difftime ( time_t time2, time_t time1 );该函数返回 time1 和 time2 之间相差的秒数。
	9	size_t strftime();该函数可用于格式化日期和时间为指定的格式。
- 当前日期和时间

	下面的实例获取当前系统的日期和时间，包括本地时间和协调世界时（UTC）。

		#include <iostream>
		#include <ctime>
		 
		using namespace std;
		 
		int main( )
		{
		   // 基于当前系统的当前日期/时间
		   time_t now = time(0);
		   
		   // 把 now 转换为字符串形式
		   char* dt = ctime(&now);
		 
		   cout << "本地日期和时间：" << dt << endl;
		 
		   // 把 now 转换为 tm 结构
		   tm *gmtm = gmtime(&now);
		   dt = asctime(gmtm);
		   cout << "UTC 日期和时间："<< dt << endl;
		}
	当上面的代码被编译和执行时，它会产生下列结果：

	本地日期和时间：Sat Jan  8 20:07:41 2011
	
	UTC 日期和时间：Sun Jan  9 03:07:41 2011
- 使用结构 tm 格式化时间

	tm 结构在 C/C++ 中处理日期和时间相关的操作时，显得尤为重要。tm 结构以 C 结构的形式保存日期和时间。大多数与时间相关的函数都使用了 tm 结构。下面的实例使用了 tm 结构和各种与日期和时间相关的函数。

	在练习使用结构之前，需要对 C 结构有基本的了解，并懂得如何使用箭头 -> 运算符来访问结构成员。
		
		#include <iostream>
		#include <ctime>
		using namespace std;
		int main( )
		{
		   // 基于当前系统的当前日期/时间
		   time_t now = time(0);
		   cout << "1970 到目前经过秒数:" << now << endl;
		   tm *ltm = localtime(&now);
		   // 输出 tm 结构的各个组成部分
		   cout << "年: "<< 1900 + ltm->tm_year << endl;
		   cout << "月: "<< 1 + ltm->tm_mon<< endl;
		   cout << "日: "<<  ltm->tm_mday << endl;
		   cout << "时间: "<< ltm->tm_hour << ":";
		   cout << ltm->tm_min << ":";
		   cout << ltm->tm_sec << endl;
		}
	当上面的代码被编译和执行时，它会产生下列结果：

		1970 到目前时间:1503564157
		年: 2017
		月: 8
		日: 24
		时间: 16:42:37
##21.基本的输入输出
C++ 标准库提供了一组丰富的输入/输出功能，我们将在后续的章节进行介绍。本章将讨论 C++ 编程中最基本和最常见的 I/O 操作。

C++ 的 I/O 发生在流中，流是字节序列。如果字节流是从设备（如键盘、磁盘驱动器、网络连接等）流向内存，这叫做输入操作。如果字节流是从内存流向设备（如显示屏、打印机、磁盘驱动器、网络连接等），这叫做输出操作。

I/O 库头文件
下列的头文件在 C++ 编程中很重要。

	头文件			函数和描述
	<iostream>	该文件定义了 cin、cout、cerr 和 clog 对象，分别对应于标准输入流、标准输出流、非缓冲标准错误流和缓冲标准错误流。
	<iomanip>	该文件通过所谓的参数化的流操纵器（比如 setw 和 setprecision），来声明对执行标准化 I/O 有用的服务。
	<fstream>	该文件为用户控制的文件处理声明服务。我们将在文件和流的相关章节讨论它的细节。
- 标准输出流（cout）

	预定义的对象 cout 是 iostream 类的一个实例。cout 对象"连接"到标准输出设备，通常是显示屏。cout 是与流插入运算符 << 结合使用的，如下所示：

		#include <iostream>
		using namespace std;
		int main( )
		{
		   char str[] = "Hello C++";
		   cout << "Value of str is : " << str << endl;
		}
	当上面的代码被编译和执行时，它会产生下列结果：

		Value of str is : Hello C++
	C++ 编译器根据要输出变量的数据类型，选择合适的流插入运算符来显示值。<< 运算符被重载来输出内置类型（整型、浮点型、double 型、字符串和指针）的数据项。

	流插入运算符 << 在一个语句中可以多次使用，如上面实例中所示，endl 用于在行末添加一个换行符。

- 标准输入流（cin）

	预定义的对象 cin 是 iostream 类的一个实例。cin 对象附属到标准输入设备，通常是键盘。cin 是与流提取运算符 >> 结合使用的，如下所示：

		#include <iostream>
		 
		using namespace std;
		 
		int main( )
		{
		   char name[50];
		 
		   cout << "请输入您的名称： ";
		   cin >> name;
		   cout << "您的名称是： " << name << endl;
		 
		}
	当上面的代码被编译和执行时，它会提示用户输入名称。当用户输入一个值，并按回车键，就会看到下列结果：

		请输入您的名称： cplusplus
		您的名称是： cplusplus
	C++ 编译器根据要输入值的数据类型，选择合适的流提取运算符来提取值，并把它存储在给定的变量中。

	流提取运算符 >> 在一个语句中可以多次使用，如果要求输入多个数据，可以使用如下语句：

		cin >> name >> age;
	这相当于下面两个语句：

		cin >> name;
		cin >> age;
- 标准错误流（cerr）

	预定义的对象 cerr 是 iostream 类的一个实例。cerr 对象附属到标准错误设备，通常也是显示屏，但是 cerr 对象是非缓冲的，且每个流插入到 cerr 都会立即输出。

	cerr 也是与流插入运算符 << 结合使用的，如下所示：

		#include <iostream>
		 
		using namespace std;
		 
		int main( )
		{
		   char str[] = "Unable to read....";
		 
		   cerr << "Error message : " << str << endl;
		}
	当上面的代码被编译和执行时，它会产生下列结果：

		Error message : Unable to read....
- 标准日志流（clog）

	预定义的对象 clog 是 iostream 类的一个实例。clog 对象附属到标准错误设备，通常也是显示屏，但是 clog 对象是缓冲的。这意味着每个流插入到 clog 都会先存储在缓冲在，直到缓冲填满或者缓冲区刷新时才会输出。

	clog 也是与流插入运算符 << 结合使用的，如下所示：

		#include <iostream>
		using namespace std;
		int main( )
		{
		   char str[] = "Unable to read....";
		   clog << "Error message : " << str << endl;
		}
	当上面的代码被编译和执行时，它会产生下列结果：

		Error message : Unable to read....
	通过这些小实例，我们无法区分 cout、cerr 和 clog 的差异，但在编写和执行大型程序时，它们之间的差异就变得非常明显。所以良好的编程实践告诉我们，使用 cerr 流来显示错误消息，而其他的日志消息则使用 clog 流来输出。
##22.数据结构
C/C++ 数组允许定义可存储相同类型数据项的变量，但是结构是 C++ 中另一种用户自定义的可用的数据类型，它允许您存储不同类型的数据项。

- 定义结构

	为了定义结构，您必须使用 struct 语句。struct 语句定义了一个包含多个成员的新的数据类型，struct 语句的格式如下：

		struct type_name {
		member_type1 member_name1;
		member_type2 member_name2;
		member_type3 member_name3;
		.
		.
		} object_names;
	type_name 是结构体类型的名称，member_type1 member_name1 是标准的变量定义，比如 int i; 或者 float f; 或者其他有效的变量定义。在结构定义的末尾，最后一个分号之前，您可以指定一个或多个结构变量，这是可选的。下面是声明一个结构体类型 Books，变量为 book：

		struct Books
		{
		   char  title[50];
		   char  author[50];
		   char  subject[100];
		   int   book_id;
		} book;
- 访问结构成员

	为了访问结构的成员，我们使用成员访问运算符（.）。成员访问运算符是结构变量名称和我们要访问的结构成员之间的一个句号。

	下面的实例演示了结构的用法：

		#include <iostream>
		#include <cstring>
		 
		using namespace std;
		 
		// 声明一个结构体类型 Books 
		struct Books
		{
		   char  title[50];
		   char  author[50];
		   char  subject[100];
		   int   book_id;
		};
		 
		int main( )
		{
		   Books Book1;        // 定义结构体类型 Books 的变量 Book1
		   Books Book2;        // 定义结构体类型 Books 的变量 Book2
		 
		   // Book1 详述
		   strcpy( Book1.title, "C++ 教程");
		   strcpy( Book1.author, "Runoob"); 
		   strcpy( Book1.subject, "编程语言");
		   Book1.book_id = 12345;
		 
		   // Book2 详述
		   strcpy( Book2.title, "CSS 教程");
		   strcpy( Book2.author, "Runoob");
		   strcpy( Book2.subject, "前端技术");
		   Book2.book_id = 12346;
		 
		   // 输出 Book1 信息
		   cout << "第一本书标题 : " << Book1.title <<endl;
		   cout << "第一本书作者 : " << Book1.author <<endl;
		   cout << "第一本书类目 : " << Book1.subject <<endl;
		   cout << "第一本书 ID : " << Book1.book_id <<endl;
		 
		   // 输出 Book2 信息
		   cout << "第二本书标题 : " << Book2.title <<endl;
		   cout << "第二本书作者 : " << Book2.author <<endl;
		   cout << "第二本书类目 : " << Book2.subject <<endl;
		   cout << "第二本书 ID : " << Book2.book_id <<endl;
		 
		   return 0;
		}
	实例中定义了结构体类似 Books 及其两个变量 Book1 和 Book2。当上面的代码被编译和执行时，它会产生下列结果：

		第一本书标题 : C++ 教程
		第一本书作者 : Runoob
		第一本书类目 : 编程语言
		第一本书 ID : 12345
		第二本书标题 : CSS 教程
		第二本书作者 : Runoob
		第二本书类目 : 前端技术
		第二本书 ID : 12346
- 结构作为函数参数 可以把结构作为函数参数，传参方式与其他类型的变量或指针类似。
- 指向结构的指针 

	可以定义指向结构的指针，方式与定义指向其他类型变量的指针相似，如下所示：
	
		struct Books *struct_pointer;
	现在，您可以在上述定义的指针变量中存储结构变量的地址。为了查找结构变量的地址，请把 & 运算符放在结构名称的前面，如下所示：
	
		struct_pointer = &Book1;
	为了使用指向该结构的指针访问结构的成员，您必须使用 -> 运算符，如下所示：
	
		struct_pointer->title;
- typedef 关键字

	下面是一种更简单的定义结构的方式，您可以为创建的类型取一个"别名"。例如：

		typedef struct Books
		{
		   char  title[50];
		   char  author[50];
		   char  subject[100];
		   int   book_id;
		}Books;
	现在，您可以直接使用 Books 来定义 Books 类型的变量，而不需要使用 struct 关键字。下面是实例：

		Books Book1, Book2;
	您可以使用 typedef 关键字来定义非结构类型，如下所示：
	
		typedef long int *pint32;
 
		pint32 x, y, z;
	x, y 和 z 都是指向长整型 long int 的指针。