#include<stdio.h>
int searchSecondMax(int *arr, int length) {
	int first_max = 0; 
	int second_max = 0;
	
	int i = 0;
	for(i = 0; i < length; i++) {
		// arr[5] = {2, 2, 0, 0, 0};
		if(arr[i] > second_max) {
			
			if(arr[i] > first_max) {
				 
				second_max = first_max;
				
				first_max = arr[i];
				
			} else {
				
			 	if(arr[i] != first_max) {
			 		
			 		second_max =  arr[i]; 
				 }
			} 
		}
	} 
	
	printf("%d\n", second_max);
	
	return second_max;	
}
int main() {
	
	int arr[5] = {2, 2, 2, 2, 2};
	
	searchSecondMax(arr, 5);

	
	return 0;
} 
