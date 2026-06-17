int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int ret = 0;
    int temp = 0;

    for(int i = 0; i < numsSize; i++) {
        if(nums[i] == 1) {
            temp++;
            if(temp > ret) {
                ret = temp;
            }
        } else {
            temp = 0;
        }
    }

    return ret;
}