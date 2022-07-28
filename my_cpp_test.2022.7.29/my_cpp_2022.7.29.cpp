//c++兼容c的语法

//#include<stdio.h>
//
//int main()
//{
//	printf("hehe\n");
//
//	return 0;
//}



//#include<iostream>		//在控制台输出，相当于#include<stdio.h>
//
//using namespace std;	
//
//int main()
//{
//	cout << "hello world\n" << endl;
//
//	return 0;
//}

//namespace 定义的是一个域	，为了解决C语言命名冲突的问题

//举例 1. 在局部中
//#include<stdio.h>
//int main()
//{
//	//命名冲突
//	//C语言的库函数有scanf 和 strlen 两个函数
//	//如果想用这两个代码命名会报错
//	int scafn = 10;
//	int strlen = 20;
//
//	//C语言解决不了命名冲突
//	scanf("%d", &scanf);
//
//	printf("%d\n", scafn);
//	printf("%d\n", strlen);
//
//	return 0;
//}


//举例 2.在全局中会直接报错
//#include<stdio.h>
//
//int scafn = 10;
//int strlen = 20;
//
//int main()
//{
//
//	scanf("%d", &scanf);
//
//	printf("%d\n", scafn);
//	printf("%d\n", strlen);
//
//	return 0;
//}


//用C++写
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//namespace abc	//// 命名空间中的内容，既可以定义变量，也可以定义函数
//{
//	//定义变量
//	int scanf = 10;
//	int strlen = 20;
//	
//	//定义函数
//	int ADD(int x, int y)
//	{
//		return x + y;
//	}
//	//嵌套定义命名空间	没有限制
//	namespace N3
//	{
//		int c;
//		int d;
//		int Sub(int left, int right)
//		{
//			return left - right;
//		}
//	}
//
//}
////	namespace 定义了一个域 命名隔离
//int main()
//{
//	//默认访问局部或者全局  不会进入namespace
//	printf("%x\n", scanf);
//	printf("%x\n", strlen);
//
//	//指定访问namespace abc所创建的域
//	printf("%x\n", abc::scanf);
//	printf("%x\n", abc::strlen);
//	abc::ADD(1, 2);
//	abc::N3::Sub(10,2);
//
//	return 0;
//}

//#include<iostream>

//C++为了防止命名冲突，把库函数里面的东西都定义在一个叫做std的命名空间里面
//using namespace std;
//要使用标准库中的东西，有三种方式


//1 指定命名空间
//int main()
//{
//	std::cout << "hello world" << std::endl;
//	return 0;
//}
//缺陷	：	每个地方都要引用，最麻烦，但是最规范


//2	把std展开，相当于把库里面的东西都到全局域
//using namespace std;
//int main()
//{
//	cout << "hello world" << endl;
//	return 0;
//}
//缺陷 ：	如果自己定义的和库里面的冲突了就没办法解决 
//要想走得远，不能用这种方法
//规范的工程中不推荐用这种方法


//3 对部分库里面常用的展开	
//using std::cout;
//using std::endl;
//针对1和2折中的方案	可以用在规范的项目中


//C++的输入和输出
//#include<stdio.h>
//#include<iostream>
//// in 进		out 出  stream流  
//using std::cout;
//using std::endl;
//using std::cin;


//cout现在不用深入，后期会详细解释
//int main()
//{
//	int a = 10;
//	int* p = &a;
//
//	printf("%d,%p\n", a ,p);				//C语言按指定格式打印
//	
//	std::cout << a << "," << p << endl;	//C++自动识别类型
//
//	std::cin >> a ;
//
//	
//	printf("%d,%p\n", a, p);
//
//	return 0;
//}
//总结 cout的优势 对比C语言的printf，scafn的区别，		“自动识别类型”

//int main() {
//	char str[10];
//	int a = 10;
//
//
//	std::cin >> a;
//	std::cin >> str;
//	std::cout << a <<"," << str << endl;
//
//
//	return 0;
//}




//#include<stdio.h>
//#include<iostream>
//using namespace std;
//
//struct Person
//{
//	char name[10];
//	int age;
//};

//C++比较C方便的一点	
//int main()
//{
//	int a = 0;
//	cin >> a;					
//	cout << a << endl;			
//	scanf_s("%d\n",&a);
//	printf("%d\n",a);
//	return 0;
//}

//int main()
//{
//	struct Person P = { "小李",10 };
//
//	//C语言格式化输出爽
//	printf("name:%s\nage:%d\n",P. name,P. age);	
//	//C++较为繁琐
//	cout << "name:" << P.name <<endl<< "age:" << P.age << endl;
//
//	return 0;
//}
//			总结		哪个好用就用那个 没有规定

//C语言不允许定义同名函数
//C++可以->函数重载->函数名相同--参数不同（参数的类型不同，或者个数不同）


//int ADD(int left, int right)
//{
//	return left + right;
//}
//
//double ADD(double left, double right)
//{
//	return left + right;
//}
//
//long ADD(long left, long right)
//{
//	return left + right;
//}
//
////这个函数构成函数重载	
//int main()
//{
//	cout << ADD(1, 2) << endl;
//	cout << ADD(1.1, 2.2) << endl;
//	cout << ADD(1111, 2222) << endl;
//
//
//	return 0;
//}



//C++函数名可以一样
//void swap(int*x, int*y)
//{}
//
//void swap(double*x, double*y)
//{}
//
//int main()
//{
//	int x = 0, y = 2;
//	swap(&x, &y);
//
//	double a = 1.3, b = 3.2;
//	swap(&a, &b);
//
//	return 0;
//}


//C语言函数名不能一样
//void swapi(int* x, int* y)
//{}
//
//void swapd(double* x, double* y)
//{}
//
//int main()
//{
//	int x = 0, y = 2;
//	swapi(&x, &y);
//
//	double a = 1.3, b = 3.2;
//	swapd(&a, &b);
//
//	return 0;
//}

//	1.	这些语法是对C语言某些不好用的地方优化
//	2.	学习这样，为C++的类和对象做铺垫




int main()
{

	//b是a的别名		b是a的引用
	int a = 10;
	int& b = a;
	b = 20;
	int& c = b;
	c = 30;

	return 0;
}
//	以上的“ & ”不是取地址	 是引用/别名 ，在调试里面才是取地址