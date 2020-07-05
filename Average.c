#include<stdio.h>
#include<windows.h>
int main(){
	
	float a[8],max,min,sum=0.0,aver;
	int i;
	printf("============9个评委============\n");

	for(i=0;i<9;i++){
		printf("请输入第%d个成绩：",i+1);
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
	printf("去掉一个最高分：%.2f\n",max);
	printf("去掉一个最低分：%.2f\n",min);
	printf("平均分是:%.2f\n",aver);
	system("pause");
	return 0; 
}

