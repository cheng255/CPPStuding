#include <iostream>
using namespace std;
#include "workerManager.h"

#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"

//չʾ�˵�



int main(){
	//ʵ���������߶���
	WorkerManager wm;
	
	int value;//�û�ѡ��
	while (true)
	{		
		wm.Show_Menu();//���ز˵�
		cin >> value;

		switch (value)
		{
		case 0://�˳�
			wm.ExitSystem();
			break;
		case 1://���
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
			cout << "���" << endl;
			break;
		default:
			system("cls");
		}
	}

	system("pause");
	return 0;
}