#pragma once // 防止头文件重复包含
#include <iostream> 
using namespace std; // 使用标准命名空间
#include "worker.h"

#include <fstream>
#define FILENAME "empFile.txt"

class WorkerManager
{
public:

	WorkerManager();

	//展示菜单
	void Show_Menu();

	//退出操作
	void ExitSystem();

	//添加操作
	void add_Emp();

	//记录职工人数
	int m_EmpNum;

	//职工数组指针
	Worker ** m_EmpArray;

	//保存文件
	void save();

	//标志文件是否为空
	bool m_FileIsEmpty;

	//统计文件中人数
	int get_EmpNum();

	//初始化职工
	void inti_Emp();

	//显示职工功能
	void show_Emp();

	//判断职工是否存在  如果存在返回职工所在数组中的位置，不存在返回-1
	int isExist(int id);

	//删除职工功能
	void Del_Emp();

	//修改职工
	void Mod_Emp();


	//按照职工编号排序
	void Sort_Emp();

	//查找职工
	void Find_Emp();

	//清除职工
	void Clean_File();


	~WorkerManager();



};