//#include <iostream>
//using namespace std;
//
//int p = 2;//�ƶ�λ��
//int len;//���鳤��
//int max(int arr[], int len);//���ֵ
//int min(int arr[], int len);//��Сֵ
//void left_one(int arr[], int len, int p);//����
//void right_one(int arr[], int len, int p);//����
//void Print(int arr[], int len);//��������
//void Invert(int arr[], int len);//����
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6 };
//	len = sizeof(arr) / sizeof(arr[0]);
//
//
//	cout << "���ֵΪ�� " << max(arr, len) << endl;
//	cout << "��СֵΪ�� " << min(arr, len) << endl;
//
//	//p = 2;
//
//	//left_one(arr, len, p);
//	//cout << "����" << p << "λ������� ��" << endl;
//
//	//right_one(arr, len, p);
//	//cout << "����" << p << "λ������� ��" << endl;
//
//	Invert(arr, len);
//	cout << "���������� ��" << endl;
//
//
//
//	Print(arr, len);
//
//	cout << endl;
//
//	system("pause");
//	return 0;
//}
//
//
////ѡ�����������ֵ
//int max(int arr[], int len){
//
//	int m_max = arr[0];
//	for (int i = 1; i < len; i++)
//	if (arr[i] > m_max)
//	{
//		m_max = arr[i];
//	}
//	return m_max;
//
//}
////ѡ����������Сֵ
//int min(int arr[], int len){
//
//	int m_min = arr[0];
//	for (int i = 1; i < len; i++)
//	if (arr[i] < m_min)
//	{
//		m_min = arr[i];
//	}
//	return m_min;
//
//}
//
////����������pλ
//void left_one(int arr[], int len, int p){
//
//	for (int j = 0; j < p; j++)
//	for (int i = 0; i < len - 1; i++)
//	{
//		int temp = arr[0];
//		arr[0] = arr[len - 1 - i];
//		arr[len - 1 - i] = temp;
//	}
//}
////����������pλ
//void right_one(int arr[], int len, int p){
//
//	for (int j = 0; j < p; j++)
//	for (int i = 0; i < len - 1; i++)
//	{
//		int temp = arr[len - 1];
//		arr[len - 1] = arr[i];
//		arr[i] = temp;
//	}
//}
////��������Ԫ��
//void Invert(int arr[], int len)
//{
//	for (int i = 0; i < len / 2; i++)
//	{
//		int temp = arr[i];
//		arr[i] = arr[len - i - 1];
//		arr[len - i - 1] = temp;
//	}
//
//}
//
////��������
//void Print(int arr[],int len){
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i] << ", ";
//	}
//}
