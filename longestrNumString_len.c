#include<stdio.h>
#include<string.h>

int longestDigitString_len(char *str) {
	int str_len = strlen(str);
	int num_max_len = 0;  	//记录当前最长数字串长度   
	int temp = 0;			//记录当前的数字串长度 
	int  i = 0;
	for(i = 0; i < str_len - 1 - num_max_len; i++) {
		if (str[i] <= '9' && str[i] >= '0') {	//检测到元素在'0'-'9'之间时当前的数字串长度 + 1 
			temp++;
		}else {		//在检测到元素不在'0'-'9'之间时更新当前最长数字串长度
			if(temp > num_max_len) {
				num_max_len = temp;
			}
			temp = 0;
		}
	}
	return num_max_len;
}

int main() {
	char str[] = "aks45sadfs5845assdfssdfsd25546dffsadf26546521588sdfasrb";

	printf("最长数字串大小为：%d.", longestDigitString_len(str)); 
	
	return 0;
} 
