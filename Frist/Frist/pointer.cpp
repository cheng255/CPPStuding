#include <iostream>
using namespace std;

//int main(){
//
//
//	//��ָ��
//	//1.��ָ�����ڸ�ָ��������г�ʼ��
//	//int *p = NULL;
//
//	//2.��ָ���ǲ����Է��ʵ�
//	//0~255֮����ڴ�����ϵͳռ�õģ���˲����Է���
//
//	
//
//
//	//Ұָ��
//	//ָ�����pָ���ڴ��ַ���Ϊ0x1100�Ŀռ�
//	int *p = (int *)0x1100;
//
//	//����Ұָ�뱨��
//	cout << *p << endl;
//
//
//	//�ܽ᣺��ָ���Ұָ�붼������������Ŀռ䣬��˲�Ҫ����
//
//	system("pause");
//	return 0;
//}

//int main(){
//	
//	int a = 10;
//	int b = 20;
//	//1.const����ָ��
//	//const int * p1 = &a;
//	//*p1 = 2;����
//	//p1 = &b;//true
//	//cout << *p1 << endl;//20
//	//2.const���γ���
//	//int * const p2 = &a;
//	//*p2 = 2;//��ȷ
//	//cout << *p2 << endl;
//	//p2 = &b;//����
//	//3.const����ָ��ͳ���
//	//const int * const p3 = &a;
//	//*p3 = 2;//false
//	//p3 = &b;//false
//	system("pause");
//	return 0;
//}


//ָ�������

//int main(){
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int * p = arr;
//	
//	cout << "��һ��Ԫ����" << *p << endl;
//
//	p++;
//
//	cout << "�ڶ���Ԫ����" << *p << endl;
//
//	//��ָ���������
//
//	int * p1 = arr;
//
//	for (int i = 0; i < 10; i++){
//
//		cout << "��"<< i +1 <<"��Ԫ����" << *p1 << endl;
//
//		p1++;
//	}
//
//
//
//	system("pause");
//	return 0;
//}