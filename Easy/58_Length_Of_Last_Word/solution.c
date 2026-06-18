int lengthOfLastWord(char* s) {
    int n=strlen(s);
    int x=0;

    for(int i=n-1;i>=0;i--){

        if((s[i]>=97&&s[i]<=122)||(s[i]>=65&&s[i]<=90)){

            while(i >= 0 && s[i]!=' '){
                x++;
                i--;
            }
            return x;
        }
    }

    return x;
}