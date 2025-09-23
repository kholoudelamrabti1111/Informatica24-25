/*Scrivere un programma in C che gestisca un insieme di numeri interi usando un array dinamico.
Il programma deve permettere, tramite menù:
    1. Aggiungere un numero (espandendo l’array con realloc)
    2. Visualizzare tutti i numeri
    3. Cercare un numero specifico
    4. Ordinare i numeri in ordine crescente
    5. Eliminare un numero scelto
    6. Uscire
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int *numero=NULL;// Array dinamico
    int DIM=0;//Quanti elementi ci sono
    int scelta, i, n, trovato;//Questa variabile trovato è un flag, se lo trova l'utente inserisce 1.

    do{
        printf("\n-----MENU----\n");
        printf("1.Aggiungere un numero (espandendo l’array con realloc)\n");
        printf("2.Visualizzare tutti i numeri\n");
        printf("3.Cercare un numero specifico\n");
        printf("4.Ordinare i numeri in ordine crescente\n");
        printf("5.Eliminare un numero scelto\n");
        printf("6.Uscire\n");
        printf("Esegui una scelta\n");
        scanf("%d", &scelta);

        switch(scelta){/*ripassare su classroom*/
            case 1:
                printf("Inserisci un numero: ");
                scanf("%d", &n);
                numero=(int *)realloc(numero, (DIM + 1)*sizeof(int));/*aggiungo +1 perchè aggiungo un nuovo numero*/
                if(numero=NULL){
                    printf("Errore di allocazione\n");
                    return 1;
                }
                /*Aggiungo un numero alla dimensione*/
                numero[DIM]=n;
                DIM++;
                printf("Numero aggiunto\n");
            break;
            case 2:/*Visuallizare array*/
                printf("Contenuto dellarray: ");
                if(DIM==0)//obb.
                    printf("Array vuoto");
                else    
                    for(i=0;i<DIM; i++){
                        printf("%D\t", n[i]);
                    }    
            break;
            case 3:
                    printf("Numero da cercare: ");
                    scanf("%d", &n);
                    for(i=0; i<DIM; i++){
                        if(n[i]==n){
                            printf("Numero trovato in posizione %d\n", i);
                        }
                    }
                    if(trovato==0){//Se la variabile flag è uguale a 0 allora l'elemento non è stato trovato
                        printf("Elemento non trovato\n");
                    }
            break;
        }

    }while(scelta!=6);

}