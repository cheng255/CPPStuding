#include <iostream>
using namespace std;

//int main(){
//
//
//	//空指针
//	//1.空指针用于给指针变量进行初始化
//	//int *p = NULL;
//
//	//2.空指针是不可以访问的
//	//0~255之间的内存编号是系统占用的，因此不可以访问
//
//	
//
//
//	//野指针
//	//指针变量p指向内存地址编号为0x1100的空间
//	int *p = (int *)0x1100;
//
//	//访问野指针报错
//	cout << *p << endl;
//
//
//	//总结：空指针和野指针都不是我们申请的空间，因此不要访问
//
//	system("pause");
//	return 0;
//}

//int main(){
//	
//	int a = 10;
//	int b = 20;
//	//1.const修饰指针
//	//const int * p1 = &a;
//	//*p1 = 2;错误
//	//p1 = &b;//true
//	//cout << *p1 << endl;//20
//	//2.const修饰常量
//	//int * const p2 = &a;
//	//*p2 = 2;//正确
//	//cout << *p2 << endl;
//	//p2 = &b;//错误
//	//3.const修饰指针和常量
//	//const int * const p3 = &a;
//	//*p3 = 2;//false
//	//p3 = &b;//false
//	system("pause");
//	return 0;
//}


//指针和数组

//int main(){
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int * p = arr;
//	
//	cout << "第一个元素是" << *p << endl;
//
//	p++;
//
//	cout << "第二个元素是" << *p << endl;
//
//	//用指针遍历数组
//
//	int * p1 = arr;
//
//	for (int i = 0; i < 10; i++){
//
//		cout << "第"<< i +1 <<"个元素是" << *p1 << endl;
//
//		p1++;
//	}
//
//
//
//	system("pause");
//	return 0;
//}