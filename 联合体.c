#include<stdio.h>

union A {
	// 联合体重的变量共用同一块内存空间 
	// 内存大小是最大的变量类型的大小 
	int a;    //4个字节 
	char b;    //一个字节 
};


int main() {
	
	union A a;
	a.a = 0x12345678;
	
	printf("%d\n", sizeof(union A));
	
	printf("%p, %p\n", &a.a, &a.b);
	printf("a = %x\n", a.a);
	printf("b = %x\n", a.b);
	
	return 0;
} 
