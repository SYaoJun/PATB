// 1. 按照行读入数据 2. 用哈希数组判重

#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>

using namespace std;

int has[256];

int main(){
	string a, b;
	getline(cin, a);
	getline(cin, b);
	memset(has, 0, sizeof(has));
	
	//输出
	for(int i = 0; i < a.size(); i++){
		if(!has[a[i]]){
			has[a[i]] = 1;
			putchar(a[i]);
		}
	} 
	
	for(int i = 0; i < b.size(); i++){
		if(!has[b[i]]){
			has[b[i]] = 1;
			putchar(b[i]);
		}
	} 
	return 0;
} 
