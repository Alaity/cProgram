#include<stdio.h>
#define N 3
#define M 3 + N/2
int main() {
	int a = 2;
	int count = 0;
	for (int i = 0; i < M; i++){
		count++;
	}
	printf("%d", count);
	if (a < 2.5) {
		printf("yes");
	}else {
		printf("no");
	}
	
	return 0;
} 
