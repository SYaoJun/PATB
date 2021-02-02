/*
1. 对前17位进行加权求和 sum 
2. 对sum取模 t = sum%11
3. 对t进行映射 判断是否是有效的身份证 
快捷键： Ctrl + R 快速替换 
**/ 

#include <iostream>
#include <string>
using namespace std;
int main(){
	int arr[]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2}; 
	int hash[]={1 ,0 ,10, 9, 8, 7, 6, 5, 4, 3, 2};
	int N;
	cin >> N;
	string str;
	int count = 0;
	for(int i = 0; i < N; i++){
		cin >> str;
		bool tag = true;  
		// 1. 对前17位进行加权求和 sum 
		int sum = 0;
		for(int j = 0; j < 17; j++){
			sum += (str[j]-'0')*arr[j];
		}
		// 2. 对sum取模 t = sum%11
		int t = sum % 11;
//		cout<<t<<endl;
//		cout<<hash[t]<<endl;
		// 3. 对t进行映射 判断是否是有效的身份证
		if(str[17]=='X' && hash[t]==10 ){
			count++;
			tag = false;
		}else if(hash[t]==(str[17]-'0')){
			count++;
			tag = false;
		}
		if(tag){
			cout<<str<<endl;
		}
	}
	
	if(count == N){
		cout<<"All passed"<<endl;
	}
	return 0;
} 
