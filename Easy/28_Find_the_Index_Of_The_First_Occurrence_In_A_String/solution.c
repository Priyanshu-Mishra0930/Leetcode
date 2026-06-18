int strStr(char* haystack, char* needle) {
    int n=strlen(needle);
    int n1=strlen(haystack);
    char cam[n+1];
    for(int i=0;i<=n1-n;i++){
        for(int j=0;j<n;j++){
            cam[j]=haystack[i+j];
        }
        cam[n]='\0';
        if(strcmp(cam,needle)==0){
            return i;
        }
    }
    return -1;
}