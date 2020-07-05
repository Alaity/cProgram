/********  验证输入的是不是数字  **/
#include<stdio.h>

int get_long() {		//返回值为printf()打印的字符数 
	long input;			//输入的整数 
	char ch;			//存放scanf()没有读取的字符 
	
	while((scanf("%ld",&input)) != 1) {		//scanf()读入的数是long类型时，返回值为1 
		while ((ch = getchar()) != '\n') {
			putchar(ch);		//打印 scanf()没有读取的字符
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
