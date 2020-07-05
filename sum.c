#include<stdio.h>
#define SPACE ','
int * twoSum(int *, int, int);
void main()
{
	int count = 0;
	char temp;
	int nums[20];
	int length;
	int target;
	int * ans;
	int i, j;
	
	while ((temp = getchar()) != '\n' && count < 20)
	{
		if (temp == SPACE || temp == '[' ||temp == ']') {
			continue;
		}
		else
		{
			nums[count] = temp -'0';
			count++;	
		}
	}

	length = count;
	scanf("%d",&target);
    ans = twoSum(nums,length,target);
    printf("[%d,%d]",*ans,*(ans + 1));
	
}
int * twoSum(int * nums, int numsSize, int target)
{
int* twoSum(int* nums, int numsSize, int target) {
    int i,j;
    int * ans;
    ans = (int *) malloc (sizeof(int) * 2); 
	for (i = 0; i < numsSize - 1; i++) {
		for (j = i + 1; j < numsSize; j++) {
			if ((nums[i] + nums[j]) == target) {
				ans[0] = i;
				ans[1] = j;
                break;
			}
		}
	}
	return ans;
}
}
