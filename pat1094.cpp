// 1. ÅĞ¶ÏËØÊı  2.×Ö·û´®´¦Àí 
#include <cstdio>
#include <string>
#include <iostream>
#include <cmath>
using namespace std;

typedef long long LL;
bool isprime(LL x){
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
	scanf("%d%d", &L, &K);
	string str;
	cin >> str;
	bool tag = false;
	for(int i = 0; i + K <= L; i++){
		string temp = str.substr(i, K);
		LL x = stol(temp);
		if(isprime(x)){
			cout<<temp<<endl;
			tag = true;
			break;
		}
	}
	if(!tag) cout<<"404"<<endl;
	return 0;
}
