#include <iostream>
using namespace std;
int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	int count = 0, sum = 0;
	for(int i = a; i <= b; i++){
		printf("%5d", i);
		count++;
		sum += i;
		if(count%5==0){
			puts("");
		}
	}
	if(count%5 != 0) puts("");
	printf("Sum = %d\n", sum);
	return 0;
}
