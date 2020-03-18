#include <iostream>
using namespace std;
#include "workerManager.h"

#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"

//展示菜单



int main(){
	//实例化管理者对象
	WorkerManager wm;
	
	int value;//用户选择
	while (true)
	{		
		wm.Show_Menu();//加载菜单
		cin >> value;

		switch (value)
		{
		case 0://退出
			wm.ExitSystem();
			break;
		case 1://添加
			wm.add_Emp();
			break;
		case 2:
			wm.show_Emp();
			break;
		case 3:
			wm.Del_Emp();
			break;
		case 4:
			wm.Mod_Emp();
			break;

		case 5:
			wm.Find_Emp();
			break;
		case 6:
			wm.Sort_Emp();
			break;
		case 7:
			cout << "清空" << endl;
			break;
		default:
			system("cls");
		}
	}

	system("pause");
	return 0;
}