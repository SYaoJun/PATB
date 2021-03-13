// 1. 最大值  2.找到最大值对应的月饼编号。 set

#include <cstdio>
#include <set>
#include <cstring>
using namespace std;
const int T = 1005;
int arr[T][T];
int main(){
	int n, m;
	memset(arr, 0, sizeof(arr));
	scanf("%d %d", &n, &m);
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	// 按列统计最值
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
	printf("%d\n", st.size());
	printf("%d\n", maxv);
	bool tag = true;
	for(auto u: st){
		if(tag){
			printf("%d", u);
			tag = false;
		}else{
			printf(" %d", u);
		}
	} 
	return 0;
}
 
