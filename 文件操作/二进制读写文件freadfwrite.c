#include<stdio.h>
#include<string.h>
#include<time.h>
#include<sys/stat.h>

int main() {
	
	struct stat st = { 0 };
	stat("C:\\Users\\κ����\\Desktop\\C����\\�ļ�����\\life.mp4", &st);
	printf("�ļ���С��%u\n", st.st_size);
	
	clock_t t1 = clock();
//	printf("%u\n", t1);
	
	FILE *p = fopen("C:\\Users\\κ����\\Desktop\\C����\\�ļ�����\\life.mp4", "rb");
	FILE *p1 = fopen("C:\\Users\\κ����\\Desktop\\C����\\�ļ�����\\life01.mp4", "wb");

	char buf[1024 * 40];
	
//	while(p != NULL) {
		
		while(!feof(p)) {
			
			memset(buf, 0, sizeof(buf));
			
			size_t res = fread(buf, sizeof(char), sizeof(buf), p);
			
			fwrite(buf, sizeof(char), res, p1);

		}
//	}
	
	fclose(p);
	fclose(p1);
	
	clock_t t2 = clock();
	printf("��ʱ��%d ms\n", t2 - t1);
	printf("end\n");

	return 0;
} 
