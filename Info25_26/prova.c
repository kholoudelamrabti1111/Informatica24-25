#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Auto{
    char targa[9];
    char modello[20];
    char marca[20];
    float prezzo_giorno;
}Auto;

Auto* inserisciAuto(Auto* parco, int* n){
    Auto nuova_auto;
    parco = (Auto*)realloc(parco, (*n + 1) * sizeof(Auto));
    if(parco == NULL){
        printf("Errore!");
        exit(1);
    }

    printf("---Inserisci nuova auto\n---");

    printf("\nTarga:" );
    fgets(nuova_auto.targa, 9, stdin);
    
    printf("Modello:" );
    fgets(nuova_auto.modello, 20, stdin);

    printf("Marca:" );
    fgets(nuova_auto.marca, 20, stdin);

    printf("Prezzo:" );
    scanf("%f", &nuova_auto.prezzo_giorno);
}

void stampaAuto(Auto* parco, int n){
    for(int i=0; i<n; i++){
        printf("---Visualizza auto----%d\n", i+1);

        printf("%s, %s, %s, %f\n", parco[i].targa, parco[i].modello, parco[i].marca, parco[i].prezzo_giorno);
    }
}

int main(){
    Auto* parco = NULL;
    int n=0; 
    int scelta;

    do{
        printf("\n--MENU---\n");
        printf("1 - Inserisci\n");
        printf("2 - Visualizza\n");
        printf("0 - Esci\n");
        printf("Scelta\n");
        scanf("%d", &scelta);
        getchar();

        switch(scelta){
            case 1: 
                parco= inserisciAuto(parco, &n);
                break;

            case 2: 
                stampaAuto(parco, n);
                break;

            case 0: 
                printf("Esci dal programma\n");
                break;        

            default: 
                printf("Scelta non valida\n");   
        }
    }while(scelta!=0);

    free(parco);
}
