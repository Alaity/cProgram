#include<stdio.h>

union A {
	// �������صı�������ͬһ���ڴ�ռ� 
	// �ڴ��С�����ı������͵Ĵ�С 
	int a;    //4���ֽ� 
	char b;    //һ���ֽ� 
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
