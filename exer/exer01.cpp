#include<iostream> 
#include<string.h> 
using namespace std;
//x星球的盛大节日为增加气氛，用30台机光器一字排开，向太空中打出光柱。
//安装调试的时候才发现，不知什么原因，相邻的两台激光器不能同时打开！
//国王很想知道，在目前这种bug存在的情况下，一共能打出多少种激光效果？
//显然，如果只有3台机器，一共可以成5种样式，即：
//全都关上（sorry, 此时无声胜有声，这也算一种）
//开一台，共3种
//开两台，只1种
//
//30台就不好算了，国王只好请你帮忙了。
//要求提交一个整数，表示30台激光器能形成的样式种数。
//注意，只提交一个整数，不要填写任何多余的内容。
// 一：
//int ans = 0;

//int x[30];//0代表关，1代表开 
//
//void dfs(int index){
//	if (index == 30){
//		ans++;
//		return;
//	}
//	if (index == 0 || x[index - 1] == 0){  //第一个灯光可以取0或1，当前灯光左边要是没开，那当前灯光可以取0和1 
//		for (int i = 0; i <= 1; i++){
//			x[index] = i;
//			dfs(index + 1);
//			x[index] = 0;
//		}
//	}
//	else{ //左边的灯光开了，那当前灯光只能关闭（取0） 
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



// 二：
//int sum;
//void dfs(int n, bool flag)		//两个参数，分别代表当前灯的序号和当前灯是开还是关 
//{
//	if (n == 30){
//		sum++;
//		return;
//	}
//	if (flag == true) dfs(n + 1, false);//如果当前灯是开的，那么相邻的灯必须关 
//	else{
//		dfs(n + 1, true);			//如果当前灯是关的的，那么相邻的灯可以开 
//		dfs(n + 1, false); 		//也可以关 
//	}
//}
//int main()
//{
//	dfs(0, false);				//注意这里不能是dfs(1,false)或dfs(0,true)，这样的意思是第一盏灯只能关不能开 
//	cout << sum << endl;
//	return 0;
//}


//  三：
//
//int dp[31];
//int dfs(int n)
//{
//	if (n<3) return dp[n];
//	return dfs(n - 1) + dfs(n - 2);
//}
//int main()
//{
//	dp[0] = 0;	//没有灯，无方案
//	dp[1] = 2;	//一盏灯，只有开或者关两种方案
//	dp[2] = 3;	//两盏灯，最多只能同时开1盏灯，那么就只有不开、开第一盏灯、开第二盏灯共三种情况 
//	cout << dfs(30) << endl;
//	return 0;
//}


