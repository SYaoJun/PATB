#include <cstdio>
#include <cstring>
using namespace std;
const int T= 128;
int main(){
	int N, M, x;
	int score[T], answer[T];
	memset(score, 0, sizeof(score));
	memset(answer, 0, sizeof(answer));
	scanf("%d %d", &N, &M);
	for(int i = 0; i < M; i++){
		scanf("%d", &x);
		score[i] = x;
	}
	for(int i = 0; i < M; i++){
		scanf("%d", &x);
		answer[i] = x;
	}
	for(int i = 0; i < N; i++){
		int sum = 0;
		for(int j = 0; j < M; j++){
			scanf("%d", &x);
			sum += x==answer[j]? score[j]: 0;
		}
		printf("%d\n", sum);
	}
	return 0;
} 
