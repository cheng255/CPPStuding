#include "boss.h"



Boss::Boss(int id, string name, int dId)//���캯��
{
	m_Id = id;
	m_Name = name;
	m_DeptId = dId;
}
//��ʾ������Ϣ
void Boss::showInfo()
{
	cout << "ְ����ţ� " << m_Id << "\tְ�������� " << m_Name
		<< "\t��λ�� " << getDeptName() << "\t��λְ�� ����˾��������" << endl;
}
//��ȡ��λ����
string Boss::getDeptName()
{
	return string("�ܲ�");
}