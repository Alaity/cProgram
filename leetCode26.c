#include<stdio.h> 
//�ڳ���Ϊsize�������в���eleԪ�أ������ڣ��򷵻�1�������ڷ���0
int findEleInArr(int* arr, int arrSize, int ele) {

    int res = 0;
    int j = 0;

    for (j = 0; j < arrSize; j++) {
        if (ele == arr[j]) {
            res = 1;
            break;
        }
    }
    return res;
}

int removeDuplicates(int* nums, int numsSize) {

    int index = 1;    //��ǰ��Ҫ�޸ĵ���������
    int i = 0;
	if (numsSize == 0) return 0;
    for (i = 1; i < numsSize; i++) {
        
        if (!findEleInArr(nums, i, nums[i])) {

            if (index < numsSize) {

                nums[index] = nums[i];
            }
            index++;
        }
    }
    return index;
}

int main() {
	
	int nums[2] = {1, 2};
	int i = 0;
	
	removeDuplicates(nums, 2);
	for (i = 0; i < 2; i++) {
		printf("%d ", nums[i]);
	}
	return 0;
}
