/* Creiamo un menù di richieste
1) caricare un array;
2) stampare l'array;
3) ordina l'array tramite la tecnica del bubble sort;
*/
#include <stdio.h>
#include 'libreria.c'

#define DIM 5

int main(){
    int vett[DIM];
    int scelta;
do{
    printf("MENU");
    printf("\n1) Carica l'array");
    printf("\n2) Stampa l'array");
    printf("\n3) Ordina tramite il bubble sort");
    printf("\nDigita 0 per terminare");
    scanf("%d", &scelta);

    switch(scelta){
        case 1:{
            caricaVett(vett, DIM);
            break;
        }
        case 2:{
            stampaVett(vett, DIM, '-');
            break;
        }
        case 3:{
            caricaBubble(vett, DIM);
            break;
        }
        default:
        break;
    }
            
        
    

}while(scelta!=0);
  
}