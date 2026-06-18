bool isValid(char* s) {
    char check[100000];
    int j=0;
    if(strlen(s)==1){
        return 0;
    }
    for(int i=0;s[i]!='\0';i++){
        if(s[i]=='('||s[i]=='{'||s[i]=='['){
            check[j]=s[i];
            j++;
        }
        if(s[i]==')'){
            if(j==0){
                return 0;
            }

            if(check[j-1]=='('){
                j--;
            }else{
                return 0;
            }
        }
        if(s[i]=='}'){
            if(j==0){
                return 0;
            }
            if(check[j-1]=='{'){
                j--;
            }else{
                return 0;
            }
        }
        if(s[i]==']'){
            if(j==0){
                return 0;
            }
            if(check[j-1]=='['){
                j--;
            }else{
                return 0;
            }
        }
    }
    if(!j){
        return 1;
    }
    return 0;
}