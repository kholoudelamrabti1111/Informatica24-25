int calcola_lunghezza_stringa(stringa s1){
    int dim=0;
    while(s1[dim]!= '\0') dim++;
    return dim;
}

int string_in_stringa(stringa s1, stringa s2){
    int dim1=calcola_lunghezza_stringa(s1);
    int dim2=calcola_lunghezza_stringa(s2);
    int flag=0;
    int cnt=0;

    for(int i = 0; i <= dim1-dim2+1; i++){
        if(s1[i] == s2[0]){
            flag = 1;
            for(int j = 1; j < dim2; j++){
                if(s1[i+j] != s2[j]){
                flag = 0;
                break;
                }
            }
            cnt += flag;
        }
    }
    return cnt;



}