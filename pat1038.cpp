/*
10 ������ 
60 75 90 55 75 99 82 90 75 50 ÿ���˵ľ���ɼ� 
3 75 90 88   ��ѯ3���˵ĳɼ� ���ָ�������ж���� 

 
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
	//1.�洢����ϣ���� 
	for(int i = 0; i < N; i++){
		scanf("%d", &score);
		hash[score] ++;
	}
	//2.�ӹ�ϣ���в�ѯ
	
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
