#include <iostream>
using namespace std;
#include "BubbleSort.h"
#include <string>
//�������鳤��
//template<class T>
//int length(T& arr)
//{
//	return sizeof(arr) / sizeof(arr[0]);
//}
//����student
struct Student{
		
	string name;//����	
	int age;//����
	int score;//����
};
void Bubble(int a, int len, Student s[]);
void Print(Student s[], int len);


int main(){
	//���ṹ�����Ԫ��
	Student s[] = 
	{	
	{ "����", 18, 100 },
	{ "����", 20, 80 },
	{ "����", 19, 60 } 
	};
	int len = sizeof(s) / sizeof(s[0]);
	/*cout << "������ " << s[0].name << "  ���䣺 " << s[0].age << "  ������ " << s[0].score << endl;
	cout << "������ " << s[1].name << "  ���䣺 " << s[1].age << "  ������ " << s[1].score << endl;
	cout << "������ " << s[2].name << "  ���䣺 " << s[2].age << "  ������ " << s[2].score << endl;
	*/
	////��ѧ���ķ����Ž�arr����
	//int arr[100];
	//for (int i = 0; i < sizeof(s) / sizeof(s[0]); i++)
	//
	//	arr[i] = s[i].score;
	
	int a;
	cout << "1(����)/ 2(����)��ѡ��: ";
	cin >> a;
	/*Bubble(a, length(arr));*/
	if (a != 1 && a != 2)
	{
		cout << "�������" << endl;
		return 0;
	}
	Bubble(a, len, s);//����

	Print(s, len);//����

	system("pause");
	return 0;
}



//����
#include "swap.h"//д��ͷ�ļ��ﲻ������


void Bubble(int a, int len, Student s[])
{
	Student temp;
	
	if (a == 1)
	{
		//����
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
	else if (a == 2)//����
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

//��������
void Print(Student s[], int len){
	cout << "�źú������Ϊ��" << endl;
	for (int i = 0; i < len; i++)
		cout << "������ " << s[i].name << "  ���䣺 " << s[i].age << "  ������ " << s[i].score << endl;;

}


