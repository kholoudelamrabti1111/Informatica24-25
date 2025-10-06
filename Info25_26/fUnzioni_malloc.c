/*Scrivere un programma in linguaggio c che:
1. Allochi dinamicamente un array iniziale di n numeri
2. Inserimento dei valori
3. Stampa array
4. Calcoli la somma degli elementi multipli di 3 
5. Creiamo un nuovo array contenente solo valori dispari
*/
#include <stdio.h>
#include <stdlib.h>

int* creaVett(int _n){
    int * vettore=(int*)malloc(_n *sizeof(int));
    if(vettore==NULL){
        printf("Errore di allocazione memoria!: ");
        return NULL;
    }
    return vettore;
}

int* inserisciVett(int *_vettore, int _n){
    for(int i=0; i<_n; i++){
        printf("Inserisci l'elemento: ");
        scanf("%d", &_vettore[i]);
    }
    return _vettore;
}

void stampaVett(int *_vettore, int _n){
    printf("Hai inserito i seguenti elementi: ");
    for(int i=0; i<_n; i++){
        printf("%d", _vettore[i]);
    }
    printf("\n");
}

int calcolaSomma(int *_vettore, int _n){
    int somma=0;
    for(int i=0; i<_n; i++)
        if (_vettore[i]%3==0)
            somma+=_vettore[i];
    return somma;
        
}

int *estraidispari(int *_vettore, int _n, int *_dimDispari){//creare vettor solo con valori dispari
    //*tmp è array temporaneo
    int *_dispari=NULL;
    *_dimDispari=0;
    for(int i=0; i<_n; i++){
        if(_vettore[i]%2!=0){
            (*_dimDispari)++;
            int *tmp=realloc(_dispari, (*_dimDispari)*sizeof(int));
            if(tmp==NULL){
                printf("Errore di allocazione di memoria!");
                free(_dispari);
                return NULL;
            }
            _dispari=tmp;
            _dispari[(*_dimDispari)-1]=_vettore[i];
        }    
    }   
    return _dispari;
}

int main(){

    int *vettore=NULL;//puntatore vettore
    int *dispari;
    int dimDispari;
    int n;
    

    do{
        printf("Inserisci la quantità degli elementi: ");
        scanf("%d", &n);
    }while(n<0);


    //Creare funzioni da usare
    vettore=creaVett(n);//creo il vettore
    vettore=inserisciVett(vettore, n);//carico 
    stampaVett(vettore, n);//stampo
    printf("La somma degli elementi divisibili per 3 vale: %d\n", calcolaSomma(vettore, n));
    //creiamo l'array contenente i valori dipari tramite la realloc
    +dispari = estraidispari(vettore, n, &dimDispari);
    printf("L'array contenente gl elementi dispari risulta:");
    stampaVett(dispari, dimDispari);
    free(vettore);
    free(dispari);
}