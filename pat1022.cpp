#include <iostream> 
#include <string>
#include <cstring>
using namespace std;
int main(){
	int a, b, d;
	cin>>a>>b;
	int sum = a + b;
	string res;
	//将10进制转换为d进制 
	cin>>d;
	do{
		res = to_string(sum%d) + res;
		sum /= d;
		
	}while(sum);
	
	cout<<res<<endl;
	return 0;
}
