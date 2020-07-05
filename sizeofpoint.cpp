#include<stdio.h> 
#include<limits.h>
#include<string.h>

int main() {
	int *p = NULL;
	char *q = NULL;
	
	printf("int: %d, int*: %d, char*: %d, INT_MAX: %d\n", sizeof(int), sizeof(p), sizeof(q), INT_MAX);
	
	char arr[10] = "hello";
	printf("sizeof: %d, strlen: %d\n", sizeof(arr), strlen(arr));
	printf("%c\n", arr+1);
	printf("%d\n", arr);
	printf("%d\n", arr+4);
	printf("%s\n", arr+1);
	char str[] = "hello";
	printf("sizeof: %d, strlen: %d\n", sizeof(str), strlen(str));
    return 0;
}
