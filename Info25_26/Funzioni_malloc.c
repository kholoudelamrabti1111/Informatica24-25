/*Creare un array dinamico chidendo all'utente la sua dimensione
il programma deve prendere le seguenti funzioni:
1. Crea l'array
2. Inserisce gli elementi
3. Stampa dei valori
4. Esci
*/

#include <stdio.h>
#include <stdlib.h>
int* creaVett(int _n){
    
    int *_vettore(int*)malloc(_n *sizeof(int));//con l'asterisco ottengo due risultati
    if(vettore==NULL){
        printf("Errore di allocazione di memoria!!");
        return 1;
    }
    return _vettore;
}

int* inserisciValori(int *_vettore, int _n){
    for(int i=0; i<_n; i++){
        printf("Inserisci l'elemento: ");
        scanf("%d", &_vettore[i]);
    }
    return _vettore;
}

void stampaVett(int *_vettore, int _n){
    printf("Hai inserito i seguenti elementi: ");
    for(int i=0; i<_n; i++){
        printf("%d\t", _vettore[i]);
    }
    printf("\n");
}

int main(){
    int *vettore=NULL;//puntatore al vettore
    int n;


    do{
        printf("Inserisci la quantità degli elementi: ");
        scanf("%d", &n);
    }while(n<0);

    //crea funzioni
    vettore=creaVett(n);//crea vettore
    vettore=inserisciValori(vettore, n);//riempire
    stampaVett(vettore, n);
    free(vettore);
}