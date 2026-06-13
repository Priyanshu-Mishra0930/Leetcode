int firstUniqueEven(int* nums, int numsSize) {
    int h_t[101]={0};
    for(int i=0;i<numsSize;i++){
        if(nums[i]%2==0){
            h_t[nums[i]]++;
        }
    }
    for(int i=0;i<numsSize;i++){
        if(h_t[nums[i]]==1){
            return nums[i];
        }
    }
    return -1;
}