//c++����c���﷨

//#include<stdio.h>
//
//int main()
//{
//	printf("hehe\n");
//
//	return 0;
//}



//#include<iostream>		//�ڿ���̨������൱��#include<stdio.h>
//
//using namespace std;	
//
//int main()
//{
//	cout << "hello world\n" << endl;
//
//	return 0;
//}

//namespace �������һ����	��Ϊ�˽��C����������ͻ������

//���� 1. �ھֲ���
//#include<stdio.h>
//int main()
//{
//	//������ͻ
//	//C���ԵĿ⺯����scanf �� strlen ��������
//	//����������������������ᱨ��
//	int scafn = 10;
//	int strlen = 20;
//
//	//C���Խ������������ͻ
//	scanf("%d", &scanf);
//
//	printf("%d\n", scafn);
//	printf("%d\n", strlen);
//
//	return 0;
//}


//���� 2.��ȫ���л�ֱ�ӱ���
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


//��C++д
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//namespace abc	//// �����ռ��е����ݣ��ȿ��Զ��������Ҳ���Զ��庯��
//{
//	//�������
//	int scanf = 10;
//	int strlen = 20;
//	
//	//���庯��
//	int ADD(int x, int y)
//	{
//		return x + y;
//	}
//	//Ƕ�׶��������ռ�	û������
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
////	namespace ������һ���� ��������
//int main()
//{
//	//Ĭ�Ϸ��ʾֲ�����ȫ��  �������namespace
//	printf("%x\n", scanf);
//	printf("%x\n", strlen);
//
//	//ָ������namespace abc����������
//	printf("%x\n", abc::scanf);
//	printf("%x\n", abc::strlen);
//	abc::ADD(1, 2);
//	abc::N3::Sub(10,2);
//
//	return 0;
//}

//#include<iostream>

//C++Ϊ�˷�ֹ������ͻ���ѿ⺯������Ķ�����������һ������std�������ռ�����
//using namespace std;
//Ҫʹ�ñ�׼���еĶ����������ַ�ʽ


//1 ָ�������ռ�
//int main()
//{
//	std::cout << "hello world" << std::endl;
//	return 0;
//}
//ȱ��	��	ÿ���ط���Ҫ���ã����鷳��������淶


//2	��stdչ�����൱�ڰѿ�����Ķ�������ȫ����
//using namespace std;
//int main()
//{
//	cout << "hello world" << endl;
//	return 0;
//}
//ȱ�� ��	����Լ�����ĺͿ�����ĳ�ͻ�˾�û�취��� 
//Ҫ���ߵ�Զ�����������ַ���
//�淶�Ĺ����в��Ƽ������ַ���


//3 �Բ��ֿ����泣�õ�չ��	
//using std::cout;
//using std::endl;
//���1��2���еķ���	�������ڹ淶����Ŀ��


//C++����������
//#include<stdio.h>
//#include<iostream>
//// in ��		out ��  stream��  
//using std::cout;
//using std::endl;
//using std::cin;


//cout���ڲ������룬���ڻ���ϸ����
//int main()
//{
//	int a = 10;
//	int* p = &a;
//
//	printf("%d,%p\n", a ,p);				//C���԰�ָ����ʽ��ӡ
//	
//	std::cout << a << "," << p << endl;	//C++�Զ�ʶ������
//
//	std::cin >> a ;
//
//	
//	printf("%d,%p\n", a, p);
//
//	return 0;
//}
//�ܽ� cout������ �Ա�C���Ե�printf��scafn������		���Զ�ʶ�����͡�

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

//C++�Ƚ�C�����һ��	
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
//	struct Person P = { "С��",10 };
//
//	//C���Ը�ʽ�����ˬ
//	printf("name:%s\nage:%d\n",P. name,P. age);	
//	//C++��Ϊ����
//	cout << "name:" << P.name <<endl<< "age:" << P.age << endl;
//
//	return 0;
//}
//			�ܽ�		�ĸ����þ����Ǹ� û�й涨

//C���Բ�������ͬ������
//C++����->��������->��������ͬ--������ͬ�����������Ͳ�ͬ�����߸�����ͬ��


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
////����������ɺ�������	
//int main()
//{
//	cout << ADD(1, 2) << endl;
//	cout << ADD(1.1, 2.2) << endl;
//	cout << ADD(1111, 2222) << endl;
//
//
//	return 0;
//}



//C++����������һ��
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


//C���Ժ���������һ��
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

//	1.	��Щ�﷨�Ƕ�C����ĳЩ�����õĵط��Ż�
//	2.	ѧϰ������ΪC++����Ͷ������̵�




int main()
{

	//b��a�ı���		b��a������
	int a = 10;
	int& b = a;
	b = 20;
	int& c = b;
	c = 30;

	return 0;
}
//	���ϵġ� & ������ȡ��ַ	 ������/���� ���ڵ����������ȡ��ַ