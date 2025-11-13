

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize){

    *returnSize = numsSize;
    int *shuffledArray = (int*)malloc(numsSize * sizeof(int));

    //copying in correct format
    int i;
    for(i = 0; i < n; i++){
        shuffledArray[2*i+1] = nums[n+i]; //at all the odd positions
        shuffledArray[2*i] = nums[i]; //at all the even positions        
    }
    return shuffledArray;
}
