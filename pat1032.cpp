/*
1. ����ͬѧУ�ĳɼ������ۼ�
2. ���ݷ������� 
*/ 
#include <iostream>
#include <cstdio>
#include <unordered_map>
using namespace std; 
int main(){
	int n, id, score;
	unordered_map <int, int> mp;
	int ans_id = 0, ans_score = 0;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d %d", &id, &score);
		mp[id] += score;
		if(mp[id] > ans_score){
			ans_score = mp[id];
			ans_id = id;
		}
	}
	printf("%d %d\n", ans_id, ans_score);
	return 0;
}
