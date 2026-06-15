int reverseBits(int n) {
    int bin[32];
    for(int i=0;i<32;i++){
        bin[i]=n%2;
        n/=2;
    }
    int ret=0;
    long long int mul=1;
    for(int i=31;i>=0;i--){
        ret+=bin[i]*mul;
        mul*=2;
    }
    return ret;
}