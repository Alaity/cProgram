#include<stdio.h>
#include<stdbool.h>

bool isPalindrome(int);

int main() {
	int x = 121;
	printf("%d\n", isPalindrome(x)) ;

} 
bool isPalindrome(int x) {
    int temp = 0;
    int t = x;
    bool result = false;
    if (x < 0) {
    result = false;
    }
    else {
        while (t) {
            temp = temp * 10 + (t % 10);
            t /= 10;
        }
        if (x == temp) {
            result = true;
        }
    }
    return result;
}
