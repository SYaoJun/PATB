#include <iostream> 
#include <string>
#include <cstring>
using namespace std;
int main(){
	string str;
	cin >> str;
	const int N = 16;
	int arr[N];
	//初始化数组 
	memset(arr, 0, sizeof arr);
	//1. 遍历字符串 
	int t = str.size();
	for(int i = 0; i < t; i++){
		arr[str[i]-'0']++;
	} 
	//3.从小到大输出 
	for(int i = 0; i < 10; i++){
		if(arr[i]){
			cout<<i<<":"<<arr[i]<<endl;
		}
	}
	return 0;
}
