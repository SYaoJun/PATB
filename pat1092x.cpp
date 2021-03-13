#include <iostream>
#include <cstdio>
#include <cstring>
#include <set>
using namespace std;
const int T = 1005;
int arr[T][T];
int main(){
	memset(arr, 0, sizeof(arr));
	int N, M, x;
	scanf("%d %d", &N, &M);
	for(int i = 0; i < M; i++){
		for(int j = 0; j < N; j++){
			scanf("%d", &arr[i][j]);
		}	
	}
	int maxv = -1;
	set<int> st;
	for(int i = 0; i < N; i++){
		int temp = 0;
		for(int j = 0; j < M; j++){
			temp += arr[j][i];
		}
		if(temp > maxv){
			maxv = temp;
			st.clear();
			st.insert(i+1);
		}else if(temp == maxv){
			st.insert(i+1);
		}
	}
	printf("%d\n", maxv);
	bool first_output = true;
	for(auto u: st){
		if(first_output){
			first_output = false;
			printf("%d", u);
		}else{
			printf(" %d", u);
		}
	}
	return 0;
} 
