bool checkGoodInteger(int n) {
    int ds=0,sds=0;
    while(n>0){
        int r=n%10;
        ds+=r;
        sds+=r*r;
        n/=10;
    }
    return (sds-ds)>=50;
}