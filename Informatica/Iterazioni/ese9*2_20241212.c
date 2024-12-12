/*Dati in input 10 numeri interi determinare 
il valore maggiore e quante voltre compare*/

#include <stdio.h>
int main(){
    int num=0;
    int cnt=0;
    int max=0;
    
    for(int i=0; i<10; i++){
        printf("Inserisci un numero");
        scanf("%d", &num);
        if(i==0)
            max=num;
        if(num>max){ 
            max=num;
            cnt=1;
        }
        else if(num==max){
            cnt++;
        }
       

    }
    printf("Il numero maggiore è %d", max);
    printf("compare %d volte", cnt);
        
    
    



}

