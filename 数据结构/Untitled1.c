//[1, 2, 3, 4, 5]
//[5, 4, 3, 2, 1]
//[2, 4, 3, 5]


#include<stdio.h> 


int main() {
	

	int arr[8] = {5, 4,8, 6, 6, 2, 4, 5};
	
	
	int max = 0;
	int ans = 0; 
	int temp = 0;
	
	int i = 0;
	int j = 0;
	
	for(j = 0; j < 8; j++) {
		max = 0;
		temp = 0;
		for(i = j; i < 8; i++) {
			
			if(arr[i] > max) {
				max = arr[i];
				temp++;

			} else if(i >= 2) {
				
				if(arr[i] > arr[i - 2]) {
					max = arr[i];
				}
				
			} 
		}
		if(temp > ans) {
			ans = temp;
		}		
		
	} 

	printf("%d", ans); 
		

	
	
	return 0;
}
