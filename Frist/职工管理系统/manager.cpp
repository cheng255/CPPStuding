#include "manager.h"



Manager::Manager(int id, string name, int dId)//���캯��
{
	m_Id = id;
	m_Name = name;
	m_DeptId = dId;
}
//��ʾ������Ϣ
void Manager::showInfo()
{
	cout << "ְ����ţ� " << m_Id << "\tְ�������� " << m_Name
		<< "\t��λ�� " << getDeptName() << "\t��λְ�� ����ϰ彻�������񣬲��·������Ա��" << endl;
}
//��ȡ��λ����
string Manager::getDeptName()
{
	return string("����");
}