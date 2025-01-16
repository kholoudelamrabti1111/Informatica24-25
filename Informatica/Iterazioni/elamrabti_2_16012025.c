/*Calcolare quanti e quali numeri primi sono presenti in un ampio intervallo di valori.
Definizione di numero primo: un numero si dice primo se è divisibile solo per 1 e per se stesso.*/
#include <stdio.h>
int main(){
    int n, cnt=0;

    printf("Inserisci un numero");
    scanf("%d", &n);
    cnt++;
    do{
        if((n%1==0) && (n=1)){
            printf("Numero primo\n", n);
        }
    }while(n<0);
    
}