#include<stdio.h>

int main() {
	char buf[100] = "hello world          ";
	int len = 0;
	while(buf[len++]);
	len--;
	//printf("%d", len);
	
	int i = 0;
	for(i = len - 1; i >= 0; i--) {
		if(buf[i] != ' ') {
			buf[i + 1] = 0;
			break;
		}
	}
	
	printf("[%s]", buf);

	return 0;
} 

