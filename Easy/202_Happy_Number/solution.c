int s_s(int a){
    int s=0;
    while (a>0){
        int r=a%10;
        s+=r*r;
        a/=10;
    }
    return s;
}

bool isHappy(int n) {
    while(n!=1&&n!=4){
        n=s_s(n);
    }
    if(n==1){
        return 1;
    }
    return 0;
    
}