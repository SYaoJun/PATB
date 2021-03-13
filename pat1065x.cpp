#include <iostream>
#include <set>
#include <unordered_map>
using namespace std;
int main(){
	int N, M, x, y;
	scanf("%d", &N);
	set<int> st1, st2;
	unordered_map<int, int> mp;
	for(int i = 0; i < N; i++){
		scanf("%d %d", &x, &y);
		mp[x] = y;
		mp[y] = x;
	}
	
	scanf("%d", &M);
	for(int i = 0; i < M; i++){
		scanf("%d", &x);
		st1.insert(x);
	}
	for(auto u: st1){
		if(!mp.count(u)){
			st2.insert(u);
		}else if(!st1.count(mp[u])) st2.insert(u);
	}
	printf("%d\n", st2.size());
	bool first_output = true;
	for(auto u: st2){
		if(first_output){
			printf("%05d", u);
			first_output = false;
		}else{
			printf(" %05d", u);
		}
	}	
	
	return 0;
} 
