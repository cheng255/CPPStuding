#include "employee.h"



Employee::Employee(int id, string name, int dId)//构造函数
{
	m_Id = id;
	m_Name = name;
	m_DeptId = dId;
}
//显示个人信息
void Employee:: showInfo()
{
	cout << "职工编号： " << m_Id << "\t职工姓名： " << m_Name
		<< "\t岗位： " << getDeptName() << "\t岗位职责： 完成经理交给的任务" << endl;
}

//获取岗位名称
string Employee:: getDeptName()
{
	return string("员工");
}