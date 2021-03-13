// 1. ¹şÏ£±í´æ³åÍ» Ó³Éävector
// 2. ¼¯ºÏÅĞ¶Ï³åÍ»  
// STL¿âÊìÁ·¶È

#include <cstdio>
#include <unordered_set>
#include <unordered_map>
#include <vector>
using namespace std;
int main(){
	int n, m;
	int x, y;
	scanf("%d%d", &n, &m);
	unordered_map<int, vector<int>> mp;
	unordered_set<int> st;
	for(int i = 0; i < n; i++){
		scanf("%d%d", &x, &y);
		mp[x].push_back(y);
		mp[y].push_back(x);
	}
	
	int k;
	
	for(int i = 0; i < m; i++){
		scanf("%d", &k);
		
		st.clear();
		bool tag = false;
		for(int j = 0; j < k; j++){
			scanf("%d", &x);
			if(!tag){
				for(auto u: mp[x]){
					if(st.count(u)){
						tag = true;
						break;
					}
				}
				st.insert(x);
			}
		}
		if(tag) puts("No");
		else puts("Yes");
	}
	return 0;
} 
