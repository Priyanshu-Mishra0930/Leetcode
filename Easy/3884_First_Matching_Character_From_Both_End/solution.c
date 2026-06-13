int firstMatchingIndex(char* s) {
    int a=strlen(s);
    for(int i=0;i<a;i++){
        if(s[i]==s[a-i-1]){
            return i;
        }
    }
    return -1;
}