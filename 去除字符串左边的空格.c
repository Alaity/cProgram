#include<stdio.h>

int main() {
	char buf[100] = "    hello world  ";
	int len = 0;
	while(buf[len++]);
	len--;
	//printf("%d", len);
	
	int i = 0;
	while(buf[i++] == ' ');
	i--;

	int j = 0;
	for(j = 0; j < len - i; j++) {
		buf[j] = buf[j + i];
	}
	buf[j] = 0;
	
	printf("[%s]", buf);

	return 0;
} 

