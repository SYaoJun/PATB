// 1. 存储每题的得分
// 2. 学生的结果和标准答案进行匹配 

#include <cstdio>
#include <cstring>

using namespace std;
const int T = 128;

int score[T], answer[T];
int main(){
	int N, M;
	memset(score, 0, sizeof(score));
	memset(answer, 0, sizeof(answer));
	scanf("%d %d", &N, &M);
	int x;
	for(int i = 0; i < M; i++){
		scanf("%d", &x);
		score[i] = x;
	}
	for(int i = 0; i < M; i++){
		scanf("%d", &x);
		answer[i] = x;
	}
	//读取学生的结果
	for(int i = 0; i < N; i++){
		int sum = 0;
		for(int j = 0; j < M; j++){
			scanf("%d", &x);
			sum += x == answer[j] ? score[j] : 0;
		}
		printf("%d\n", sum);
	} 
	return 0;
} 
