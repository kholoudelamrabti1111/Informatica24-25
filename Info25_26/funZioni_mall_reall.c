/*Scrivi un programma in C che gestisca un insieme
di numeri interi usando un array dinamico.
Il programma deve permettre, tramitte menu':
1. Aggiungere un numero (espandendo l'array con realloc)
2. Visualizzare tutti numeri
3. Cercare un numero specifico
4. Ordinare i numeri in ordine crescente
5. eleminare un numero scelto
6. uscire
*/

#include <stdio.h>
#include <stdlib.h>

int* creaVett(int _n){
    int vettore=(int*)malloc(_n *sizeof(int));
    if(vettore==NULL){
        printf("Errore di allocazione di memoria!: ");
    return NULL;
    }
    return _vettore;
}

int* inserisciVett(int _*vettore, int _n){
    
}