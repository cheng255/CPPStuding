//#include<iostream>
//using namespace std;
////1.在堆区开辟数
//int * func()
//{
//	//利用new关键字， 可以将数据开辟到堆区
//	//指针 本质也是局部变量，放在栈上，指针保存的数据是放在堆上
//	int * p = new int(10);
//	return p;
//
//}
////2.在堆区开辟数组
//int * func1()
//{
//	int * arr = new int[10];
//
//	for (int i = 0; i < 10; i++){
//		arr[i] = i + 100;
//	}
//
//	//遍历
//	for (int i = 0; i < 10; i++){
//
//		cout << arr[i] << endl;
//	}
//
//	delete[] arr;//释放堆区数组要加[]，
//
//	return arr;
//
//}
//
//
//int main(){
//
//	int * p = func();
//	cout << *p << endl;
//	cout << *p << endl;
//	cout << *p << endl;
//
//	//delete p;//释放堆区内存，
//	//cout << *p << endl;//再次访问就是非法操作，会报错
//
//	func1();
//
//	system("pause");
//	return 0;
//}