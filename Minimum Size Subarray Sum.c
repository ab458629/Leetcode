int minSubArrayLen(int target, int* nums, int numsSize){
    unsigned int rightBound = 0, leftBound = 0, sum = 0, minLength = 0xffffffff;
    
    while (rightBound < numsSize){
        sum += nums[rightBound];
        if (sum >= target){
            while ((sum - nums[leftBound]) >= target){
                sum -= nums[leftBound];
                leftBound++;
            }
            if ((rightBound - leftBound + 1) < minLength){
                minLength = rightBound - leftBound + 1;
            }
        }
        rightBound++;
    }
    
    return (sum < target)? 0 : minLength;
}
