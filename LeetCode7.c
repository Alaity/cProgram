#include<stdio.h>
#include<math.h>

int reverse(int);
int main() {
	int x = 1534236439;
	printf("%d\n", reverse(x));
} 

//int reverse(int x)
//{
//	int i = 0;
//	while (x)
//	{
//		int temp = i;
//		i = i * 10 + x % 10;
//		if ((i - x % 10) / 10 != temp)
//		{
//			printf("%d\n", (x % 10));
//			return 0;
//		}
//		x /= 10;
//	}
//	return i;
//}

int reverse(int x) {
    int i = 0, j;
    int conut;//存储x的位数
    int temp;
    int absoluteOfx = abs(x);//
    int result1[10];//存储各个位数
    long result = 0;//结果
    int tem = 1;//10的次方
    int length;
    int count;
    temp = absoluteOfx;
    
    while (temp != 0) {
        result1[i] = temp % 10;
        //printf("%d\n", result1[i]);
        temp = temp / 10;
        i++;
    }
    length = i;
    if (length == 10 && result1[0] > 2) {
    	result = 0;
    	return result;
	}
    for (j = length - 1; j >= 0; j--) {
        result = result + result1[j] * tem;
        if ((result - result1[j]) != count) {
        	return 0;
		}
        tem *= 10;
        count = result;
    }
    if (x >= 0) {
       if (result > 2147483647){
            result = 0;
        }
    } 
    else {
    	if (result > 2147483648) {
    		result = 0;
		}
        result =(-1) * result;
       
    }
    return result;
}
