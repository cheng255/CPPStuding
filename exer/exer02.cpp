#include<iostream>
using namespace std;

//int main(){
//	/*a&-a�����ã�����������λ������0����һ��1��ɵ���
//	����a = 12��1100������λ������0����������ôa&-a = 4��100����*/
//	/*cout << (18 & -18) << endl;*/
//
//	system("pause");
//	return 0;
//}

//��n�����У�ȡm����,�ж�����ȡ��
//int func(int n, int m){
//	if (m > n)	return 0;
//	if (m == n)	return 1;
//	if (m == 0) return 1;
//	return func(n - 1, m - 1) + func(n - 1, m);//n�������и�������x��ȡ�����֣���������x
//}
//int main(){
//	int f = func(5, 3);
//	cout << f << endl;
//	system("pause");
//	return 0;
//}
//��n��Ԫ�ص�ȫ����
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
//		{ int t = data[k]; data[k] = data[i]; data[i] = t; }//��̽
//		func(data, k + 1);
//		{ int t = data[k]; data[k] = data[i]; data[i] = t; }//����
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



