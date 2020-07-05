#include<stdio.h>

int main() {
	int a = 10;
	short d = 1;
	long e = 11;
	int b = 11;
	char buf[100] = "hello world";
	
	printf("%p %p %p\n", &a, &b, buf);//&代表取地址 
	//指针存放的是地址 
	int * p = &a;//将a的地址赋给变量p 
	printf("地址：%X，值：%d\n", p, *p);//*代表取所指向地址的取值 
	
	char c = 'a';
	char *q = &c;
	
	printf(" char: %d\n short: %d\n int: %d \n long: %d \n char *:%d\n int *: %d\n long long: %d", sizeof(c), sizeof(d), sizeof(a), sizeof(e), sizeof(q), sizeof(p), sizeof(long long));
	 
	return 0; 
} 
