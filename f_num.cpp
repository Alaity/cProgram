/********  ���Ҿ����еĵ��ʸ��������ַ�'|'����  ********/

#include<stdio.h>
#include<ctype.h>    //�ṩ isspace()���� 
#include<stdbool.h>
#define STOP '|'

int main() {	
	char ch;    //������ַ� 
	char prev = '\n';    //�����ǰһ���ַ� 
	long n_chars = 0L;    //�ַ��� 
	int n_words = 0;    //������ 
	int n_lines = 0;    //���� 
	bool inword = false;    //���ch�ַ��ڵ����У�inword = true 
	
	while ((ch = getchar()) != STOP) {
	
		n_chars++;    //ͳ���ַ� 
		if ( ch == '\n') {
			n_lines++;    //ͳ������ 
		} 
		if (!isspace(ch) &&  !inword) {
			inword = true;    //��ʼһ���µ��� 
			n_words++;    //ͳ�Ƶ����� 
		}	
		if (isspace(ch) && inword) {
			inword = false;
		} 
		prev = ch;	
		
	}
	if (prev != '\n') {
		n_lines = 1;
	}
	
	printf(" n_chars : %ds\n n_lines : %ds\n n_words : %ds\n",n_chars,n_lines,n_words);
	
	return 0;
}  
