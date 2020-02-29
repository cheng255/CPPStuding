//输入n以内的所有素数（筛法）
//
//#include <iostream>
//using namespace std;
//
//#define Am 10000
//bool arr[Am];
//void prime(int n)
//{
//	memset(arr, true, sizeof(arr));
//	arr[1] = false;
//	for (int i = 2; i <= sqrt(n); i++)//必须是<=
//	{
//		if (arr[i])
//		{
//			for (int j = 2; j <= n / j; j++)
//			{
//				arr[i*j] = false;
//			}
//		}
//	}
//
//}
//int main(){
//	int n;
//	cin >> n;
//
//	prime(n);
//
//	for (int i = 2; i <= n; i++)
//	{
//		if (arr[i])
//			cout << i << endl;
//	}
//
//}