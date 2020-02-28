//#include <iostream>
//using namespace std;
//
//int p = 2;//移动位数
//int len;//数组长度
//int max(int arr[], int len);//最大值
//int min(int arr[], int len);//最小值
//void left_one(int arr[], int len, int p);//左移
//void right_one(int arr[], int len, int p);//右移
//void Print(int arr[], int len);//遍历操作
//void Invert(int arr[], int len);//倒序
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6 };
//	len = sizeof(arr) / sizeof(arr[0]);
//
//
//	cout << "最大值为： " << max(arr, len) << endl;
//	cout << "最小值为： " << min(arr, len) << endl;
//
//	//p = 2;
//
//	//left_one(arr, len, p);
//	//cout << "左移" << p << "位后的数组 ：" << endl;
//
//	//right_one(arr, len, p);
//	//cout << "右移" << p << "位后的数组 ：" << endl;
//
//	Invert(arr, len);
//	cout << "倒序后的数组 ：" << endl;
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
////选出数组中最大值
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
////选出数组中最小值
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
////将数组左移p位
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
////将数组右移p位
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
////倒序数组元素
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
////遍历数组
//void Print(int arr[],int len){
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i] << ", ";
//	}
//}
