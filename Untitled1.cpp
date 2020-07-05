/**
设有n个正整数，将他们连接成一排，组成一个最大的多位整数。
如:n=3时，3个整数13,312,343,连成的最大整数为34331213。
如:n=4时,4个整数7,13,4,246连接成的最大整数为7424613。
*/

#include<stdio.h>
#include<string.h>
#define SIZE 5

//判断哪个数应放到最前面
//void cmp_input(char * input[]) {
//	int i = 0;
//	while()
//} 

int main() {
	int N;    //输入数字个数
	char input[4][4]; 
	int count = 0;
	int length = 0;
	scanf("%d", &N);
	
	for(int i = 0; i < 4 && scanf("%s", &input[i]) != '\n'; i++) {
		length++;
	}
	
	for(int i = 0; i < length-1; i++) {
		char tem[4][4];
		for(int j = 0; j < input[i].length-1-i; j++) {
			if(input[i] < input[i+1]) {
				tem[count] = input[i + 1];	
				input[i + 1] = input[i];
				input[i] = tem[count]; 
			}
		}
	}
	
	for(int i = 0;i < 4; i++) {
		printf("%s", input[i]);
	}
	printf("\n");
	return 0; 
} 
