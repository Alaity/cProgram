#include<stdio.h>
#include<string.h>
#include<time.h>
#include<sys/stat.h>

int main() {
	
	struct stat st = { 0 };
	stat("C:\\Users\\魏曼天\\Desktop\\C语言\\文件操作\\life.mp4", &st);
	printf("文件大小：%u\n", st.st_size);
	
	clock_t t1 = clock();
//	printf("%u\n", t1);
	
	FILE *p = fopen("C:\\Users\\魏曼天\\Desktop\\C语言\\文件操作\\life.mp4", "rb");
	FILE *p1 = fopen("C:\\Users\\魏曼天\\Desktop\\C语言\\文件操作\\life01.mp4", "wb");

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
	printf("耗时：%d ms\n", t2 - t1);
	printf("end\n");

	return 0;
} 
