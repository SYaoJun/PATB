// 1. ��δ洢���� �ṹ��  
// 2. ��β�ѯ���� �ṹ������ 

#include <cstdio>
using namespace std;
typedef long long LL;
struct stu{
	LL id;
	int real_pos;
}E[1005];

int main(){
	int N, M;
	LL id;
	int test_pos, real_pos;
	scanf("%d", &N);
	for(int i = 0; i < N; i++){
		scanf("%lld %d %d", &id, &test_pos, &real_pos);
		E[test_pos].id = id;
		E[test_pos].real_pos = real_pos;
	}
	scanf("%d", &M);
	for(int i = 0; i < M; i++){
		scanf("%d", &test_pos);
		printf("%lld %d\n", E[test_pos].id, E[test_pos].real_pos);
	}
	
	return 0;
} 
