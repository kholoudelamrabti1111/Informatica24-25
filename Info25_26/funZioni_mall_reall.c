/*Scrivi un programma in C che gestisca un insieme
di numeri interi usando un array dinamico.
Il programma deve permettre, tramitte menu':
1. Aggiungere un numero (espandendo l'array con realloc)
2. Visualizzare tutti numeri
3. Cercare un numero specifico
4. Ordinare i numeri in ordine crescente
5. Eliminare un numero scelto
6. Uscire
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* creaVett(int _n){
    int vettore=(int*)malloc(_n *sizeof(int));
    if(vettore==NULL){
        printf("Errore di allocazione di memoria!: ");
    return NULL;
    }
    return _vettore;
}

int* inserisciVett(int *_vettore, int _n){
    for(int i=0, i<_n; i++){
        printf("Inserisci l'elemento: ");
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


int main(){
    int *vettore=NULL;
    int scelta;


    do{
        printf("Inserisci la quantità degli elementi: ");
        scanf("%d", &scelta);
    }while(scelta<=0);


}