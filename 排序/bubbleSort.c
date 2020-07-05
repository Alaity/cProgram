#include<stdio.h>
#include<stdbool.h>
/*
 *function: bubble sort
 *parameter: arr：排序数组的首地址，sortType：排序类型（1：升序，0：降序） 
 *note： 
 */
void bubbleSort(int *arr, bool sortType) {
	
	int temp;
	int length = sizeof(arr);
	int i, j; 
	if(sortType == 1) {
		for(i = 0; i < length - 1; i++ ) {
			for(j = i + 1; j < length; j++ ) {
				if(arr[i] > arr[j]) {
					temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				} 
			}
		}
	}else if(sortType == 0) {
		//降序 
		for(i = 0; i < length - 1; i++ ) {
			for(j = i + 1; j < length; j++ ) {
				if(arr[i] < arr[j]) {
					temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				} 
			}
		}
	} else {
		printf("无此排序类型！");
	}
	
}

int main() {
	
	int arr[] = {1, 4, 8, 2, 5, 7, 1, 9};
	int length = sizeof(arr)/sizeof(int);
	int i;
	
	bubbleSort(arr, 1); 
	for(i = 0; i < length; i++) {
		printf("%d ", arr[i]);
	}	
	return 0;
} 
