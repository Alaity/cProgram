#include<stdio.h>
#include<string.h>

int main01() {// 写文件文件 
	
	char s[1024]= { 0 };
	
	FILE *p = fopen("C:\\Users\\魏曼天\\Desktop\\C语言\\文件操作\\test.txt", "w");
	
	while(1) {
		
		memset(s, 0, sizeof(s));
		gets(s);
//		scanf("%s", s);
		if(strcmp(s, "exit") == 0) {
			break;
		}
		int len = strlen(s);
		s[len] = '\n';
		fputs(s, p);
	}
	
	fclose(p);
	printf("end");
	return 0;
}

int main02() {// 文件开拷贝 

	char s[1024]= { 0 };
	
	FILE *p = fopen("C:\\Users\\魏曼天\\Desktop\\C语言\\文件操作\\test.txt", "r");
	FILE *p1 = fopen("C:\\Users\\魏曼天\\Desktop\\C语言\\文件操作\\test1.txt", "w");
	//feof(p) //如果已经到文件结尾了，函数返回值真 
	while(!feof(p)) {
		
		memset(s, 0, sizeof(s));
		fgets(s, sizeof(s), p);
		fputs(s, p1);
	}
	
	fclose(p);
	fclose(p1);
	printf("end");
	return 0;
} 

struct student {
	
	char name[40];
	int age;
	char num[20];
};

int main() {
	
	char s[1024]= { 0 };
	
	FILE *p = fopen("C:\\Users\\魏曼天\\Desktop\\C语言\\文件操作\\student.txt", "a");//a:以追加的方式写文件 
	
	while(1) {
		
		memset(s, 0, sizeof(s));
		gets(s);
//		scanf("%s", s);
		if(strcmp(s, "exit") == 0) {
			break;
		}
		int len = strlen(s);
		s[len] = '\n';
		fputs(s, p);
	}
	
	fclose(p);
	printf("end");
	return 0;
} 
