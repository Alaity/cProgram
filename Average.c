#include<stdio.h>
#include<windows.h>
int main(){
	
	float a[8],max,min,sum=0.0,aver;
	int i;
	printf("============9����ί============\n");

	for(i=0;i<9;i++){
		printf("�������%d���ɼ���",i+1);
		scanf("%f",&a[i]);
		max=a[0];
		min=a[0];
		if(max<a[i]){
			max=a[i];
		} 	
		if(min>a[i]){ 
			min=a[i];
		} 
		sum=sum+a[i];
	}	
	
	aver=(sum-max-min)/7;
	printf("ȥ��һ����߷֣�%.2f\n",max);
	printf("ȥ��һ����ͷ֣�%.2f\n",min);
	printf("ƽ������:%.2f\n",aver);
	system("pause");
	return 0; 
}

