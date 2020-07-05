#include<stdio.h>
#include<string.h>
char* convert(char*, int);
int main() {
	char  s[20] = "PAYPALISHIRING";
    puts(convert(s, 3));
	return 0;
} 
char* convert(char* s, int numRows) {
    int increment = 2 * numRows - 2;//ÔöÁ¿
    static char str[40];
    int len = strlen(s);
    int i = 0, j = 0;
    int temp;   
    while (i < increment) {
       temp = i;
        while (j < len) {
            str[j] = s[temp];
            //putchar(str[j]);
            if (temp < len) {
                temp = temp + increment;
            }
            else {
                i++;
                break;
            } 
			j++; 
        }
    }
    
    str[len] = '\0';
    
    return str;
    
}
