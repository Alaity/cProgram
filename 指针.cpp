#include<stdio.h>

int main() {
	int a = 10;
	short d = 1;
	long e = 11;
	int b = 11;
	char buf[100] = "hello world";
	
	printf("%p %p %p\n", &a, &b, buf);//&����ȡ��ַ 
	//ָ���ŵ��ǵ�ַ 
	int * p = &a;//��a�ĵ�ַ��������p 
	printf("��ַ��%X��ֵ��%d\n", p, *p);//*����ȡ��ָ���ַ��ȡֵ 
	
	char c = 'a';
	char *q = &c;
	
	printf(" char: %d\n short: %d\n int: %d \n long: %d \n char *:%d\n int *: %d\n long long: %d", sizeof(c), sizeof(d), sizeof(a), sizeof(e), sizeof(q), sizeof(p), sizeof(long long));
	 
	return 0; 
} 
