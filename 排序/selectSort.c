#include<stdio.h>
#include<stdbool.h>
/*
 *function: select sort  
 *parameter: arr������������׵�ַ��sortType���������ͣ�1������0������ 
 *note�� 
 */

void selectSort(int *arr, bool sortType) {

	int temp;
	int min_num;
	int i, j, k;
	
	int length = sizeof(arr);
	if(sortType == 1) {
		//���� 
		for(i = 0; i < length - 1; i++ ) {
			min_num = i; 
			for(j = i + 1; j < length; j++ ) {
				if(arr[j] < arr[min_num]) {
					min_num = j;
				} 
			}			
			temp = arr[i];
			arr[i] = arr[min_num];
			arr[min_num] = temp;  
		}
	}else if(sortType == 0) {
		//���� 
		for(i = 0; i < length - 1; i++ ) {
			min_num = i; 
			for(j = i + 1; j < length; j++ ) {
				if(arr[j] > arr[min_num]) {
					min_num = j;
				} 
			}			
			temp = arr[i];
			arr[i] = arr[min_num];
			arr[min_num] = temp;  
		}
	} else {
		printf("�޴��������ͣ�");
	}
	
}

int main() {
	
	int arr[] = {1, 4, 8, 2, 5, 7, 1, 9};
	int length = sizeof(arr)/sizeof(int);
	int i;
	
	selectSort(arr, 0); 
	for(i = 0; i < length; i++) {
		printf("%d ", arr[i]);
	}	
	return 0;
} 
