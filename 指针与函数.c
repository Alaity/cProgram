#include<stdio.h>

int add(int a, int b) {
	int ans = 0;
	
	ans = a + b;
	
	return ans;
}

void print_arr(int *p, int len) {
	
	int i = 0;
	
	for(i = 0; i < len; i++) {
		
		printf("%d ", p[i]);
		
	}
} 
int main() {
	
	int (*p) (int a, int b);//����һ������ֵΪint�� ����Ϊ��int�� int)�ĺ��� 
	
	p = add;
	
	printf("%d\n", p(2, 2));
	
	
	int array1[5] = {1, 2, 3, 4, 5};
	int array2[5] = { 0 };
	memcpy(array2, array1, 20);//���鿽�� 
	print_arr(array2, 5);
	printf("\n");
	memset(array1, 0, sizeof(array1));//������0 
	print_arr(array1, 5);
	printf("\n");
	
	return 0;
	
} 
