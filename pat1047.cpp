/*
1047 编程团体赛 (20 分)
1. 队伍编号 - 队员编号 成绩
2. 统计相同队伍的总成绩
3. 对所有的队伍排序
4. 取最高分 


**/
#include <iostream>
#include <cstdio>
#include <unordered_map>
using namespace std;

int main(){
	int n, x, y, score;
	int ans_x, ans_score = 0;
	unordered_map<int, int > hash;
	for(int i = 0; i < n; i++){
		scanf("%d-%d %d", &x, &y, &score);
		hash[x] +=score;
		if(hash[x] > ans_score){
			ans_score = hash[x];
			ans_x = x;
		}
	}
	printf("%d %d", ans_x, ans_score); 
	return 0;
} 
