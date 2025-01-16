/*Scrivi un programma che controlla un numero che un utente inserisce in input, 
bisogna verificare che sia compreso tra 1 e 10 e inoltre contare il numero di tentativi effettuati.*/
#include <stdio.h>
int main(){
    int n=1, prove=0;
    do{
        printf("Inserisci un numero tra 1 e 10: ");
        scanf("%d", &n);
        prove=prove+1;
    }while(n<1 || n<1);

    printf(" Hai inserito un numero valido dopo %d prove\n", prove);
    
}