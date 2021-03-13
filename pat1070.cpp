// 1. 每次挑选长度最小的两根绳子进行合并 2. 绳子合并之后长度减半
#include <cstdio>
#include <queue>
#include <vector>

using namespace std;
int main(){
	priority_queue<int, vector<int>, greater<int>> pq;
	int N, x;
	scanf("%d", &N);
	for(int i = 0; i < N; i++){
		scanf("%d", &x);
		pq.push(x);
	}
	
	//拼接绳子
	while(pq.size() >= 2){
		auto a = pq.top(); pq.pop();
		auto b = pq.top(); pq.pop();
		pq.push((a+b)/2);
	} 
	
	printf("%d\n", pq.top());
	return 0;
} 
