#include <iostream> 
#include <string>
#include <cstring>
using namespace std;
int main(){
	string str;
	cin >> str;
	const int N = 16;
	int arr[N];
	//��ʼ������ 
	memset(arr, 0, sizeof arr);
	//1. �����ַ��� 
	int t = str.size();
	for(int i = 0; i < t; i++){
		arr[str[i]-'0']++;
	} 
	//3.��С������� 
	for(int i = 0; i < 10; i++){
		if(arr[i]){
			cout<<i<<":"<<arr[i]<<endl;
		}
	}
	return 0;
}
