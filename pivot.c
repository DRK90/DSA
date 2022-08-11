#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int pivotIndex(int* nums, int numsSize){
    int pivot = 0;
    int total = 0;
    int sumR = 0;
    for (int i = 1; i < numsSize; i++){
        sumR += nums[i];
    }
    int sumL = 0;
    if (sumR == sumL){
        return 0;
    }

    while (pivot < numsSize){        
        if (sumL == sumR){
            return pivot;
        } else {
            sumL += nums[pivot];
            sumR -= nums[pivot+1];
            pivot++;
        }
    }
    return -1;

}

void main(){
    int numSize = 3;
    int nums[] = {1,2,3};
    int mid = pivotIndex(nums, numSize);
    printf("%d\n", mid);
}