//#include <iostream>
//using namespace std;
//#include <string>
//
//
//class Person
//{
//
//	string name;
//	int age;
//
//public:
//	Person(){
//		
//	}
//
//	Person(string name, int age){
//		this->name = name;
//		this->age = age;
//	}
//	int  getAge(){
//		return age;
//	}
//	string getName(){
//		return name;
//	}
//	void setAge(int age){
//		this->age = age;
//	}
//	void setName(int name){
//		this->name = name;
//	}
//	//1.成员函数重载+
//	Person operator+(Person &p)
//	{
//
//		Person temp;
//		temp.age = this->age + p.age;
//		temp.name = this->name + p.name;
//
//		return temp;
//	}
//
//
//};
////全局函数重载+
////Person operator+(Person &p1, Person &p2)
//
//
//
//void test01()
//{
//	Person p1("张三",18);
//	Person p2("李四", 20);
//	//Person p3 = p1.operator+(p2);
//	Person p3 = p1 + p2;
//
//	
//
//	cout << p1.getName() << " ," << p1.getAge() << endl;
//	cout << p2.getName() << " ," << p2.getAge() << endl;
//	cout << p3.getName() << " ," << p3.getAge() << endl;
//
//}
//
//
//
//int main(){
//
//	test01();
//
//
//	system("pause");
//	return 0;
//}