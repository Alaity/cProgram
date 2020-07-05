#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	//rand()是伪随机数产生函数
	//如果在调用rand()前，先调用srand()就可以出现任意的随机数
	//只要能保证调用srand函数的时候，srand的参数是不同的， 那rand就一定会产生不同的 
	
	time_t  tm = time(NULL);//得到系统时间 
	 
	srand(tm); //随机数种子产生器 
	
	int i = rand();
	printf("%d", i);
	
	return 0;
}
