void moveZeroes(int* nums, int numsSize){
    int count = 0;
    for (int i = 0; i < numsSize; i++){
        if (nums[i] != 0){
            nums[count++] = nums[i];
        }
    }
    for (int j = count; j < numsSize; j++)
        nums[j] = 0;
}
