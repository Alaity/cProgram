/**
����n�������������������ӳ�һ�ţ����һ�����Ķ�λ������
��:n=3ʱ��3������13,312,343,���ɵ��������Ϊ34331213��
��:n=4ʱ,4������7,13,4,246���ӳɵ��������Ϊ7424613��
*/

#include<stdio.h>
#include<string.h>
#define SIZE 5

//�ж��ĸ���Ӧ�ŵ���ǰ��
//void cmp_input(char * input[]) {
//	int i = 0;
//	while()
//} 

int main() {
	int N;    //�������ָ���
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
