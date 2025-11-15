void moveZeroes(int* nums, int numsSize) {
    int i, j = 0;
    for(i = 0; i < numsSize; i++){
        if(nums[i] != 0){
            nums[j] = nums[i]; //all except 0 get pushed into the array
            j++;
        }
    }
    for(i = j; i < numsSize; i++){ //add 0's at the end
        nums[i] = 0;
    }
}
