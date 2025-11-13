/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize) {
    
    *returnSize = numsSize;
    int *runningSumArray = (int*)malloc(numsSize * sizeof(int));//Array to store the running sum

    int tempRunningSum = 0; //Temporary varaible to store the running sum

    int i;
    for(i = 0; i < numsSize; i++){
        tempRunningSum += nums[i];
        runningSumArray[i] = tempRunningSum;
    }
    return runningSumArray;
}
