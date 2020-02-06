//#include<iostream>
//using namespace std;
//union  Packed {
//	char i;
//	short j;
//	int k;
//	long l;
//	double d;
//};
//int main()
//{
//	cout << "sizeof(Packed) = " <<sizeof(Packed)<< endl;
//	Packed x;
//	x.i = 'c';
//	cout << x.i << endl;
//	x.d = 3.14;
//	cout << x.d << endl;
//}
/*
#include<iostream>
using namespace std;
int main()
{
	//int a[10];  //int 4字节
	//cout << "sizeof(int) = " << sizeof(int) << endl;
	//for (int i = 0; i < 10; i++)
	//	cout << "&a[" << i << "] = " << (long)&a[i] << endl;
	int a[10];
	int* ip = a;   //创建一个指针，使其在数组中自动
	for (int i = 0; i < 10; i++)
	{
		ip[i] = i * 10;
		cout << "ip = " << ip[i] << endl;
	}
}*/
/*当想给一个喊书传递数组时，命名数组以产生它的起始地址。
  如果声明一个数组为函数参数，实际上真正声明的是一个指针。*/
//#include<iostream>
//#include<string>
//using namespace std;
//void func1(int a[], int size)
//{
//	for (int i = 0; i < size; i++)
//		a[i] = i * i - i;
//}
//void func2(int* a, int size)
//{
//	for (int i = 0; i < size; i++)
//		a[i] = i * i - i;
//}
//void print(int a[], string name, int size)
//{
//	for (int i = 0; i < size; i++)
//		cout << name << "[" << i << "]=" << a[i] << endl;
//}
//int main()
//{
//	int a[5], b[5];
//	print(a, "a", 5);
//	print(b, "b", 5);
//	func1(a, 5);
//	func1(b, 5);
//	print(a, "a",5);
//	print(b, "b",5);
//	func2(a, 5);
//	func2(b, 5);
//	print(a, "a", 5);
//	print(b, "b", 5);
//}

/*指针算术用法*/
#include<iostream>
using namespace std;
#define P(EX) cout<<#EX<<":"<<EX<<endl;
int main()
{
	int a[10];
	for (int i = 0; i < 10; i++)
		a[i] = i;
	int* ip = a;
	P(*ip);
	P(*++ip);
	P(*(ip + 5));
	int* ip2 = ip + 5;
	P(*ip2);
	P(*(ip2 - 4));
	P(*--ip2);
	P(ip2 - ip);
}