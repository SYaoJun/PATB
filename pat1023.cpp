#include <iostream> 
#include <string>
#include <cstring>
using namespace std;

int main(){
	const int N  = 10;
	int arr[N];
	memset(arr, 0, sizeof arr);
	//1. 用数组处理输入 
	for(int i = 0; i < N; i++){
		cin>>arr[i];
	}
	// 2. 从数组中选择一个非0的最小数
	string  res;
	for(int i = 1; i < N ; i++){
		if(arr[i]){
			res+= to_string(i);
			arr[i]--;
			break;
		}
	} 
	//3. 从小到大获取数值放入结果字符串中 
	for(int i = 0; i < N; i++){
		while(arr[i]){
			res += to_string(i);
			arr[i]--;
		}
	}
	cout<<res<<endl;
}
