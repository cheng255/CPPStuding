#include <iostream>
using namespace std;
#include <ctime>
//int main(){
//
//	double a = 10;
//	cout << "a = " << a << endl;
//	cin >> a;
//	cout << "a = " << a << endl;
//
//	cout << sizeof(double) << endl;
//
//
//	system("pause");
//	return 0;
//}
//��������Ϸ
//int main(){
//
//	//������������  �������õ�ǰϵͳʱ���������������ֹÿ���������һ��
//
//	srand((unsigned int)time(NULL));
//	//1.ϵͳ���������
//	int num = rand() % 100 + 1; //���� 0 + 1 �� 99 + 1 �����
//	//2.��ҽ��в²�
//	int val = 0;
//	while (true){
//		cout << "��²�" << endl;
//		cin >> val;
//	//3�ж���ҵĲ²�
//
//	//�¶�   �˳���Ϸ
//	//�´�   ��ʾ�µĽ��   ���·��صڶ���
//	
//		if (val > num){
//			cout << "�²����" << endl;
//		}
//		else if (val < num){
//			cout << "�²��С" << endl;
//		}
//		else{
//			cout << "�¶���" << endl;
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}

//ˮ�ɻ���
//int main(){
//
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int num = 100;
//	//1.�ж�ˮ�ɻ���
//
//	do{
//		a = num / 100;
//		b = (num / 10) % 10;
//		c = num % 10;
//		//2.���
//		if (a * a *a + b* b* b + c*c*c == num){
//
//			cout << num << endl;
//		}
//		num++;
//	} while (num < 1000);
//	
//	system("pause");
//	return 0;
//}

//��������Ϸ
//int main(){
//
//	for (int i = 1; i <= 100; i++){
//
//		if (i % 7 == 0 || i % 10 == 7 || i / 10 == 7){
//			cout << ("������") << endl;
//		}
//		else{
//			cout << i << endl;
//		}
//	
//	
//	}
//
//
//
//	system("pause");
//	return 0;
//}

//��������
#include "swap.h"
int main(){
	int a = 6;
	int b = 8;

	swap(&a, &b);
	cout << "a = " << a << ",b = " << b << endl;


	system("pause");
	return 0;
}