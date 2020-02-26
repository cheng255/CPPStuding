#include <iostream>
using namespace std;
#include "BubbleSort.h"
#include <string>
//计算数组长度
//template<class T>
//int length(T& arr)
//{
//	return sizeof(arr) / sizeof(arr[0]);
//}
//构建student
struct Student{
		
	string name;//姓名	
	int age;//年龄
	int score;//分数
};
void Bubble(int a, int len, Student s[]);
void Print(Student s[], int len);


int main(){
	//给结构体添加元素
	Student s[] = 
	{	
	{ "张三", 18, 100 },
	{ "李四", 20, 80 },
	{ "王五", 19, 60 } 
	};
	int len = sizeof(s) / sizeof(s[0]);
	/*cout << "姓名： " << s[0].name << "  年龄： " << s[0].age << "  分数： " << s[0].score << endl;
	cout << "姓名： " << s[1].name << "  年龄： " << s[1].age << "  分数： " << s[1].score << endl;
	cout << "姓名： " << s[2].name << "  年龄： " << s[2].age << "  分数： " << s[2].score << endl;
	*/
	////将学生的分数放进arr数组
	//int arr[100];
	//for (int i = 0; i < sizeof(s) / sizeof(s[0]); i++)
	//
	//	arr[i] = s[i].score;
	
	int a;
	cout << "1(升序)/ 2(降序)请选择: ";
	cin >> a;
	/*Bubble(a, length(arr));*/
	if (a != 1 && a != 2)
	{
		cout << "输入错误" << endl;
		return 0;
	}
	Bubble(a, len, s);//排序

	Print(s, len);//遍历

	system("pause");
	return 0;
}



//排序
#include "swap.h"//写在头文件里不起作用


void Bubble(int a, int len, Student s[])
{
	Student temp;
	
	if (a == 1)
	{
		//升序
		for (int i = 0; i < len - 1; i++)
		for (int j = 0; j < len - i - 1; j++)
		{
			if (s[j].score > s[j + 1].score)
			{
				temp = s[j];
				s[j] = s[j + 1];
				s[j + 1] = temp;
			}
			/*swap(&s[j], &s[j + 1]);*/
		}
		
	}
	else if (a == 2)//降序
	{
		for (int i = 0; i < len - 1; i++)
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (s[j].score < s[j + 1].score)
			{
				temp = s[j];
				s[j] = s[j + 1];
				s[j + 1] = temp;
			}
			/*swap(&s[j], &s[j + 1]);*/
		}
		
	}
		
	
}

//遍历操作
void Print(Student s[], int len){
	cout << "排好后的数据为：" << endl;
	for (int i = 0; i < len; i++)
		cout << "姓名： " << s[i].name << "  年龄： " << s[i].age << "  分数： " << s[i].score << endl;;

}


