#include<stdio.h>
#include<string.h>

int longestDigitString_len(char *str) {
	int str_len = strlen(str);
	int num_max_len = 0;  	//��¼��ǰ����ִ�����   
	int temp = 0;			//��¼��ǰ�����ִ����� 
	int  i = 0;
	for(i = 0; i < str_len - 1 - num_max_len; i++) {
		if (str[i] <= '9' && str[i] >= '0') {	//��⵽Ԫ����'0'-'9'֮��ʱ��ǰ�����ִ����� + 1 
			temp++;
		}else {		//�ڼ�⵽Ԫ�ز���'0'-'9'֮��ʱ���µ�ǰ����ִ�����
			if(temp > num_max_len) {
				num_max_len = temp;
			}
			temp = 0;
		}
	}
	return num_max_len;
}

int main() {
	char str[] = "aks45sadfs5845assdfssdfsd25546dffsadf26546521588sdfasrb";

	printf("����ִ���СΪ��%d.", longestDigitString_len(str)); 
	
	return 0;
} 
