/*
1. ��ǰ17λ���м�Ȩ��� sum 
2. ��sumȡģ t = sum%11
3. ��t����ӳ�� �ж��Ƿ�����Ч�����֤ 
��ݼ��� Ctrl + R �����滻 
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
		// 1. ��ǰ17λ���м�Ȩ��� sum 
		int sum = 0;
		for(int j = 0; j < 17; j++){
			sum += (str[j]-'0')*arr[j];
		}
		// 2. ��sumȡģ t = sum%11
		int t = sum % 11;
//		cout<<t<<endl;
//		cout<<hash[t]<<endl;
		// 3. ��t����ӳ�� �ж��Ƿ�����Ч�����֤
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
