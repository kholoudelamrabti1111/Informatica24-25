/*GENERATA UNA DATA TRA L’ANNO 2000 E L’ANNO 2024 AD OGGI E SAPENDO
CHE GIACOMO HA 20 GIORNI PER CONSEGNARE IL LAVORO ASSEGNATO
COMUNICARE LA DATA DI CONSEGNA.*/

#include <stdio.h>
#include <stdlib.h>
#include <time>

int main(){
    srand(time(NULL))
    int giorno;
    int mese;
    int anno;ùint data;
    int bisestile;
    
    printf("Inserisci il giorno");
    scanf("%d", &giorno);
    printf("Inserisci il mese");
    scanf("%d", &mese);
    printf("Inserisci il anno");
    scanf("%d", &anno);

    if(anno%100==0)
        if(anno%400==0)
            printf("\nL'anno è bisestile");
            bisestile=1;
    else{
        if(anno%4==0){
            printf("\nL'anno è bisestile");
            bisestile=1;
        
        rand()%2025;
        dataanno=rand()%2025;
        datamese=rand()%12;
        datagiorno=rand()%31;
        
        printf("La data generata è %d, %d, %d", dataanno, datamese, datagiorno);

        return 0;

        
    }
   




    

}