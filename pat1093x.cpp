//1. นþฯฃสýื้
#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
using namespace std;
const int N = 1e6+5;
char a[N], b[N];
int has[256];
int main(){
	memset(a, 0, sizeof(a));
	memset(b, 0, sizeof(b));
	memset(has, 0, sizeof(has));
	string stra, strb;
	getline(cin, stra);
	getline(cin, strb);
	for(int i = 0; i < stra.size(); i++){
		if(!has[stra[i]]){
			has[stra[i]] = 1;
			putchar(stra[i]);
		}
	}
	
	for(int i = 0; i < strb.size(); i++){
		if(!has[strb[i]]){
			has[strb[i]] = 1;
			putchar(strb[i]);
		}
	}
	
	return 0;
} 
