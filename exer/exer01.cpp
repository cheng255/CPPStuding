#include<iostream> 
#include<string.h> 
using namespace std;
//x�����ʢ�����Ϊ�������գ���30̨������һ���ſ�����̫���д��������
//��װ���Ե�ʱ��ŷ��֣���֪ʲôԭ�����ڵ���̨����������ͬʱ�򿪣�
//��������֪������Ŀǰ����bug���ڵ�����£�һ���ܴ�������ּ���Ч����
//��Ȼ�����ֻ��3̨������һ�����Գ�5����ʽ������
//ȫ�����ϣ�sorry, ��ʱ����ʤ��������Ҳ��һ�֣�
//��һ̨����3��
//����̨��ֻ1��
//
//30̨�Ͳ������ˣ�����ֻ�������æ�ˡ�
//Ҫ���ύһ����������ʾ30̨���������γɵ���ʽ������
//ע�⣬ֻ�ύһ����������Ҫ��д�κζ�������ݡ�
// һ��
//int ans = 0;

//int x[30];//0�����أ�1������ 
//
//void dfs(int index){
//	if (index == 30){
//		ans++;
//		return;
//	}
//	if (index == 0 || x[index - 1] == 0){  //��һ���ƹ����ȡ0��1����ǰ�ƹ����Ҫ��û�����ǵ�ǰ�ƹ����ȡ0��1 
//		for (int i = 0; i <= 1; i++){
//			x[index] = i;
//			dfs(index + 1);
//			x[index] = 0;
//		}
//	}
//	else{ //��ߵĵƹ⿪�ˣ��ǵ�ǰ�ƹ�ֻ�ܹرգ�ȡ0�� 
//		dfs(index + 1);
//	}
//}
//
//int main(){
//	memset(x, 0, 30 * sizeof(int));
//	dfs(0);
//	cout << ans << endl;
//	return 0;
//}



// ����
//int sum;
//void dfs(int n, bool flag)		//�����������ֱ������ǰ�Ƶ���ź͵�ǰ���ǿ����ǹ� 
//{
//	if (n == 30){
//		sum++;
//		return;
//	}
//	if (flag == true) dfs(n + 1, false);//�����ǰ���ǿ��ģ���ô���ڵĵƱ���� 
//	else{
//		dfs(n + 1, true);			//�����ǰ���ǹصĵģ���ô���ڵĵƿ��Կ� 
//		dfs(n + 1, false); 		//Ҳ���Թ� 
//	}
//}
//int main()
//{
//	dfs(0, false);				//ע�����ﲻ����dfs(1,false)��dfs(0,true)����������˼�ǵ�һյ��ֻ�ܹز��ܿ� 
//	cout << sum << endl;
//	return 0;
//}


//  ����
//
//int dp[31];
//int dfs(int n)
//{
//	if (n<3) return dp[n];
//	return dfs(n - 1) + dfs(n - 2);
//}
//int main()
//{
//	dp[0] = 0;	//û�еƣ��޷���
//	dp[1] = 2;	//һյ�ƣ�ֻ�п����߹����ַ���
//	dp[2] = 3;	//��յ�ƣ����ֻ��ͬʱ��1յ�ƣ���ô��ֻ�в���������һյ�ơ����ڶ�յ�ƹ�������� 
//	cout << dfs(30) << endl;
//	return 0;
//}

