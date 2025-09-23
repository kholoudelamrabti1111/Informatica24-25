/*Scrivi un programma in C che permetta di memorizzare 
il numero di capelli dei clienti di un parrucchiere*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *capelli;
    int n;

    printf("Quanti clienti ci sono oggi?");
    scanf("%d", &n);

    capelli=(int *)malloc(n * sizeof(int));

    if(capelli==NULL){//controllo puntatore se ha uno spazio di memoria.
        printf("Troppi clienti!");
        return 1;//segna che c'è un errore.
    }
    free (capelli);
}