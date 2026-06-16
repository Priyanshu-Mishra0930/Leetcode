/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize) {
    int s=0;
    for(int i=0;i<numsSize;i++){
        s+=nums[i];
        nums[i]=s;
    }
    *returnSize=numsSize;
    return nums;
}