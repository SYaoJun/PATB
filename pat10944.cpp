// 1. 读入数据的处理 string 2.取长度为K的数字 3. 判断质数

#include <iostream>
#include <cmath>
#include <string>
using namespace std;
bool isPrime(long long x){
	if(x <= 1) return false;
	if(x == 2) return true;
	if(x % 2 == 0) return false;
	int sq = sqrt(x);
	for(int i = 3; i <= sq; i+=2){
		if(x % i == 0) return false;
	}
	return true;
}
int main(){
	int L, K;
	cin>>L>>K;
	string str;
	cin>>str;
	bool tag = false;
	for(int i = 0; i+K <= L; i++){
		string temp = str.substr(i, K);
		long long x = stoi(temp);
		if(isPrime(x)){
			cout<<x<<endl;
			tag = true;
			break;
		}
	}
	if(!tag) cout<<"404"<<endl;
	return 0;
} 
