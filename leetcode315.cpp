#include<stdio.h>
#include<stdlib.h>
/**
 * function：查找 size 大小的 nums 数组 index 后面，比 ele 晓得元素的个数
 */
int findNums(int* nums, int size, int index, int ele) {

	int i = 0;
	int res = 0;

	for (i = index + 1; i < size; i++) {
		printf("i: %d\n", i);
		if (nums[i] < ele) {

			res++;
		}
	}

	return res;
}
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countSmaller(int* nums, int numsSize, int* returnSize) {

	int i = 0;
	int j = 0;

	if(numsSize == 0) return returnSize;

	returnSize = (int *)malloc(sizeof(int) * numsSize);

	if (returnSize == NULL) {
		return returnSize;
	}

	for (i = 0; i < numsSize; i++) {

		returnSize[i] = findNums(nums, numsSize, i, nums[i]);
	}
	printf("%d\n", i);
	return returnSize;
}

int main() {

	int nums[4] = {5, 2, 6, 1};
	int* numsSize = NULL;
	int i = 0;

	numsSize = countSmaller(nums, 4, numsSize);

	for (i = 0; i < 4; i++) {
		printf("%d ", numsSize[i]);
	}

	if (numsSize != NULL) {

		free(numsSize);
	}
	return 0;
}
