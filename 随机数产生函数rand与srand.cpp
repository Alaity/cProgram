#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	//rand()��α�������������
	//����ڵ���rand()ǰ���ȵ���srand()�Ϳ��Գ�������������
	//ֻҪ�ܱ�֤����srand������ʱ��srand�Ĳ����ǲ�ͬ�ģ� ��rand��һ���������ͬ�� 
	
	time_t  tm = time(NULL);//�õ�ϵͳʱ�� 
	 
	srand(tm); //��������Ӳ����� 
	
	int i = rand();
	printf("%d", i);
	
	return 0;
}
