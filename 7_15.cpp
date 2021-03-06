#include <iostream>
#include <cstdio>
using namespace std;

int main(){

	double x;
	scanf("%lf", &x);
	double sum = 1;
	int t = 1;
	double last = 1;
	while(last >= x){
		last = last*t/(2*t+1);
		sum += last;
		t++;
	}
	printf("%.6f\n", sum*2);
	return 0;
} 
