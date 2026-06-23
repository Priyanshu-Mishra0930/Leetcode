int b_s(int *nums,int ns,int target){
    int s=0,e=ns-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(nums[mid]==target){
            return 1;
        }else if(nums[mid]>target){
            e=mid-1;
        }else{
            s=mid+1;
        }
    }
    return 0;
}
bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target) {
    for(int i=0;i<matrixSize;i++){
        int p=b_s(matrix[i],*matrixColSize,target);
        if(p==1){
            return true;
        }
    }
    return false;
}