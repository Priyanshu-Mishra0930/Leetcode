int pivotIndex(int* nums, int numsSize) {
    int s=0;
    for(int i=0;i<numsSize;i++){
        s+=nums[i];
    }
    int ls=0;
    for(int i=0;i<numsSize;i++){
        int rs=s-ls-nums[i];
        if(ls==rs){
            return i;
        }
        ls+=nums[i];
    }
    return -1;
}