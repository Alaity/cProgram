#include<stdio.h>
#include<string.h>

int main01() {// д�ļ��ļ� 
	
	char s[1024]= { 0 };
	
	FILE *p = fopen("C:\\Users\\κ����\\Desktop\\C����\\�ļ�����\\test.txt", "w");
	
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

int main02() {// �ļ������� 

	char s[1024]= { 0 };
	
	FILE *p = fopen("C:\\Users\\κ����\\Desktop\\C����\\�ļ�����\\test.txt", "r");
	FILE *p1 = fopen("C:\\Users\\κ����\\Desktop\\C����\\�ļ�����\\test1.txt", "w");
	//feof(p) //����Ѿ����ļ���β�ˣ���������ֵ�� 
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
	
	FILE *p = fopen("C:\\Users\\κ����\\Desktop\\C����\\�ļ�����\\student.txt", "a");//a:��׷�ӵķ�ʽд�ļ� 
	
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
