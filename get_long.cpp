/********  ��֤������ǲ�������  **/
#include<stdio.h>

int get_long() {		//����ֵΪprintf()��ӡ���ַ��� 
	long input;			//��������� 
	char ch;			//���scanf()û�ж�ȡ���ַ� 
	
	while((scanf("%ld",&input)) != 1) {		//scanf()���������long����ʱ������ֵΪ1 
		while ((ch = getchar()) != '\n') {
			putchar(ch);		//��ӡ scanf()û�ж�ȡ���ַ�
		}
		printf(" is not an integer.\n");
	}
	
	return printf("%ld is an integer.\n", input);
}

int main() {
	
	int n;
	n = get_long();
	
	printf("this integer have %d charaset.\n", n);
	
	return 0;
} 
