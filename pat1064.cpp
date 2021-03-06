#include <iostream>
#include <cstdio>
#include <string>
#include <set>
using namespace std;
int main(){
	int n;
	string s;
	set<int> st;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		cin>>s;
		int sum = 0;
		for(auto c: s){
			sum += c - '0';
		}
		st.insert(sum);
	}
	cout<<st.size()<<endl;
	bool tag = false;
	for(auto x: st){
		if(!tag){
			cout<<x;
			tag = true;
		}else{
			cout<<" "<<x;
		}
	}
	return 0;
} 
