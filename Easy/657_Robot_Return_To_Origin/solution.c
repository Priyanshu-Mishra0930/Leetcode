bool judgeCircle(char* moves) {
    int h_t[4]={0};
    for(int i=0;moves[i]!='\0';i++){
        if(moves[i]=='D'){
            h_t[0]++;
        }else if(moves[i]=='L'){
            h_t[1]++;
        }else if(moves[i]=='R'){
            h_t[2]++;
        }else{
            h_t[3]++;
        }
    }
    return (((h_t[0]-h_t[3])==0)&&((h_t[1]-h_t[2])==0));
}