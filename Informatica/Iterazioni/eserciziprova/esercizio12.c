/*Scrivi un programma che visualizzi la somma 
dei quadrati dei primi 12 numeri naturali successivi a 8
ES: 9*9+10*10+11*11+12*12+13*13+14*14+....20*20*/

#include <stdio.h>
int main(){
    int somma=0, inizio, quantita; 
    //inizio intende 8 e quantita intende 12 cioè quanti numeri devono essere inseriti.

    printf("Inserisci il valore iniziale");
    scanf("%d", &inizio);
    do{
        printf("Inserisci quanti elementi vuoi considerare");
        scanf("%d", &quantita);
    }while(quantita<=0);// faccio un do-while in caso se mi inserisce un numero negativo.
    
    for(int i=inizio+1; i<=inizio+quantita; i++ ){// es:8+12=20, devo arrivare fino a 20 per considerare 12 numeri.
        somma+=i*i; // somma+somma=i*i i acquisisce il valore di inizio, es: 9*9  
    }
    printf("La somma dei %d valori da %d vale: %d", quantita, inizio, somma);
}
