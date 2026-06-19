long long int hours(int* piles,int ps,int m){
    long long int h=0;
    for(int i=0;i<ps;i++){
        h+=(piles[i]+m-1)/m;
    }
    return h;
}
int max(int* piles,int ps){
    int m=piles[0];
    for(int i=0;i<ps;i++){
        if(m<piles[i]){
            m=piles[i];
        }
    }
    return m;
}
int minEatingSpeed(int* piles, int pilesSize, int h) {
    int s=1,e=max(piles,pilesSize);
    int slow=e;
    while(s<=e){
        int mid=s+(e-s)/2;
        long long int hfe=hours(piles,pilesSize,mid);
        if(hfe>h){
            s=mid+1;
        }else if(hfe<=h){
            e=mid-1;
            if(slow>mid){
                slow=mid;
            }
        }
    }
    return slow;
}