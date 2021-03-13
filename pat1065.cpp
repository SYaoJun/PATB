// 1. 使用映射表存储伴侣信息
// 2. 使用集合存储落单的客人 递增

#include <cstdio>
#include <unordered_map>
#include <set>

using namespace std;

int main(){
	int N, M;
	unordered_map<int, int> mp;
	set<int> st1, st2;
	int x, y;
	scanf("%d", &N);
	for(int i = 0; i < N; i++){
		scanf("%d %d", &x, &y);
		mp[x] = y;
		mp[y] = x;
	}
	
	scanf("%d", &M);
	//存储ID 
	for(int i = 0; i < M; i++){
		scanf("%d", &x);
		st1.insert(x);
	}
	//过滤
	for(auto u: st1){
		if(!mp.count(u) || !st1.count(mp[u])){
			st2.insert(u);
		}
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
