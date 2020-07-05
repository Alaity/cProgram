#include<stdio.h>
#include<string.h> 

int main() {
	char buf[100] = "hello ";
	int len = strlen(buf);//返回字符串有效字符长度（不包含字符串结尾的0） 
	printf("%d\n", len); 
	
	char buf1[100] = "hworld";
	//strcat(buf, buf1);//合并两个字符串，结果放入第一个参数中（存在缓冲区溢出问题） 
	strncat(buf, buf1, 3);//并两个字符串，限制合并3个字符 
	printf("%s\n", buf); 
	
	int res = strcmp(buf, buf1);//字符串比较，0：相同，1：buf > buf1，-1：buf < nuf1 
	printf("%d\n", res); 
	
	int res1 = strncmp(buf, buf1, 1);//字符串比较,限定比较前1个 
	printf("%d\n", res1); 
	
	char buf2[] = "9";
	int num = buf2[0] - '0';//将字符串"9"转换为数字9
	printf("%d\n", num); 
	
	sprintf(buf2, "hello C %d", 2);//格式化字符串，将 格式化后的字符串存入buf2中 
	printf("%s\n", buf2); 
	
	char buf3[] = "123,456";
	int a = 0;
	int b = 0;
	sscanf(buf3, "%d,%d", &a,&b);//格式化输入 
	printf("a = %d, b = %d\n", a, b); 
	
	
	return 0;
} 
