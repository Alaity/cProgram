#include<stdio.h>

int main(int argc, char *args[]) {
	
	// argc ������ִ��ʱ�м����������������Ʊ������һ������������argc��СֵΪ1
	// �ڶ���������һ��ָ�����飬����ÿ����Ա�������� char * 
	printf("%d\n", argc);
	
	printf("%s\n", args[0]);
	//args��һ�����飬���ĳ�Ա�����Ƕ���?
	//argc ���Ǹ��� main����args��������ж��ٳ�Ա 
	int i;
	for (i = 0; i < argc; i++) {
		printf("%s\n", args[i]);
		
	} 
	
//	printf("%d\n", sizeof(char **));
	return 0;
} 
