#include <iostream> 
#include <string>
#include <cstring>
using namespace std;

int main(){
	const int N  = 10;
	int arr[N];
	memset(arr, 0, sizeof arr);
	//1. �����鴦������ 
	for(int i = 0; i < N; i++){
		cin>>arr[i];
	}
	// 2. ��������ѡ��һ����0����С��
	string  res;
	for(int i = 1; i < N ; i++){
		if(arr[i]){
			res+= to_string(i);
			arr[i]--;
			break;
		}
	} 
	//3. ��С�����ȡ��ֵ�������ַ����� 
	for(int i = 0; i < N; i++){
		while(arr[i]){
			res += to_string(i);
			arr[i]--;
		}
	}
	cout<<res<<endl;
}
