#include<iostream>
using namespace std;

//int main(){
//	/*a&-a的作用：二进制数低位连续的0加上一个1组成的数
//	比如a = 12（1100），低位连续的0有两个，那么a&-a = 4（100）。*/
//	/*cout << (18 & -18) << endl;*/
//
//	system("pause");
//	return 0;
//}

//从n个球中，取m个球,有多少种取法
//int func(int n, int m){
//	if (m > n)	return 0;
//	if (m == n)	return 1;
//	if (m == 0) return 1;
//	return func(n - 1, m - 1) + func(n - 1, m);//n个球里有个特殊球x，取法划分：包不包含x
//}
//int main(){
//	int f = func(5, 3);
//	cout << f << endl;
//	system("pause");
//	return 0;
//}
//求n个元素的全排列
//abc acb bac bca cab cba

//void func(char data[], int k)
//{
//	/*for (int i = 0; i < sizeof(arr))*/
//	//cout << sizeof(data) << endl;//4
//	//cout << strlen(data) << endl;//7
//	//cout << sizeof(char) << endl;//1
//	if (k == strlen(data) - 1){
//		for (int i = 0; i < strlen(data); i++){
//			cout << data[i] << " ";
//		}
//		cout << endl;
//	}
//		
//
//	for (int i = k; i < strlen(data); i++)
//	{
//		{ int t = data[k]; data[k] = data[i]; data[i] = t; }//试探
//		func(data, k + 1);
//		{ int t = data[k]; data[k] = data[i]; data[i] = t; }//回溯
//	}
//
////}
//
//
//int main(){
//	
//	char data[] = "abcde";
//	/*cout << sizeof(data) << endl;*/
//	func(data,0);
//
//	system("pause");
//	return 0;
////}



