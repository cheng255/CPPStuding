#include "employee.h"



Employee::Employee(int id, string name, int dId)//���캯��
{
	m_Id = id;
	m_Name = name;
	m_DeptId = dId;
}
//��ʾ������Ϣ
void Employee:: showInfo()
{
	cout << "ְ����ţ� " << m_Id << "\tְ�������� " << m_Name
		<< "\t��λ�� " << getDeptName() << "\t��λְ�� ��ɾ�����������" << endl;
}

//��ȡ��λ����
string Employee:: getDeptName()
{
	return string("Ա��");
}