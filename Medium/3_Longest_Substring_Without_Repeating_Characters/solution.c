int lengthOfLongestSubstring(char* s) {
    int h_t[256]={0};
    int l=0;
    int r=0;
    int max=0;

    while(s[r]!='\0'){

        h_t[s[r]]++;

        while(h_t[s[r]]>1){
            h_t[s[l]]--;
            l++;
        }

        if((r-l+1)>max){
            max=r-l+1;
        }

        r++;
    }

    return max;
}