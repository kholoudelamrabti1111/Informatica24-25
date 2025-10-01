/*Scrivere un programma in linguaggio c che:
1. Allochi dinamicamente un array iniziale di n numeri
2. Inserimento dei valori
3. Stampa array
4. Calcoli la somma degli elementi multipli di 3 
5. Creiamo un nuovo array contenente solo valori dispari
*/
#include <stdio.h>
#include <stdlib.h>

int* creaVett(int *_vettore){
    int * _vettore=(int*)malloc(_n *sizeof(int));
    if(vettore==NULL){
        printf("Errore di allocazione memoria!: ");
        return 1;
    }
    return _vettore;
}

int* inserisciVett(int *_vettore, _n){
    for(int i=0; i<_n; i++){
        printf("Inserisci l'elemento: ");
        scanf("%d", &_vettore[i]);
    }
    return _vettore;
}

void stampaVett(int *_vettore, _n){
    printf("Hai inserito i seguenti elementi: ");
    scanf("%d", &_vettore[i]);
    for(int i=0; i<_n; i++){
        printf("%d", &_vettore[i]);
    }
    printf("\n");
}

int main(){
    int *vettore=NULL;
    int n;

    do{
        printf("Inserisci la quantità degli elementi: ");
        scanf("%d", &n);
    }while(n<0);


    //creare funzioni da usare
    vettore=creaVett(vettore);//creo il vettore
    vettore=inserisciVett(vettore);//carico 
    stampaVett(vettore, n);//stampo
}