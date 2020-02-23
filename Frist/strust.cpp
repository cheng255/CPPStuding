#include <iostream>
using namespace std;
#include <string>

//1. 创建学生数据类型：学生包括(姓名，年龄，分数）
//自定义数据类型，一些类型集合组成的一个类型
//语法：struct 类型名称 { 成员列表 }


//struct Student
//{
//	//成员列表
//
//	//姓名
//	string name;
//	//年龄
//	int age;
//	//分数
//	int score;
//}s3;//顺便创建结构体变量

//2.通过学生类型创建具体学生

//int main(){
//	//2.1 struct Student s1
//	struct Student s1;
//	//给s1属性赋值，通过.访问结构体变量中的属性
//	s1.name = "张三";
//	s1.age = 18;
//	s1.score = 100;
//
//	cout << "姓名： " << s1.name << "  年龄： " << s1.age << "  分数： " << s1.score << endl;
//
//	//2.2 struct Student s2 = {...}
//
//	struct Student s2 = { "李四", 20, 80 };
//	cout << "姓名： " << s2.name << "  年龄： " << s2.age << "  分数： " << s2.score << endl;
//	//2.3 在定义结构体时，顺便创建结构体变量
//	s3.name = "王五";
//	s3.age = 25;
//	s3.score = 60;
//	cout << "姓名： " << s3.name << "  年龄： " << s3.age << "  分数： " << s3.score << endl;
//	system("pause");
//	return 0;
//}

//结构体做函数参数




struct Student
{
	string name;
	int age;
	int score;

};
//1.值传递
//void PrintStudent(Student s)
//{
//	cout << "姓名： " << s.name << "  年龄： " << s.age << "  分数： " << s.score << endl;
//
//}
//2.地址传递
//将函数中的形参改为指针，可以减少内存空间，而且不会复制新的副本出来
//void PrintStudent(Student * s)
//{
//	cout << "姓名： " << s -> name << "  年龄： " << s -> age << "  分数： " << s -> score << endl;
//}

//3 const使用场景
void PrintStudent(const Student * s)//加const防止函数体中的误操作
{

	//s -> age = 100;//操作失败，因为加了const修饰
	cout << "姓名： " << s->name << "  年龄： " << s->age << "  分数： " << s->score << endl;
}

int main(){

	Student s = {"张三", 18, 100};
	//PrintStudent(s);
	PrintStudent(&s);

	system("pause");
	return 0;
}
