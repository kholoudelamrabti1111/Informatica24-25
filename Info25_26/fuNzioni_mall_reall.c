/*Scrivi un programma in C che:
1. Chiede all'utente quanti numeri interi vuole inserire
2. Alloca dinamicamente un array di quella dimensione con malloc
3. Permette all'utente di inserire i numeri
4. Chiede all'utente se vuole aumentare la dimensione dell'array
    - Se si, richede la nuova dimensione e usa realloc() per ridimensioanarlo
    -Permette quindi di inserire i nuovi valori negli spazi aggiunti
5. Infine, stampa tutti gli elementi degli array.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int* creaVett(int _n){//default, alloca array in memoria
    int* creaVett(int _n){
    int * _vettore=(int*)malloc(_n *sizeof(int));
    if(_vettore==NULL){
        printf("Errore di allocazione memoria!: ");
    return NULL;
    }
    return _vettore;//mi ritornerà l'array pieno
}

int * InserisciVett(int *_vettore, int _n){//default, inizializza l'array
    for(int i=0; i<_n; i++){
        printf("Inserisci l'elemento:");
        scanf("%d", &_vettore[i]);
    }
    return _vettore;
}

void stampaVett(int *_vettore, _n){//default, stampiamo per vdere se l'array contiene qualcosa
    for(int i=0; i<_n; i++){
        prinf("%d", _vettore[i]);
    }
    printf("\n");
}

int+ aumentaDim(_*vettore, int _n){
    int _*aumenta=NULL;
    int nuovaDim=0;

    do{
        printf("Inserisci la nuova dimensione: ");
        scanf("%d", &nuovaDim);
        _aumenta=(int*)realloc((_vettore, nuovaDim) *sizeof(int));
        for(int i=_n; i<nuovaDim; i++){
            printf("Inserisci nuovi valori: ");
            scanf("%d", &_aumenta[i]);
        }
    }while(nuovaDim!=_n);
}

}

int main(){
    int *vettore=NULL;
    int n;
    int scelta=0;
    
    
    do{
        printf("Inserisci la quantità degli elementi: ");
        scanf("%d", &n);
    }  
    //Crea funzioni
    vettore=creaVett(n);
    vettore=InserisciVett(vettore, n);
    stampaVett(vettore, n);
    printf("Vuoi aumentare la dimensione? Se vuoi aumentarle inserisci 1 altrimenti 0");
    scanf("%d", &scelta);

    if(scelta==1){
        vettore=aumentaDim(int _*vettore, int _n);
    }
    stampaVett(vettore, n);
    free(vettore);
}