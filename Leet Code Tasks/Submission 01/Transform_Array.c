/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* transformArray(int* nums, int numsSize, int* returnSize) {
    
    *returnSize = numsSize;

    int *transformedArray = (int*)malloc(numsSize * sizeof(int));
    int i;

    for(i = 0; i < numsSize; i++){
        transformedArray[i] = nums[i];
    }

    for(i = 0; i < numsSize; i++){ //replace each even number with 0
        if(transformedArray[i]%2 == 0){
            transformedArray[i] = 0;
        }
    }

    for(i = 0; i < numsSize; i++){ //replace each odd number with 1
        if(transformedArray[i]%2 == 1){
            transformedArray[i] = 1;
        }
    }
    //sort
    int j;
    int temp;
    for(i = 0; i < numsSize; i++){
        for(j=0; j < numsSize - i -1; j++){
            if(transformedArray[j] > transformedArray[j+1]){
                temp = transformedArray[j];
                transformedArray[j] = transformedArray[j+1];
                transformedArray[j+1] = temp;
            }
        }
    }
    return transformedArray;
}
