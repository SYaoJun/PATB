// 1. ÿ����ѡ������С���������ӽ��кϲ� 2. ���Ӻϲ�֮�󳤶ȼ���
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
	
	//ƴ������
	while(pq.size() >= 2){
		auto a = pq.top(); pq.pop();
		auto b = pq.top(); pq.pop();
		pq.push((a+b)/2);
	} 
	
	printf("%d\n", pq.top());
	return 0;
} 
