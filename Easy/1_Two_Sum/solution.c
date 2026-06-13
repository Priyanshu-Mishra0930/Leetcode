int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* b=(int*)malloc(2*sizeof(int));
    for(int i=0;i<numsSize;i++){
        int a=target-nums[i];
        b[0]=i;
        for(int j=i+1;j<numsSize;j++){
            if(nums[j]==a){
                b[1]=j;
                *returnSize=2;
                return b;
            }
        }
    }
    return NULL;
}