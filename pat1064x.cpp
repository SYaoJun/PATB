// 1. �����λ ���
// 2. ʹ�ü���set �Դ���������

#include <cstdio>
#include <set>
using namespace std;

int main(){
	int N, x;
	set<int> st;
	scanf("%d", &N);
	for(int i = 0; i < N; i++){
		scanf("%d", &x);
		int sum = 0;
		do{
			sum += x%10;
			x /= 10; 
		}while(x);
		st.insert(sum);
	}
	
	//���
	printf("%d\n", st.size());
	bool first_output = false;
	for(auto s: st){
		if(!first_output){
			printf("%d", s);
			first_output = true;
		}else{
			printf(" %d", s);
		}
	} 
	
	return 0;
} 
 
