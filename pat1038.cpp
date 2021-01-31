/*
10 总人数 
60 75 90 55 75 99 82 90 75 50 每个人的具体成绩 
3 75 90 88   查询3个人的成绩 查出指定分数有多个人 

 
3
2
0 

*/ 

#include <iostream>
#include <unordered_map>
#include <cstdio>
using namespace std;
int main(){
	unordered_map<int, int > hash;
	int N, score, k, query;
	scanf("%d", &N);
	//1.存储到哈希表中 
	for(int i = 0; i < N; i++){
		scanf("%d", &score);
		hash[score] ++;
	}
	//2.从哈希表中查询
	
	scanf("%d", &k);
	bool tag = false;
	while(k--){
		scanf("%d", &query);
		if(!tag){
			tag = true;
		}else printf(" ");
		printf("%d", hash[query]);
	} 
	return 0;
} 
