#include <iostream>
using namespace std;
//��ת�ַ���
//string func(string s){
//
//	if (s.length() <= 1)
//		return s;
//
//	return func(s.substr(1)) + s[0];
//}
///*
//string a = "c" +"b"����д���Ǵ����
//��֮����ȷ
//*/
//int main(){
//	string s = func("abcde");
//	for (int i = 0; i < s.length(); i++)
//	cout << s[i];
//	/*string a = "dasdas";
//	string b = "adsa" + a;
//	for (int i = 0; i < b.length(); i++)
//	cout << b[i] << endl;*/
//
//	system("pause");
//	return 0;
//}
//�������
//int Yang(int m, int n){
//
//	if (n == 1) return 1;
//	if (m == n) return 1;
//
//	return Yang(m - 1, n) + Yang(m - 1, n - 1);
//}
//
//int main(){
//
//
//	for (int j = 0; j <= 8; j ++){
//
//		for (int i = 0; i <= j; i++)
//			cout << Yang(j + 1, i + 1) << " ";
//			cout << endl;
//		}
//	system("pause");
//	return 0;
//}

//�ݹ���ϰ
//m��A,n��B
//int func(int m, int n){
//
//	if (m == 0 || n == 0)
//		return 1;
//
//	return func(m - 1, n) + func(m, n - 1);
//
//
//}
//
//int main(){
//
//	cout << func(3, 4) ;//4��n,3��m
//
//
//	system("pause");
//	return 0;
//}

//���������л���
//void func(int n,int a[], int k){
//	
//	if (n <= 0){
//		for (int i = 0; i < k; i++)
//			cout << a[i] << " ";
//		cout << endl;
//		return;
//	}
//	for (int i = n; i > 0; i--){
//		if (k > 0 && i < a[k - 1]) continue;
//		a[k] = i;
//		func(n - 1, a, k + 1);
//
//	}
//		
//}
//
//int main(){
//	int a[100];
//	
//	func(6, a, 0);
//
//	system("pause");
//	return 0;
//}