/*
1. ����ʡ�ԡ� �������εĲ����� 
2. ��������
 
ע��㣺
1. ID�����Ҫ��֤��4λ���� 
2. ���ID�Ƿ��ڲ���ѡ���� 
3. ID�Ƿ���� 
*/
#include <iostream>
#include <cstdio>
#include <cstring>
#include <unordered_map>
using namespace std;
const int N = 1e5+5;
int hash_map[N];
bool isprime(int x){
	if(x <= 1) return false;
	if(x == 2) return true;
	for(int i = 3; i < x; i++){
		if(x%i==0) return false;
	}
	return true;
}
int main(){
	memset(hash_map, -1, sizeof(hash_map));
	int n, id;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		scanf("%d", &id);
		hash_map[id] = i;
	}
	int k;
	scanf("%d", &k);
	for(int i = 0; i < k; i++){
		scanf("%d", &id);
		printf("%04d: ", id);
		if(hash_map[id]==-1){
			puts("Are you kidding?");
		}else if(hash_map[id]==0){
			puts("Checked");
		}else if(hash_map[id]==1){
			puts("Mystery Award");
			hash_map[id] = 0;
		}else if(isprime(hash_map[id])){
			puts("Minion");
			hash_map[id] = 0;
		}else{
			puts("Chocolate");
			hash_map[id] = 0;
		}
	} 
	return 0;
}



