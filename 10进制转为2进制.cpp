#include<stdio.h> 

void bin(int n) {//10进制转2进制 
	
	int i = n % 2;
	
	if(n > 0) {
		
		n = n / 2;
		bin(n);
		printf("%d", i);
		
	}
}
char hexHandler(int n) {
	switch(n){
		case 0:
			return '0';
		case 1:
			return '1';
		case 2:
			return '2';
		case 3:
			return '3';
		case 4:
			return '4';
		case 5:
			return '5';
		case 6:
			return '6';
		case 7:
			return '7';
		case 8:
			return '8';
		case 9:
			return '9';
		case 10:
			return 'A';
		case 11:
			return 'B';
		case 12:
			return 'C';
		case 13:
			return 'D';
		case 14:
			return 'E';
		case 15:
			return 'F';
		default:
			return '0';
	}
} 

void hex(int n) {//10进制转16进制 
	
	int i = n % 16;
	
	if(n > 0) {
		
		n = n / 16;
		hex(n);
		printf("%c", hexHandler(i));
	} else {
		printf("%c", hexHandler(i));
	}
}

int fib(int n) {
	if(n == 0) {
		return 0;
	}else if(n == 1) {
		return 1;
	} else {
		return fib(n - 1) + fib(n - 2);
	}
}

int main() {
	
	int i = 20;
	
	printf("%d", fib(i));
	
	
	return 0;
} 
