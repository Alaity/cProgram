#include<stdio.h>

int main(int argc, char *args[]) {
	
	// argc 代表函数执行时有几个参数，程序名称本身就是一个参数，所以argc最小值为1
	// 第二个参数是一个指针数组，其中每个成员的类型是 char * 
	printf("%d\n", argc);
	
	printf("%s\n", args[0]);
	//args是一个数组，它的成员变量是多少?
	//argc 就是告诉 main函数args这个数组有多少成员 
	int i;
	for (i = 0; i < argc; i++) {
		printf("%s\n", args[i]);
		
	} 
	
//	printf("%d\n", sizeof(char **));
	return 0;
} 
