#include<stdio.h>

int main() {
	char str[100] = "123";
	//printf("%d", (str[0]-'0'));
	
	int len = 0;
	while(str[len++]);
	len--;
	
	int i = 0;
	int num = 0;
	
	for(i = 0; i < len; i++) {
		num = num * 10 + (str[i] - '0') ;
	}
	
	printf("%d", num);
	 
	return 0;
} 
