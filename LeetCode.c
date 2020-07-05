#include<stdio.h>
#include<string.h>
int lengthOfLongestSubstring(char* s);
int main() {
	char input[20];
	gets(input);
	printf("%d\n", lengthOfLongestSubstring(input));
	
} 

int lengthOfLongestSubstring(char* s) {
    int count;
    int length = strlen(s);
    char temp[200];
    int result = 0;
    int len = 1;
    int i, j, t;
    if (s[0] == '\0') {
        len = 0;
        return len;
    }else{
	
    for (i = 0; i < length  - len ; i++){
        count = 0;
        temp[count] = s[i];
        temp[count+1] = '\0';
        for (j = i +1; j < length; j++){
            //temp在str字符串中返回1，否则返回0
            for (t = 0; t < strlen(temp); t++) {
                if (s[j] == temp[t]){   
                     result = 1;
                     break;
                }
                else{
                    result = 0;
                }
            }
            
            if (result == 0){    //如果str[j]不在temp字符串中，执行
                count++;
                temp[count] = s[j];
                temp[count+1] = '\0';
                puts(temp);
            }
            else{    //如果str[j]在temp字符串中，退出循环    
                break;
            }
        }
        if (len < count + 1) {
            len = count + 1;
        }
    }
    return len;
	}
}
