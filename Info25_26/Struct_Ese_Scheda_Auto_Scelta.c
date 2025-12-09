#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char targa[8];
    char marca[20];
    char modello[20];
    float prezzo;

}Auto;

Auto* inserisci_auto(Auto* parco, int*n){
    Auto nuova_auto;
    printf("Inserisci la targa dell'auto: ");
    fgets(nuova_auto.targa,8,stdin);
    printf("Inserisci il modello dell'auto: ");
    fgets(nuova_auto.modello,20,stdin);
    printf("Inserisci la marca dell' auto: ");
    fgets(nuova_auto.marca,20,stdin);
    printf("Inserisci il prezzo dell' auto: ");
    scanf("%f", &nuova_auto.prezzo);
    getchar();
    parco = (Auto*)realloc(parco, ((*n)+1)*sizeof(Auto));
    if(parco == NULL){
        printf("errore di allocazione.");
        exit(1);
    }
    parco[*n] = nuova_auto;
    (*n)++;
    return parco;
}

void stampa_auto(Auto*parco, int n){
    printf("---Elenco auto---\n");
    for(int i=0;i<n;i++){
        printf("Targa %s", parco[i].targa);
        printf("Marca %s", parco[i].marca);
        printf("Modello %s", parco[i].modello);
        printf("Prezzo %f", parco[i].prezzo);
    }
}

int main(){
    Auto*parco = NULL;
    int numero_auto = 0;
    int scelta;
    do {
        printf("1. Aggiungi auto: \n 2. Stampa auto: \n 3. Esci\n");
        scanf("%d", &scelta);
        getchar();
        switch(scelta){
            case 1:
                parco = inserisci_auto(parco, &numero_auto);
                break;
            case 2:
                if(numero_auto == 0){
                    printf("Non ci sono auto da stampare!  \n");
                } else {
                    stampa_auto(parco, numero_auto);
                }
                break;
            case 3:
                printf("Uscita dal programma...\n\n");
                break;
            default:
                printf("Scelta non valida...\n");
        }
    }while(scelta != 3);

    free(parco);