//#include<iostream>
//using namespace std;
////1.�ڶ���������
//int * func()
//{
//	//����new�ؼ��֣� ���Խ����ݿ��ٵ�����
//	//ָ�� ����Ҳ�Ǿֲ�����������ջ�ϣ�ָ�뱣��������Ƿ��ڶ���
//	int * p = new int(10);
//	return p;
//
//}
////2.�ڶ�����������
//int * func1()
//{
//	int * arr = new int[10];
//
//	for (int i = 0; i < 10; i++){
//		arr[i] = i + 100;
//	}
//
//	//����
//	for (int i = 0; i < 10; i++){
//
//		cout << arr[i] << endl;
//	}
//
//	delete[] arr;//�ͷŶ�������Ҫ��[]��
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
//	//delete p;//�ͷŶ����ڴ棬
//	//cout << *p << endl;//�ٴη��ʾ��ǷǷ��������ᱨ��
//
//	func1();
//
//	system("pause");
//	return 0;
//}