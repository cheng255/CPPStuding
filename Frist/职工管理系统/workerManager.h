#pragma once // ��ֹͷ�ļ��ظ�����
#include <iostream> 
using namespace std; // ʹ�ñ�׼�����ռ�
#include "worker.h"

#include <fstream>
#define FILENAME "empFile.txt"

class WorkerManager
{
public:

	WorkerManager();

	//չʾ�˵�
	void Show_Menu();

	//�˳�����
	void ExitSystem();

	//��Ӳ���
	void add_Emp();

	//��¼ְ������
	int m_EmpNum;

	//ְ������ָ��
	Worker ** m_EmpArray;

	//�����ļ�
	void save();

	//��־�ļ��Ƿ�Ϊ��
	bool m_FileIsEmpty;

	//ͳ���ļ�������
	int get_EmpNum();

	//��ʼ��ְ��
	void inti_Emp();

	//��ʾְ������
	void show_Emp();

	//�ж�ְ���Ƿ����  ������ڷ���ְ�����������е�λ�ã������ڷ���-1
	int isExist(int id);

	//ɾ��ְ������
	void Del_Emp();

	//�޸�ְ��
	void Mod_Emp();


	//����ְ���������
	void Sort_Emp();

	//����ְ��
	void Find_Emp();

	//���ְ��
	void Clean_File();


	~WorkerManager();



};