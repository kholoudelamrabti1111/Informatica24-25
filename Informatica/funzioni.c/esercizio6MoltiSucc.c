/*Esercizio 1
Scrivete una funzione avente due parametri interi(passati per valore)
b ed e che calcoli la potenza b^e con il metodo delle moltiplicazioni successive.*/
#include <stdio.h>
int calcola_potenza(int b, int e);

int main(){
    int b, e, risultato;

    do{
        printf("Inserisci il valore della base: ");
        scanf("%d", &b);
        printf("Inserisci il valore dell'esponente: ");
        scanf("%d", &e);
    }while(b<=0 || e<=0);

    risultato=calcola_potenza(b, e);
    printf("%d^%d=%d\n", b, e, risultato);
}

int calcola_potenza(int b, int e){
    int risultato=1;
    for(int i=1; i<=e; i++){
        risultato*=b;
    }
    return risultato;
    
}