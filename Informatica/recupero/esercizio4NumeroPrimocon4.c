/*DATI QUATTRO VALORI STAMPARE SOLO I NUMERI PRIMI*/

#include <stdio.h>
int main(){
    int n, cnt=0;


    for(int i=1; i<=4; i++){
        do{
            printf("Inserisci un numero: ");
            scanf("%d", &n);
        }while(n<=0);
    }
   
    for(int j=2; j<n/2; j++){
        if(n%j==0){
            cnt++;
        }
    }
    if(cnt!=0){
        printf("%d non è un numero primo!\n", n);
    }else{
        printf("%d e un numero primo!\n", n);
    }
    cnt=0;
    
    
}