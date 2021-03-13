// 1. 按列求和 统计最大值 2. 记录最大值对应的下标

#include <cstdio>
#include <set>
#include <cstring>
using namespace std;
const int T = 1005;
int arr[T][T];
int main(){
	memset(arr, 0, sizeof(arr));
	int n, m;
	scanf("%d %d", &n, &m);
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	//按列统计
	int maxv = -1;
	set<int> st;
	for(int i = 0; i < n; i++){
		int temp = 0;
		for(int j = 0; j < m; j++){
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
	 // 输出
	 printf("%d\n", maxv);
	 bool first_output = true;
	 for(auto u: st){
	 	if(first_output){
	 		printf("%d", u);
	 		first_output = false;
		 }else{
		 	printf(" %d", u);
		 }
	 } 
	
	return 0;
} 
