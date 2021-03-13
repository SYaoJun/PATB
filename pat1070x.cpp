#include <cstdio>
#include <queue>
#include <vector>
using namespace std;
int main(){
	int N;
	scanf("%d", &N);
	priority_queue<int, vector<int>, greater<int>> pq;
	int x;
	for(int i = 0; i < N; i++){
		scanf("%d", &x);
		pq.push(x);
	}
	
	while(pq.size() >= 2){
		auto a = pq.top(); pq.pop();
		auto b = pq.top(); pq.pop();
		pq.push((a+b)/2);
	}
	
	printf("%d", pq.top());
	return 0;
}
