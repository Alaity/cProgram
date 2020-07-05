#include<stdio.h>
#include<stdlib.h>

int main() {
	int arr[] = {5, 8, 12, 13, 19, 56, 67, 69};
	int target = 12;
	int min_index = 0;
	int len, max_index = sizeof(arr) / sizeof(int);
	int mid_index = 0;
	int flag = 1;
	while (flag) {
		mid_index = (min_index + max_index) / 2;
		if (target == arr[mid_index]) {
			flag = 0;
		}else if (target > arr[mid_index]) {
			min_index = mid_index + 1;
		}else if (target < arr[max_index]) {
			max_index = mid_index - 1;
		}
		if ((mid_index < 0) || (max_index > len)) {
			flag = 0;
		}
	}
	printf("%d", mid_index);
 	return 0;
}
