#include <iostream>
using namespace std;
#include <string>

//1. ����ѧ���������ͣ�ѧ������(���������䣬������
//�Զ����������ͣ�һЩ���ͼ�����ɵ�һ������
//�﷨��struct �������� { ��Ա�б� }


//struct Student
//{
//	//��Ա�б�
//
//	//����
//	string name;
//	//����
//	int age;
//	//����
//	int score;
//}s3;//˳�㴴���ṹ�����

//2.ͨ��ѧ�����ʹ�������ѧ��

//int main(){
//	//2.1 struct Student s1
//	struct Student s1;
//	//��s1���Ը�ֵ��ͨ��.���ʽṹ������е�����
//	s1.name = "����";
//	s1.age = 18;
//	s1.score = 100;
//
//	cout << "������ " << s1.name << "  ���䣺 " << s1.age << "  ������ " << s1.score << endl;
//
//	//2.2 struct Student s2 = {...}
//
//	struct Student s2 = { "����", 20, 80 };
//	cout << "������ " << s2.name << "  ���䣺 " << s2.age << "  ������ " << s2.score << endl;
//	//2.3 �ڶ���ṹ��ʱ��˳�㴴���ṹ�����
//	s3.name = "����";
//	s3.age = 25;
//	s3.score = 60;
//	cout << "������ " << s3.name << "  ���䣺 " << s3.age << "  ������ " << s3.score << endl;
//	system("pause");
//	return 0;
//}

//�ṹ������������




struct Student
{
	string name;
	int age;
	int score;

};
//1.ֵ����
//void PrintStudent(Student s)
//{
//	cout << "������ " << s.name << "  ���䣺 " << s.age << "  ������ " << s.score << endl;
//
//}
//2.��ַ����
//�������е��βθ�Ϊָ�룬���Լ����ڴ�ռ䣬���Ҳ��Ḵ���µĸ�������
//void PrintStudent(Student * s)
//{
//	cout << "������ " << s -> name << "  ���䣺 " << s -> age << "  ������ " << s -> score << endl;
//}

//3 constʹ�ó���
void PrintStudent(const Student * s)//��const��ֹ�������е������
{

	//s -> age = 100;//����ʧ�ܣ���Ϊ����const����
	cout << "������ " << s->name << "  ���䣺 " << s->age << "  ������ " << s->score << endl;
}

int main(){

	Student s = {"����", 18, 100};
	//PrintStudent(s);
	PrintStudent(&s);

	system("pause");
	return 0;
}
