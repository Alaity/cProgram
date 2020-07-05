#include<stdio.h>
#include<string.h>
 

int isValid(char*);
int main () {
	char s[10] = "((()))";
	isValid(s);
	
	
	return 0;
}
int isValid(char* s) {
    int length = strlen(s);
    int i, j = 1;
    char str[40];
    str[0] = s[0];
    if (length % 2 != 0) {
    	puts("a");
        return 1;
    }
    else {
        for (i = 1; i < length; i++) {
            str[j] = s[i];
           //printf("%c\n", str[j]);
            if (str[j] == ')' && str[j-1] == '(') {	
            	puts(str);
				str[j] = '\0';
				j--;
				str[j] = '\0';
				puts(str);
            }
            if (str[j] == '}' && str[j-1] == '{') {
            	puts(str);
				str[j] = '\0';
				j--;
				str[j] = '\0';
				puts(str);
            }
            if (str[j] == ']' && str[j-1] == '[') {
            	puts(str);
				str[j] = '\0';
				j--;
				str[j] = '\0';
				puts(str);
            }    
            else {
            	//printf("%d\n", j);
                j++;
            }
        }
    }
    if (strlen(str) == 0) {
    	puts("b");
        return 1;
    }
    else {
    	puts("c");
        return 0;
    }
}
