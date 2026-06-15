int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int* ret=(int *)malloc(1001*sizeof(int));
    *returnSize=0;
    int h_t[1001]={0};
    for(int i=0;i<nums1Size;i++){
        h_t[nums1[i]]++;
    }
    for(int i=0;i<nums2Size;i++){
        if(h_t[nums2[i]]>0){
            ret[*returnSize]=nums2[i];
            (*returnSize)++;
            h_t[nums2[i]]=0;
        }
    }
    return ret;
}