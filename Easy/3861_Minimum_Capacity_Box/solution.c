int minimumIndex(int* capacity, int capacitySize, int itemSize) {
    int ret=-1;
    int d=101;
    for(int i=0;i<capacitySize;i++){
        int diff=capacity[i]-itemSize;
        if((diff<d) && (diff>=0)){
            d=diff;
            ret=i;
        }
    }
    return ret;
}