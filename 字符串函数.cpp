#include<stdio.h>
#include<string.h> 

int main() {
	char buf[100] = "hello ";
	int len = strlen(buf);//�����ַ�����Ч�ַ����ȣ��������ַ�����β��0�� 
	printf("%d\n", len); 
	
	char buf1[100] = "hworld";
	//strcat(buf, buf1);//�ϲ������ַ�������������һ�������У����ڻ�����������⣩ 
	strncat(buf, buf1, 3);//�������ַ��������ƺϲ�3���ַ� 
	printf("%s\n", buf); 
	
	int res = strcmp(buf, buf1);//�ַ����Ƚϣ�0����ͬ��1��buf > buf1��-1��buf < nuf1 
	printf("%d\n", res); 
	
	int res1 = strncmp(buf, buf1, 1);//�ַ����Ƚ�,�޶��Ƚ�ǰ1�� 
	printf("%d\n", res1); 
	
	char buf2[] = "9";
	int num = buf2[0] - '0';//���ַ���"9"ת��Ϊ����9
	printf("%d\n", num); 
	
	sprintf(buf2, "hello C %d", 2);//��ʽ���ַ������� ��ʽ������ַ�������buf2�� 
	printf("%s\n", buf2); 
	
	char buf3[] = "123,456";
	int a = 0;
	int b = 0;
	sscanf(buf3, "%d,%d", &a,&b);//��ʽ������ 
	printf("a = %d, b = %d\n", a, b); 
	
	
	return 0;
} 
