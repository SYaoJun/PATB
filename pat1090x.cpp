//1.用哈希表存储一下冲突的货箱
//2.用集合来判断冲突  
// STL库熟练度 

#include <iostream>
#include <unordered_set>
#include <cstdio>
#include <unordered_map>
#include <vector>
using namespace std;
int main(){
	int n, m;
	int x, y;
	unordered_map<int, vector<int>> mp;
	scanf("%d %d", &n, &m);
	for(int i = 0; i < n; i++){
		scanf("%d %d", &x, &y);
		mp[x].push_back(y);
		mp[y].push_back(x);
	}
	int k;
	unordered_set<int> st;
	for(int i = 0; i < m; i++){
		scanf("%d", &k);
		bool inset = false;
		st.clear();
		for(int j = 0; j < k; j++){
			scanf("%d", &x);
			if(!inset){
				for(auto u: mp[x]){
					if(st.count(u)){
						inset = true;
					}
				}
				st.insert(x);
			}
		
		}
		if(!inset){
			puts("Yes");
		}else puts("No");
	} 
	
	
	return 0;
} 
