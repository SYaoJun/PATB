/*
1047 ��������� (20 ��)
1. ������ - ��Ա��� �ɼ�
2. ͳ����ͬ������ܳɼ�
3. �����еĶ�������
4. ȡ��߷� 


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
