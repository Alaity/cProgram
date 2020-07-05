#include<stdio.h>

int main() {//ºº×Ö×Ö·û´®ÄæÖÃ 
	
	char buf[100] = "ÄãºÃÊÀ½ç";
    
    int len = 0;
    while(buf[len++]);
    len--;
    printf("%d\n", len);
    
	int min = 0;
	int max = len - 1;
	while(min < max) {
		char tem = buf[min];
		buf[min] = buf[max - 1];
		buf[max - 1] = tem;
	
		tem = buf[min + 1];
		buf[min + 1] = buf[max];
		buf[max] = tem;
			
		min += 2;
		max -= 2;	
	}
	
	printf("%s", buf);
	
	return 0;
} 














