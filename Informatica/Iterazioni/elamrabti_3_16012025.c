/*Leggere una serie di numeri interi passati dall’utente dopo aver eseguito una scelta che determini se
stampare i valori in senso crescente o decrescente e fermandosi al primo ‘0’ , tale da stampare solo i
valori che rendono la serie crescente o decrescente e restituire quanti numeri erano stati inseriti.
Esempio: scelta=crescente - l’utente inserisce: 8 35 3 8 46 - numeri inseriti: 5.*/
#include <stdio.h>
int main(){
    int  n,scelta=0;

    printf("Inserisci un numero");
    scanf("%d", &n);
    do{
        if(scelta<n || scelta>n){
            printf("%d",scelta);
        }
    }while(n<0);
}