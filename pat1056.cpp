/*
1. ʹ�����鱣������
2. �����е�Ԫ���������
3. ��� 
*/ 

#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
const int N = 16;
int main(){
	int n, x;
	int arr[N];
	memset(arr, 0, sizeof(arr));
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	int sum = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(i == j) continue;
			sum += arr[j]*10 + arr[i];
//			printf("%d ", arr[j]*10+arr[i]);
		}
	}
	printf("%d", sum);
	return 0;
} 
