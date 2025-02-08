/*Esercizio 2
Scrivete una funzione con parametro un intero n(passato per valore)
che stabilisca se n è un numero primo.
La funzione restituirà 1 se il numero è primo altrimenti 0. */
#include <stdio.h>
int calcola_numeroPrimo(int n);

int main(){
    int n;
    do{
    printf("Inserisci un numero: ");
    scanf("%d", &n);
    }while(n<=0);

    //Questa funzione viene chiamata per determinare se il numero è primo.
   if(calcola_numeroPrimo(n)){
    printf("%d è un numero primo\n", n);
   }else{
    printf("%d non è un numero primo\n", n);
   }
}

int calcola_numeroPrimo(int n){
    if(n<=1){
        return 0;
    }
    for(int i=2; i*i<=n; i++){
        if(n%i==0){//se il numero è divisibile allora non è primo e faccio ritornare 0.
            return 0;
        }
    }
    return 1;//se il numero non è divisbile allora è primo e faccio ritornare 1.
}