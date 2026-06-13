bool validDigit(int n, int x) {
    int a=0;
    int b=x;
    while(n>=1){
        int r=n%10;
        if(r==x){
            a++;
        }
        b=n;
        n/=10;
    }
    if((b!=x)&&(a>=1)){
        return 1;
    }
    return 0;
}