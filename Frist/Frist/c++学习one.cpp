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
//猜数字游戏
//int main(){
//
//	//添加随机数种子  作用利用当前系统时间生成随机数，防止每次随机数都一样
//
//	srand((unsigned int)time(NULL));
//	//1.系统生成随机数
//	int num = rand() % 100 + 1; //生成 0 + 1 到 99 + 1 随机数
//	//2.玩家进行猜测
//	int val = 0;
//	while (true){
//		cout << "请猜测" << endl;
//		cin >> val;
//	//3判断玩家的猜测
//
//	//猜对   退出游戏
//	//猜错   提示猜的结果   重新返回第二步
//	
//		if (val > num){
//			cout << "猜测过大" << endl;
//		}
//		else if (val < num){
//			cout << "猜测过小" << endl;
//		}
//		else{
//			cout << "猜对了" << endl;
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}

//水仙花数
//int main(){
//
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int num = 100;
//	//1.判断水仙花数
//
//	do{
//		a = num / 100;
//		b = (num / 10) % 10;
//		c = num % 10;
//		//2.输出
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

//敲桌子游戏
//int main(){
//
//	for (int i = 1; i <= 100; i++){
//
//		if (i % 7 == 0 || i % 10 == 7 || i / 10 == 7){
//			cout << ("敲桌子") << endl;
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

//两数交换
#include "swap.h"
int main(){
	int a = 6;
	int b = 8;

	swap(&a, &b);
	cout << "a = " << a << ",b = " << b << endl;


	system("pause");
	return 0;
}