int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    *returnSize=2*numsSize;
    int* ret=(int*)malloc((*returnSize)*sizeof(int));
    for(int i=0;i<numsSize;i++){
        ret[i]=nums[i];
        ret[i+numsSize]=nums[i];
    }
    return ret;
}