#include<stdio.h>
void printArr(int *arr, int len) {
	
	int i = 0;
	
	for(i - 0; i < len; i++) {
		printf("%d\n", arr[i]);
	}
	
	
}

int main() {
	
	int nums = 0;
	int opts = 0;
	int resl[100] = { 0 };
	
	int scores[100] = { 0 };
	char options = '0'; 
	int options1 = 0; 
	int options2 = 0; 
	scanf("%d %d", &nums, &opts);
	getchar();
	int i = 0;
	
	while(i < nums) {	
		scanf("%d", &scores[i]);
		getchar();
		i++;	
	}
	int j = 0;
	int k = 0;
	int s = 0;
	
	while(opts > 0) {
		int res = 0;
		scanf("%c %d %d", &options, &options1, &options2);
		getchar();		
		if(options == 'Q') {
			j++;
			if(options1 > options2) {
				for(k = options2-1; k <= options1-1; k++) {
					if(scores[k] >= res) {
						res = scores[k];	
					}	
				}	
			} else {
				for(k = options1-1; k <= options2-1; k++) {
					if(scores[k] >= res) {
						res = scores[k];	
					}	
				}				
			}

			printf("%d\n", res);
//			resl[s] = res;
		}
		if(options == 'U') {
			scores[options1 - 1] = options2;
		}
		//printArr(scores, nums);
		opts--;
	}
	
//	printArr(resl, j);

	return 0;
	
} 
