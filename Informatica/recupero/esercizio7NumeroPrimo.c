#include <stdio.h>
int main(){
    int n, cnt=0;

    do{
        printf("Inserisci un numero: "),
        scanf("%d", &n);
    }while(n<=0);

    for(int i=2; i<n; i++){
        if(n%i==0){
            cnt++;
        }
        if(cnt==0){
            printf("\nIl numero %d è primo", n);
        }else{
            printf("\nIl numero %d non è primo", n);
        }
    }
}