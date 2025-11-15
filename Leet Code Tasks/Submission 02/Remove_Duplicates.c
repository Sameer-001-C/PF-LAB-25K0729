int removeDuplicates(int* nums, int numsSize) {
    int i;
    int j = 1;//unique count, atleast 1 unique

    for(i = 1; i < numsSize; i++){
        if(nums[i] != nums[i-1]){ //if current element is NOT same as previous
            nums[j] = nums[i]; //then current element is unique
            j++; //increase the top pointer after inserting element
        } //j works like top pointer of stack, and, as a unique counter.
    }
    return j;
}
